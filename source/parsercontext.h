#ifndef LANAB_CONTEXT
#define LANAB_CONTEXT

#include <iostream>
using namespace std;

class Parser_Context
{
public:
   void* scanner;   // the scanner state
   int result;      // result of the program
   int a;           // value of the next a
   int b;           // value of the next b
   istream* is;     // input stream
   int esc_depth;   // escaping depth

public:
   Parser_Context(istream* is = &cin)
   {
      init_scanner();
      this->is = is;
      a = 1;
      b = 1;
   }

   virtual ~Parser_Context()
   {
      destroy_scanner();
   }

// Defined in LanAB.l
protected:
   void init_scanner();   
   void destroy_scanner();
};

int Parser_parse(Parser_Context*);

#endif // LANAB_CONTEXT
