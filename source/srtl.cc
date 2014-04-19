#include <iostream>
#include "srtl-driver.hh"
#include <cstring>
#include <pthread.h>
#include <signal.h>

srtl_driver *driver;

void segfault_sigaction(int signal, siginfo_t *si, void *arg)
{
    driver->currentPattern = NULL;
    driver->messages = "Sementation fault in parser";
    pthread_exit(driver);
}

void *Execute(void *file)
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(struct sigaction));
    sigemptyset(&sa.sa_mask);
    sa.sa_sigaction = segfault_sigaction;
    sa.sa_flags   = SA_SIGINFO;

    sigaction(SIGSEGV, &sa, NULL);


    driver=new srtl_driver;
    char* filenameWithLn=(char*)file;
    char * pch;
    pch = strtok (filenameWithLn,"|");
    char* filename = pch;
    pch = strtok (NULL, "|");
    int lineNo=srtl_driver::stoi(string(pch));
    driver->lineToStop = lineNo;
    driver->setLogLevel (srtl_driver::err);
    driver->initializeDotFile ();
    string s ("test.md");
    driver->setOutFileName (&s);
    driver->initializeOutFile ();
    driver->messages="";
    if(driver->parse (filename)){
        driver->currentPattern = NULL;
        driver->result = 1;
    }
    else if(driver->messages!=""){
        driver->currentPattern = NULL;
        driver->result = 1;
    }
   pthread_exit(driver);
}

int oldmain() {
    bool displayStatsFlag = true;
    pthread_t thread;
    int rc = pthread_create(&thread, NULL,Execute, (void *)NULL);
    if (rc){
        cout << "Error:unable to create thread," << rc << endl;
        exit(-1);
    }
    srtl_driver *driver;
    pthread_join(thread, (void**)&driver);
    if (displayStatsFlag)
           driver->calculateAndDisplayStats ();
    std::cout << std::endl;
    pthread_exit(NULL);
}
