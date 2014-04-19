#include <QApplication>
#include "mainwindow.h"
#include "srtl-driver.hh"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.showMaximized();
    w.show();
    
    return a.exec();
}
