/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* First part of user declarations.  */

/* Line 279 of lalr1.cc  */



#include "srtl-parser.tab.hh"

/* User implementation prologue.  */

/* Line 285 of lalr1.cc  */

/* Unqualified %code blocks.  */
/* Line 286 of lalr1.cc  */


#include "srtl-driver.hh"


/* Line 286 of lalr1.cc  */



# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
/* Line 353 of lalr1.cc  */


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  srtl_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  srtl_parser::srtl_parser (srtl_driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  srtl_parser::~srtl_parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  srtl_parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  srtl_parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  srtl_parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  srtl_parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  srtl_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  srtl_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  srtl_parser::debug_level_type
  srtl_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  srtl_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  srtl_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  srtl_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  srtl_parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */

{
    // Initialize the initial location.
    yylloc.begin.filename = yylloc.end.filename = &driver.file;
}
/* Line 545 of lalr1.cc  */


    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval, &yylloc, driver);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
          case 2:
/* Line 670 of lalr1.cc  */

    {
		}
    break;

  case 4:
/* Line 670 of lalr1.cc  */

    { yyclearin; yyerrok; }
    break;

  case 5:
/* Line 670 of lalr1.cc  */

    {
        if (!driver.currentPattern->inError ()){
            driver.debug (srtl_driver::deb , "Abstract Pattern.");
            driver.addSymTabEntry (driver.currentPattern);
            driver.addToConstructTally (driver.currentPattern->getPatType ());
        } else {
            driver.debug (srtl_driver::err, "Abstract Pattern in Error: " + driver.currentPattern->getPatName ());
        }
	driver.currentPattern->createPattern();
	if(driver.stopHere){
	    YYACCEPT;
	}
    }
    break;

  case 6:
/* Line 670 of lalr1.cc  */

    {
        if (!driver.currentPattern->inError ()) {
        	driver.debug (srtl_driver::deb , "Concrete Pattern: " + driver.currentPattern->getPatName ());
            driver.currentPattern->createPattern ();
            driver.addToConstructTally (driver.currentPattern->getPatType ());
            if (driver.currentPattern->getPatType () >= Pattern::insnAndSplit && 
                driver.currentPattern->getPatType () <= Pattern::peep2) {
                driver.debug (srtl_driver::deb, driver.currentPattern->getPatName ());
                driver.currentPattern->createPatternOut ();         
            }
            driver.write (srtl_driver::outPattern);
        	driver.addSymTabEntry (driver.currentPattern);
		}else{
			/* Report Error about the pattern and 
			 * proceed to the next pattern. */
			 driver.debug(srtl_driver::err, "Pattern in Error: " + driver.currentPattern->getPatName ());
		}
	if(driver.stopHere){
	    YYACCEPT;
	}
    }
    break;

  case 7:
/* Line 670 of lalr1.cc  */

    {
        driver.debug (srtl_driver::deb , "List Pattern.");
        (yysemantic_stack_[(1) - (1)].L)->createPattern();
     //   driver.addToConstructTally (driver.currentPattern->getPatType ());
        if ((yysemantic_stack_[(1) - (1)].L)->getPatType () == Pattern::define_code_iterator) {
            ListPattern* lp = static_cast <ListPattern*> ((yysemantic_stack_[(1) - (1)].L));
            string name = *(lp->getElemList ()->getList ().front ()->getName ());
            int k = driver.findRtlOperandSymTabEntry (name);
            driver.addRtlOperandSymTabEntry ((yysemantic_stack_[(1) - (1)].L)->getPatName (),  k);

        }
        driver.write (srtl_driver::outPattern);
        delete (yysemantic_stack_[(1) - (1)].L);
    }
    break;

  case 8:
/* Line 670 of lalr1.cc  */

    {
        driver.write (*(yysemantic_stack_[(1) - (1)].string));
    }
    break;

  case 9:
/* Line 670 of lalr1.cc  */

    {
        printf (" ");
    }
    break;

  case 10:
/* Line 670 of lalr1.cc  */

    {
    }
    break;

  case 11:
/* Line 670 of lalr1.cc  */

    {
        driver.currentPattern = 0;
        driver.currentPattern = new AbstPattern(*(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
	if((yylocation_stack_[(1) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 12:
/* Line 670 of lalr1.cc  */

    {
        /* Search Symbol Table Or Known Names
         * for abstract patterns. */
        Pattern* p = driver.findSymTabEntry (*(yysemantic_stack_[(2) - (2)].string));

        if(p == NULL) {
            int i = driver.findRtlOperandSymTabEntry (*(yysemantic_stack_[(2) - (2)].string));
            if (i < 0) {
                driver.currentPattern->setError ();
            } else {
                ModeStmt* ms = new ModeStmt ();
                vector<int>* access = new vector<int>();
                //access->push_back(0);
                ms->addAccessTree (access);
                ms->setPatternName(*(yysemantic_stack_[(2) - (2)].string));
                AbstPattern* ap = static_cast<AbstPattern*> (driver.currentPattern);
                ap->addStmt(*ms);
                delete access;
                delete ms;
                if (driver.generateDotFile) {
                    driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                    driver.dotFile << "\"" + *(yysemantic_stack_[(2) - (2)].string) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
                }
                driver.incrementAbstractPatternCount (*(yysemantic_stack_[(2) - (2)].string), Pattern::abstract);
                driver.addToStatTree (*(yysemantic_stack_[(2) - (2)].string), driver.currentPattern->getPatName (), 1);
            }
            delete (yysemantic_stack_[(2) - (2)].string);
        } else{
            if (p->getPatType () != Pattern::abstract) {
                int i = driver.findRtlOperandSymTabEntry (*(yysemantic_stack_[(2) - (2)].string));
                if (i < 0) {
                    driver.currentPattern->setError ();
                } else {
                    ModeStmt* ms = new ModeStmt ();
                    vector<int>* access = new vector<int>();
                    //access->push_back(0);
                    ms->addAccessTree (access);
                    ms->setPatternName(*(yysemantic_stack_[(2) - (2)].string));
                    AbstPattern* ap = static_cast<AbstPattern*> (driver.currentPattern);
                    ap->addStmt(*ms);
                    delete access;
                    delete ms;
                    if (driver.generateDotFile) {
                        driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                        driver.dotFile << "\"" + driver.formatNodeName (*(yysemantic_stack_[(2) - (2)].string)) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [color=red];\n";
                    }
                    driver.incrementAbstractPatternCount (*(yysemantic_stack_[(2) - (2)].string), Pattern::abstract);
                    driver.addToStatTree (*(yysemantic_stack_[(2) - (2)].string), driver.currentPattern->getPatName (), 1);
                }
                delete (yysemantic_stack_[(2) - (2)].string);    
            } else {
                driver.currentPattern->setParentPattern (p);
                if (driver.generateDotFile) {
                    driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                    driver.dotFile << "\"" + driver.formatNodeName (*(yysemantic_stack_[(2) - (2)].string)) + "\" [shape=box,style=filled,color=orange];\n";
                    driver.dotFile << "\"" + driver.formatNodeName (*(yysemantic_stack_[(2) - (2)].string)) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [color=red];\n";
               }
                driver.incrementAbstractPatternCount (*(yysemantic_stack_[(2) - (2)].string), Pattern::abstract);
                driver.addToStatTree (*(yysemantic_stack_[(2) - (2)].string), driver.currentPattern->getPatName (), 1);
            }
        }
    }
    break;

  case 13:
/* Line 670 of lalr1.cc  */

    {
        AbstPattern* ap = static_cast<AbstPattern*> (driver.currentPattern);
        ap->addStmts(*(yysemantic_stack_[(6) - (5)].modeStmtVector)); 
        delete (yysemantic_stack_[(6) - (5)].modeStmtVector);
    }
    break;

  case 14:
/* Line 670 of lalr1.cc  */

    {

    }
    break;

  case 15:
/* Line 670 of lalr1.cc  */

    {

    }
    break;

  case 16:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = (yysemantic_stack_[(2) - (2)].modeStmt);

        Pattern* p = driver.findSymTabEntry (ms->getPatternName ());
        if (p != NULL) {
          if (p->getPatType () != Pattern::abstract) {
            (yyval.modeStmtVector)->push_back (*(yysemantic_stack_[(2) - (2)].modeStmt));
          } else {
          AbstPattern* ap = dynamic_cast <AbstPattern*> (p);
          vector<ModeStmt>* tmsv = new vector<ModeStmt> (*ap->getStmts ());

          vector<int>* at = ms->getAccessTree ();

          for (unsigned int i = 0; i < tmsv->size (); i++) {
            vector<int>* tat = tmsv->at(i).getAccessTree ();
            if ( tat->size () == 1 && i == 0) {
                if (tat->at (i) == 0) {
                    tat->clear ();
                }
            }
            tat->insert (tat->begin (), at->begin (), at->end ());
            (yyval.modeStmtVector)->push_back (tmsv->at(i));
          }
          delete tmsv;
          }
        } else {
            (yyval.modeStmtVector)->push_back (*(yysemantic_stack_[(2) - (2)].modeStmt));
        }
        delete ms;
    }
    break;

  case 17:
/* Line 670 of lalr1.cc  */

    {
        vector<ModeStmt>* msv = new vector<ModeStmt> ();

        ModeStmt* ms = (yysemantic_stack_[(1) - (1)].modeStmt);

        Pattern* p = driver.findSymTabEntry (ms->getPatternName ());
        if (p != NULL) {
          if (p->getPatType () != Pattern::abstract) {
            msv->push_back (*(yysemantic_stack_[(1) - (1)].modeStmt));
          } else {

              AbstPattern* ap = dynamic_cast <AbstPattern*> (p);
              vector<ModeStmt>* tmsv = new vector<ModeStmt> (*ap->getStmts ());

              vector<int>* at = ms->getAccessTree ();

              for (unsigned int i = 0; i < tmsv->size (); i++) {
                vector<int>* tat = tmsv->at(i).getAccessTree ();
                if ( tat->size () == 1 && i == 0) {
                    if (tat->at (i) == 0) {
                        tat->clear ();
                    }
                }
                tat->insert (tat->begin (), at->begin (), at->end ());
                msv->push_back (tmsv->at(i));
              }
              delete tmsv;
          }
        } else {
            msv->push_back (*(yysemantic_stack_[(1) - (1)].modeStmt));
        }
        delete ms;
        (yyval.modeStmtVector) = msv;
    }
    break;

  case 18:
/* Line 670 of lalr1.cc  */

    {    
    }
    break;

  case 19:
/* Line 670 of lalr1.cc  */

    {
    }
    break;

  case 20:
/* Line 670 of lalr1.cc  */

    {
        }
    break;

  case 21:
/* Line 670 of lalr1.cc  */

    {
        }
    break;

  case 22:
/* Line 670 of lalr1.cc  */

    {
        string t = "";
        for (unsigned int i = 0; i < (yysemantic_stack_[(7) - (2)].stringVector)->size (); i++) {
            t.append ((yysemantic_stack_[(7) - (2)].stringVector)->at(i));
        }
        driver.currentPattern = new ConcretePattern (t, Pattern::regCons);
        // Make this pattern compatible with the rest of the patterns.
        driver.currentPattern->setSubType (Pattern::instantiates);
        ModeStmt* ms = new ModeStmt ();
        vector<int>* access = new vector<int>();
        //access->push_back(0);
        ms->addAccessTree (access);
        ms->setPatternName (t);
        AbstPattern* ap = new AbstPattern ("set");
        ap->addStmt(*ms);
        driver.currentPattern->setParentPattern (ap);
        ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
        cp->addModeStmts (*(yysemantic_stack_[(7) - (6)].modeStmtVector));
        delete (yysemantic_stack_[(7) - (2)].stringVector);
        delete (yysemantic_stack_[(7) - (6)].modeStmtVector);
	if((yylocation_stack_[(7) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 23:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::cons);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 24:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::attr);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 25:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::memCons);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 26:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::addCons);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 27:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::insn);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 28:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::exp);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 29:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::insnReservation);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 30:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::predicate);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 31:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::specialPredicate);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 32:
/* Line 670 of lalr1.cc  */

    {
        driver.currentPattern = new ConcretePattern(Pattern::peep2);
        driver.currentPattern->setPatName ("peep2_" + driver.itos (driver.getConstructIndex (driver.currentPattern->getPatType ())));
    }
    break;

  case 33:
/* Line 670 of lalr1.cc  */

    {
        driver.currentPattern = new ConcretePattern(Pattern::split);
        driver.currentPattern->setPatName ("split_" + driver.itos (driver.getConstructIndex (driver.currentPattern->getPatType ())));
    }
    break;

  case 34:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        driver.currentPattern = new ConcretePattern (t, Pattern::insnAndSplit);
        delete (yysemantic_stack_[(3) - (1)].stringVector);
    }
    break;

  case 35:
/* Line 670 of lalr1.cc  */

    {
        /* Search Symbol Table for abstract patterns. */
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (2)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            int i = driver.findRtlOperandSymTabEntry (t);
            if (i < 0) {
                driver.currentPattern->setError ();
            } else {
                ModeStmt* ms = new ModeStmt ();
                vector<int>* access = new vector<int>();
                //access->push_back(0);
                ms->addAccessTree (access);
                ms->setPatternName(t);
                AbstPattern* ap = new AbstPattern (t);
                ap->addStmt(*ms);
                driver.currentPattern->setParentPattern (ap);
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setSubType (Pattern::instantiates);
            }
            delete (yysemantic_stack_[(3) - (2)].stringVector);
        } else {
            if (p->getPatType () != Pattern::abstract) {
                int i = driver.findRtlOperandSymTabEntry (t);
                if (i < 0) {
                    driver.currentPattern->setError ();
                } else {
                    ModeStmt* ms = new ModeStmt ();
                    vector<int>* access = new vector<int>();
                    //access->push_back(0);
                    ms->addAccessTree (access);
                    ms->setPatternName(t);
                    AbstPattern* ap = new AbstPattern (t);
                    ap->addStmt(*ms);
                    driver.currentPattern->setParentPattern (ap);
                    ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                    cp->setSubType (Pattern::instantiates);
                }
                delete (yysemantic_stack_[(3) - (2)].stringVector);
            } else {
                driver.currentPattern->setParentPattern (p);
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setSubType (Pattern::instantiates);
                delete (yysemantic_stack_[(3) - (2)].stringVector);
            }
        }
	if((yylocation_stack_[(3) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 36:
/* Line 670 of lalr1.cc  */

    {
        /* Search Symbol Table for abstract patterns. */
        string t = driver.appendStrings ((yysemantic_stack_[(4) - (2)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            int i = driver.findRtlOperandSymTabEntry (t);
            if (i < 0) {
                driver.currentPattern->setError ();
            } else {
                ModeStmt* ms = new ModeStmt ();
                vector<int>* access = new vector<int>();
                //access->push_back(0);
                ms->addAccessTree (access);
                ms->setPatternName(t);
                AbstPattern* ap = new AbstPattern (t);
                ap->addStmt(*ms);
                driver.currentPattern->setParentPattern (ap); 
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setCmdBody (*(yysemantic_stack_[(4) - (4)].string));
                cp->setSubType (Pattern::instantiates);
                if (driver.generateDotFile) {
                    driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=\".3 .7 1.0\"];\n";
                    driver.dotFile << "\"" + driver.formatNodeName (t) + "\" [shape=box,style=filled,color=\".3 .7 1.0\"];\n";
                    driver.dotFile << "\"" + driver.formatNodeName (t) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [color=blue];\n";
                }
                driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
                driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
            }
            delete (yysemantic_stack_[(4) - (2)].stringVector);
		} else {
            if (p->getPatType () != Pattern::abstract) {
                int i = driver.findRtlOperandSymTabEntry (t);
                if (i < 0) {
                    driver.currentPattern->setError ();
                } else {
                    ModeStmt* ms = new ModeStmt ();
                    vector<int>* access = new vector<int>();
                    //access->push_back(0);
                    ms->addAccessTree (access);
                    ms->setPatternName(t);
                    AbstPattern* ap = new AbstPattern (t);
                    ap->addStmt(*ms);
                    driver.currentPattern->setParentPattern (ap);
                    ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                    cp->setSubType (Pattern::instantiates);
                    cp->setCmdBody (*(yysemantic_stack_[(4) - (4)].string));
                    if (driver.generateDotFile) {
                        driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=\".3 .7 1.0\"];\n";
                        driver.dotFile << "\"" + driver.formatNodeName (t) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [color=blue];\n";
                    }
                driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
                driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
                }
                delete (yysemantic_stack_[(4) - (2)].stringVector);
            } else {
                driver.currentPattern->setParentPattern (p);
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setCmdBody (*(yysemantic_stack_[(4) - (4)].string));
                cp->setSubType (Pattern::instantiates);
                delete (yysemantic_stack_[(4) - (2)].stringVector);
                if (driver.generateDotFile) {
                    driver.dotFile << "\"" + driver.formatNodeName (t) + "\" [shape=box,style=filled,color=orange];\n";
                    driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=\".3 .7 1.0\"];\n";
                    driver.dotFile << "\"" + driver.formatNodeName (t) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [color=blue];\n";
                }
                driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
                driver.addToStatTree (t, driver.currentPattern->getPatName (),2 );
            }
        }
	if((yylocation_stack_[(4) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 37:
/* Line 670 of lalr1.cc  */

    {
        /* Search Symbol Table for Concrete Patterns. */
        string t = driver.appendStrings ((yysemantic_stack_[(6) - (2)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if( p == NULL) {
        	driver.currentPattern->setError();
		} else {
            driver.currentPattern->setParentPattern (p);
            ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
            cp->setCmdBody(*(yysemantic_stack_[(6) - (6)].string));
            cp->setSubType (Pattern::overrides);
            if (driver.generateDotFile) {
                driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=\".3 .7 1.0\"];\n";
                driver.dotFile << "\"" + driver.formatNodeName (t) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
            } 
            driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
            driver.incrementConcretePatternCountForOverrides (t);
        }
        delete (yysemantic_stack_[(6) - (2)].stringVector); 
	if((yylocation_stack_[(6) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;

	}
    }
    break;

  case 38:
/* Line 670 of lalr1.cc  */

    {
        /* Search Symbol Table for Concrete Patterns. */
        string t = driver.appendStrings ((yysemantic_stack_[(6) - (2)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if( p == NULL) {
            driver.currentPattern->setError();
        } else {
            driver.currentPattern->setParentPattern (p);
            ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
            cp->setCmdBody(*(yysemantic_stack_[(6) - (6)].string));
            cp->setSubType (Pattern::overrides);
            if (driver.generateDotFile) {
                driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=\".3 .7 1.0\"];\n";
                driver.dotFile << "\"" + driver.formatNodeName (t) + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
            }
            driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
            driver.incrementConcretePatternCountForOverrides (t);
        }
        delete (yysemantic_stack_[(6) - (2)].stringVector); 
	if((yylocation_stack_[(6) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 39:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(5) - (4)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            int i = driver.findRtlOperandSymTabEntry (t);
            if (i < 0) {
                driver.currentPattern->setError ();
            } else {
                ModeStmt* ms = new ModeStmt ();
                vector<int>* access = new vector<int>();
                //access->push_back(0);
                ms->addAccessTree (access);
                ms->setPatternName (t);
                AbstPattern* ap = new AbstPattern (t);
                ap->addStmt(*ms);
                driver.currentPattern->setParentPattern (ap);
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setSubType (Pattern::instantiates);
                if (driver.generateDotFile) {
                    driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                    driver.dotFile << "\"" + t + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
                }   
                driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
                driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
            }
            delete (yysemantic_stack_[(5) - (4)].stringVector);
        } else {
            driver.currentPattern->setParentPattern (p);
            ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
            cp->setSubType (Pattern::instantiates);
            delete (yysemantic_stack_[(5) - (4)].stringVector);
            if (driver.generateDotFile) {
                driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                driver.dotFile << "\"" + t + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
            }   
            driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
            driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
        }
	if((yylocation_stack_[(5) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 40:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(5) - (4)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            driver.currentPattern->setError ();
        } else {
            driver.currentPattern->setParentPattern (p);
            ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
            cp->setSubType (Pattern::overrides);
        }
        delete (yysemantic_stack_[(5) - (4)].stringVector);
	if((yylocation_stack_[(5) - (1)]).begin.line>=driver.lineToStop){
	    driver.stopHere = true;
	}
    }
    break;

  case 41:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->setCmdBody (*(yysemantic_stack_[(5) - (5)].string));
    }
    break;

  case 42:
/* Line 670 of lalr1.cc  */

    {

    }
    break;

  case 43:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(9) - (4)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            int i = driver.findRtlOperandSymTabEntry (t);
            if (i < 0) {
                driver.currentPattern->setError ();
            } else {
                ModeStmt* ms = new ModeStmt ();
                vector<int>* access = new vector<int>();
                //access->push_back(0);
                ms->addAccessTree (access);
                ms->setPatternName (t);
                AbstPattern* ap = new AbstPattern (t);
                ap->addStmt(*ms);
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setSubTypeOut (Pattern::instantiates);
                cp->setCmdBodyOut (*(yysemantic_stack_[(9) - (9)].string));
                cp->setParentPatternOut (ap);
                if (driver.generateDotFile) {
                    driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                    driver.dotFile << "\"" + t + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
                }   
//                driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
            }
            delete (yysemantic_stack_[(9) - (4)].stringVector);
        } else {
            ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
            cp->setSubTypeOut (Pattern::instantiates);
            cp->setCmdBodyOut (*(yysemantic_stack_[(9) - (9)].string));
            cp->setParentPatternOut (p);
            delete (yysemantic_stack_[(9) - (4)].stringVector);
            if (driver.generateDotFile) {
                driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                driver.dotFile << "\"" + t + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
            }   
            driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
//            driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
        }
    }
    break;

  case 44:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(5) - (4)].stringVector));
        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            int i = driver.findRtlOperandSymTabEntry (t);
            if (i < 0) {
                driver.currentPattern->setError ();
            } else {
                ModeStmt* ms = new ModeStmt ();
                vector<int>* access = new vector<int>();
                //access->push_back(0);
                ms->addAccessTree (access);
                ms->setPatternName (t);
                AbstPattern* ap = new AbstPattern (t);
                ap->addStmt(*ms);
                ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
                cp->setSubTypeOut (Pattern::instantiates);
                cp->setCmdBodyOut ("");
                cp->setParentPatternOut (ap);
                if (driver.generateDotFile) {
                   driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                   driver.dotFile << "\"" + t + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
                }   
                driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
//                driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
            }
            delete (yysemantic_stack_[(5) - (4)].stringVector);
        } else {
            ConcretePattern* cp = static_cast <ConcretePattern*> (driver.currentPattern);
            cp->setSubTypeOut (Pattern::instantiates);
            cp->setCmdBodyOut ("");
            cp->setParentPatternOut (p);
            delete (yysemantic_stack_[(5) - (4)].stringVector);
            if (driver.generateDotFile) {
                driver.dotFile << "\"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\" [shape=box,style=filled,color=orange];\n";
                driver.dotFile << "\"" + t + "\" -> \"" + driver.formatNodeName (driver.currentPattern->getPatName ()) + "\";\n";
            }   
            driver.incrementAbstractPatternCount (t, driver.currentPattern->getPatType ());
//           driver.addToStatTree (t, driver.currentPattern->getPatName (), 2);
        }
    }
    break;

  case 45:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(9) - (4)].stringVector));
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->setCmdBodyOut (*(yysemantic_stack_[(9) - (9)].string));
        cp->setSubTypeOut (Pattern::overrides);

        Pattern* p = driver.findSymTabEntry (t);
        if (p == NULL) {
            driver.currentPattern->setError ();
            } else {
            cp->setParentPatternOut (p);
        }
        delete (yysemantic_stack_[(9) - (9)].string);
        delete (yysemantic_stack_[(9) - (4)].stringVector);
    }
    break;

  case 46:
/* Line 670 of lalr1.cc  */

    {
    }
    break;

  case 47:
/* Line 670 of lalr1.cc  */

    {
    }
    break;

  case 48:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addOperands (*(yysemantic_stack_[(6) - (3)].operandList));
        cp->addModeStmts (*(yysemantic_stack_[(6) - (6)].modeStmtVector));
        delete (yysemantic_stack_[(6) - (3)].operandList);
        delete (yysemantic_stack_[(6) - (6)].modeStmtVector);
    }
    break;

  case 49:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addOperands (*(yysemantic_stack_[(5) - (3)].operandList));
        delete (yysemantic_stack_[(5) - (3)].operandList);
    }
    break;

  case 50:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addModeStmts (*(yysemantic_stack_[(1) - (1)].modeStmtVector));
        delete (yysemantic_stack_[(1) - (1)].modeStmtVector);
    }
    break;

  case 51:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(3) - (3)].string));
    }
    break;

  case 52:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector) =  new std::vector<std::string> ();
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(1) - (1)].string));
    }
    break;

  case 53:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addModeStmts (*(yysemantic_stack_[(1) - (1)].modeStmtVector));
        delete (yysemantic_stack_[(1) - (1)].modeStmtVector);
    }
    break;

  case 54:
/* Line 670 of lalr1.cc  */

    {
    }
    break;

  case 55:
/* Line 670 of lalr1.cc  */

    {
    }
    break;

  case 56:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addOperandsOut (*(yysemantic_stack_[(6) - (3)].operandList));
        cp->addModeStmtsOut (*(yysemantic_stack_[(6) - (6)].modeStmtVector));
        delete (yysemantic_stack_[(6) - (3)].operandList);
        delete (yysemantic_stack_[(6) - (6)].modeStmtVector);
    }
    break;

  case 57:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addOperandsOut (*(yysemantic_stack_[(5) - (3)].operandList));
        delete (yysemantic_stack_[(5) - (3)].operandList);
    }
    break;

  case 58:
/* Line 670 of lalr1.cc  */

    {
        ConcretePattern* cp = static_cast<ConcretePattern*> (driver.currentPattern);
        cp->addModeStmtsOut (*(yysemantic_stack_[(1) - (1)].modeStmtVector));
        delete (yysemantic_stack_[(1) - (1)].modeStmtVector);
    }
    break;

  case 59:
/* Line 670 of lalr1.cc  */

    {
        (yyval.modeStmtVector)->push_back (*(yysemantic_stack_[(2) - (2)].modeStmt));
        delete (yysemantic_stack_[(2) - (2)].modeStmt);
    }
    break;

  case 60:
/* Line 670 of lalr1.cc  */

    {
            vector<ModeStmt>* msv = new vector<ModeStmt> ();
            msv->push_back (*(yysemantic_stack_[(1) - (1)].modeStmt));
            (yyval.modeStmtVector) = msv;
            delete (yysemantic_stack_[(1) - (1)].modeStmt);
        }
    break;

  case 61:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->addAccessTree ((yysemantic_stack_[(5) - (2)].intVector));
        ms->setPatternName (*(yysemantic_stack_[(5) - (4)].string));
        ms->setType (ModeStmt::root);
        (yyval.modeStmt) = ms;
        driver.findRtlOperandSymTabEntry (*(yysemantic_stack_[(5) - (4)].string));
        delete (yysemantic_stack_[(5) - (4)].string);
    }
    break;

  case 62:
/* Line 670 of lalr1.cc  */

    {
        (yysemantic_stack_[(5) - (2)].modeStmt)->setMode (*(yysemantic_stack_[(5) - (4)].string)); 
        if ((yysemantic_stack_[(5) - (2)].modeStmt)->getType () == ModeStmt::predicate) {
            (yysemantic_stack_[(5) - (2)].modeStmt)->setOperand (*(yysemantic_stack_[(5) - (4)].string), "", "");
        } else if ((yysemantic_stack_[(5) - (2)].modeStmt)->getType () == ModeStmt::constraint) {
            (yysemantic_stack_[(5) - (2)].modeStmt)->setOperand ("", "", "\"" + *(yysemantic_stack_[(5) - (4)].string) + "\"");
        }
        delete (yysemantic_stack_[(5) - (4)].string);
        (yyval.modeStmt) = (yysemantic_stack_[(5) - (2)].modeStmt);
    }
    break;

  case 63:
/* Line 670 of lalr1.cc  */

    {
        (yysemantic_stack_[(5) - (2)].modeStmt)->setMode (*(yysemantic_stack_[(5) - (4)].string));
        if ((yysemantic_stack_[(5) - (2)].modeStmt)->getType () == ModeStmt::constraint) {
            (yysemantic_stack_[(5) - (2)].modeStmt)->setOperand ("", "", *(yysemantic_stack_[(5) - (4)].string));
            delete (yysemantic_stack_[(5) - (4)].string);
        }
        (yyval.modeStmt) = (yysemantic_stack_[(5) - (2)].modeStmt);
    }
    break;

  case 64:
/* Line 670 of lalr1.cc  */

    {
        (yysemantic_stack_[(7) - (2)].modeStmt)->setMode ("<" + *(yysemantic_stack_[(7) - (5)].string) + ">");
        if ((yysemantic_stack_[(7) - (2)].modeStmt)->getType () == ModeStmt::predicate) {
        (yysemantic_stack_[(7) - (2)].modeStmt)->setOperand ("<" + *(yysemantic_stack_[(7) - (5)].string) + ">", "", "");
        } else if ((yysemantic_stack_[(7) - (2)].modeStmt)->getType () == ModeStmt::constraint) {
        (yysemantic_stack_[(7) - (2)].modeStmt)->setOperand ("", "", "\"<" + *(yysemantic_stack_[(7) - (5)].string) + ">\"");
        }
        delete (yysemantic_stack_[(7) - (5)].string);
        (yyval.modeStmt) = (yysemantic_stack_[(7) - (2)].modeStmt);
    }
    break;

  case 65:
/* Line 670 of lalr1.cc  */

    {
        if ((yysemantic_stack_[(7) - (2)].modeStmt)->getType () == ModeStmt::operand) {
            Operand* o = new Operand (Operand::constSpec, srtl_driver::stoi(*(yysemantic_stack_[(7) - (6)].string)));
            (yysemantic_stack_[(7) - (2)].modeStmt)->setOperand (*o);
            delete (yysemantic_stack_[(7) - (6)].string);
        }
        (yyval.modeStmt) = (yysemantic_stack_[(7) - (2)].modeStmt);
    }
    break;

  case 66:
/* Line 670 of lalr1.cc  */

    {
        if ((yysemantic_stack_[(10) - (2)].modeStmt)->getType () == ModeStmt::operand) {
            Operand* o = new Operand (Operand::reg, *(yysemantic_stack_[(10) - (4)].string), *(yysemantic_stack_[(10) - (6)].string), *(yysemantic_stack_[(10) - (8)].string));
            (yysemantic_stack_[(10) - (2)].modeStmt)->setOperand (*o);
            delete (yysemantic_stack_[(10) - (4)].string);delete (yysemantic_stack_[(10) - (6)].string); delete (yysemantic_stack_[(10) - (8)].string);
            (yyval.modeStmt) = (yysemantic_stack_[(10) - (2)].modeStmt);
        }
    }
    break;

  case 67:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(9) - (4)].stringVector));
        string m = driver.appendStrings ((yysemantic_stack_[(9) - (6)].stringVector));

        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::pmc);
        ms->addAccessTree ((yysemantic_stack_[(9) - (2)].intVector)); 
        ms->setOperand (t, m, *(yysemantic_stack_[(9) - (8)].string));
        delete (yysemantic_stack_[(9) - (4)].stringVector); delete (yysemantic_stack_[(9) - (6)].stringVector); delete (yysemantic_stack_[(9) - (8)].string);
        (yyval.modeStmt) = ms;
    }
    break;

  case 68:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(11) - (6)].stringVector));
        string m = driver.appendStrings ((yysemantic_stack_[(11) - (8)].stringVector));

        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::pmc);
        ms->addAccessTree ((yysemantic_stack_[(11) - (2)].intVector)); 
        ms->setOperand (srtl_driver::stoi(*(yysemantic_stack_[(11) - (4)].string)), t, m, *(yysemantic_stack_[(11) - (10)].string));
        delete (yysemantic_stack_[(11) - (4)].string); delete (yysemantic_stack_[(11) - (6)].stringVector); delete (yysemantic_stack_[(11) - (8)].stringVector); delete (yysemantic_stack_[(11) - (10)].string);
        (yyval.modeStmt) = ms;
    }
    break;

  case 69:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::latency);
        ms->setMode (*(yysemantic_stack_[(4) - (3)].string));
        delete (yysemantic_stack_[(4) - (3)].string);
        (yyval.modeStmt) = ms;
    }
    break;

  case 70:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::listOfValues);
        ms->setMode (*(yysemantic_stack_[(4) - (3)].string));
        delete (yysemantic_stack_[(4) - (3)].string);
        (yyval.modeStmt) = ms;
    }
    break;

  case 71:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::docstring);
        ms->setMode (*(yysemantic_stack_[(4) - (3)].string));
        delete (yysemantic_stack_[(4) - (3)].string);
        (yyval.modeStmt) = ms;
    }
    break;

  case 72:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::regclass);
        ms->setMode (*(yysemantic_stack_[(4) - (3)].string));
        delete (yysemantic_stack_[(4) - (3)].string);
        (yyval.modeStmt) = ms;
    }
    break;

  case 73:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::allConstraints);
        ms->setConstraints ((yysemantic_stack_[(6) - (4)].stringVector));
        (yyval.modeStmt) = ms;
    }
    break;

  case 74:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->setType (ModeStmt::replaceMode);
        ms->setMode (*(yysemantic_stack_[(5) - (1)].string));
        ms->setModeReplacement (*(yysemantic_stack_[(5) - (4)].string));
        (yyval.modeStmt) = ms;
        delete (yysemantic_stack_[(5) - (1)].string);
        delete (yysemantic_stack_[(5) - (4)].string);
    }
    break;

  case 75:
/* Line 670 of lalr1.cc  */

    {   /* Change the attribute of a node */
        /*This should be mode. */
        /* Check again whether this is required ?*/
        delete (yysemantic_stack_[(2) - (2)].string);
    }
    break;

  case 76:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->addAccessTree ((yysemantic_stack_[(3) - (1)].intVector));
        if (*(yysemantic_stack_[(3) - (3)].string) == "mode") {
            ms->setType (ModeStmt::mode);
            (yyval.modeStmt) = ms;
        } else if (*(yysemantic_stack_[(3) - (3)].string) == "constraint") {
            ms->setType (ModeStmt::constraint);
            (yyval.modeStmt) = ms;
        } else if (*(yysemantic_stack_[(3) - (3)].string) == "operand") {
            ms->setType (ModeStmt::operand);
            (yyval.modeStmt) = ms;
        } else {
            // TODO report error.
        }
        delete (yysemantic_stack_[(3) - (3)].string);
    }
    break;

  case 77:
/* Line 670 of lalr1.cc  */

    {
        ModeStmt* ms = new ModeStmt ();
        ms->addAccessTree ((yysemantic_stack_[(3) - (1)].intVector));
        ms->setType (ModeStmt::predicate);
        (yyval.modeStmt) = ms;
    }
    break;

  case 78:
/* Line 670 of lalr1.cc  */

    {
        (yyval.intVector)->push_back(driver.stoi (*(yysemantic_stack_[(3) - (3)].string)));
        delete (yysemantic_stack_[(3) - (3)].string);
    }
    break;

  case 79:
/* Line 670 of lalr1.cc  */

    {
        vector<int>* intVector = new vector<int>();
        (yyval.intVector) = intVector;
        (yyval.intVector)->push_back(driver.stoi (*(yysemantic_stack_[(2) - (2)].string)));
        delete (yysemantic_stack_[(2) - (2)].string);
    }
    break;

  case 80:
/* Line 670 of lalr1.cc  */

    {
        vector <Operand>* oplist = (yysemantic_stack_[(5) - (4)].operandList);
        Operand* start = new Operand (Operand::bracketOpen, "");
        Operand* end = new Operand (Operand::bracketClose, "");
        (yysemantic_stack_[(5) - (4)].operandList)->insert ((yysemantic_stack_[(5) - (4)].operandList)->begin (), *start);
        (yysemantic_stack_[(5) - (4)].operandList)->push_back (*end);

        for (unsigned int i = 0; i < oplist->size (); i++) {
            (yyval.operandList)->push_back ((yysemantic_stack_[(5) - (4)].operandList)->at(i));
        }

           delete oplist;
        }
    break;

  case 81:
/* Line 670 of lalr1.cc  */

    {
        Operand* start = new Operand (Operand::bracketOpen, "");
        Operand* end = new Operand (Operand::bracketClose, "");
        (yysemantic_stack_[(3) - (2)].operandList)->insert ((yysemantic_stack_[(3) - (2)].operandList)->begin (), *start);
        (yysemantic_stack_[(3) - (2)].operandList)->push_back (*end);
        (yyval.operandList) = (yysemantic_stack_[(3) - (2)].operandList);
    }
    break;

  case 82:
/* Line 670 of lalr1.cc  */

    {
        (yyval.operandList)->push_back (*(yysemantic_stack_[(3) - (3)].operand));
        delete (yysemantic_stack_[(3) - (3)].operand);
    }
    break;

  case 83:
/* Line 670 of lalr1.cc  */

    {
        vector<Operand>* oplist = new vector<Operand>();
        (yyval.operandList) = oplist;
        (yyval.operandList)->push_back (*(yysemantic_stack_[(1) - (1)].operand));
        delete (yysemantic_stack_[(1) - (1)].operand);
    }
    break;

  case 84:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(5) - (1)].stringVector));
        string m = driver.appendStrings ((yysemantic_stack_[(5) - (3)].stringVector));
        
        Operand* o = new Operand (Operand::pmc, t, m, *(yysemantic_stack_[(5) - (5)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Operand: PML:PML:C ::" + t + ":" + m + ":" + *(yysemantic_stack_[(5) - (5)].string));
        delete (yysemantic_stack_[(5) - (3)].stringVector); delete (yysemantic_stack_[(5) - (5)].string); delete (yysemantic_stack_[(5) - (1)].stringVector);
    }
    break;

  case 85:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(7) - (3)].stringVector));
        string m = driver.appendStrings ((yysemantic_stack_[(7) - (5)].stringVector));
        Operand* o = new Operand (Operand::pmc, driver.stoi (*(yysemantic_stack_[(7) - (1)].string)), t, m, *(yysemantic_stack_[(7) - (7)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Operand: INT:PML:PML:C ::" + *(yysemantic_stack_[(7) - (1)].string) +"=" + t + ":"+m+":"+*(yysemantic_stack_[(7) - (7)].string));
        delete (yysemantic_stack_[(7) - (1)].string);
        delete (yysemantic_stack_[(7) - (3)].stringVector);
        delete (yysemantic_stack_[(7) - (5)].stringVector);
        delete (yysemantic_stack_[(7) - (7)].string);
    }
    break;

  case 86:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::dup, driver.stoi (*(yysemantic_stack_[(2) - (2)].string)));
        driver.debug (srtl_driver::grammar, "Operand: Duplicate INT ::" + *(yysemantic_stack_[(2) - (2)].string));
        (yyval.operand) = o;
        delete (yysemantic_stack_[(2) - (2)].string);
    }
    break;

  case 87:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (1)].stringVector));
        if (driver.currentPattern->getPatType () == Pattern::cons || 
                driver.currentPattern->getPatType () == Pattern::regCons ||
                driver.currentPattern->getPatType () == Pattern::memCons ||
                driver.currentPattern->getPatType () == Pattern::addCons || 
                driver.currentPattern->getPatType () == Pattern::attr ||
                driver.currentPattern->getPatType () == Pattern::asmAttr ||
                driver.currentPattern->getPatType () == Pattern::insnReservation) {
            Operand* o = new Operand (Operand::eqAttr, t, *(yysemantic_stack_[(3) - (3)].string));
            driver.debug (srtl_driver::grammar, "Operand: PM:C :: " + t + ":" + *(yysemantic_stack_[(3) - (3)].string));
            delete (yysemantic_stack_[(3) - (1)].stringVector); delete (yysemantic_stack_[(3) - (3)].string);
            (yyval.operand) = o;
        } else {
            Operand* o = new Operand (Operand::scratch, t, *(yysemantic_stack_[(3) - (3)].string));
            driver.debug (srtl_driver::grammar, "Operand: PM:C ::" + t + ":" + *(yysemantic_stack_[(3) - (3)].string));
            delete (yysemantic_stack_[(3) - (1)].stringVector); delete (yysemantic_stack_[(3) - (3)].string);
            (yyval.operand) = o;
        }
    }
    break;

  case 88:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::eqAttr, "attr", *(yysemantic_stack_[(3) - (3)].string));
        driver.debug (srtl_driver::grammar, "Operand: A:C :: attr:" + *(yysemantic_stack_[(3) - (3)].string));
        delete (yysemantic_stack_[(3) - (3)].string);
        (yyval.operand) = o;
    }
    break;

  case 89:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(5) - (3)].stringVector));
        Operand* o = new Operand (Operand::scratch, driver.stoi (*(yysemantic_stack_[(5) - (1)].string)), t, *(yysemantic_stack_[(5) - (5)].string));
        driver.debug (srtl_driver::grammar, "Operand: INT:PML:C ::" + *(yysemantic_stack_[(5) - (1)].string) + "=" + t + ":" + *(yysemantic_stack_[(5) - (5)].string));
        delete (yysemantic_stack_[(5) - (1)].string); delete (yysemantic_stack_[(5) - (3)].stringVector); delete (yysemantic_stack_[(5) - (5)].string);
        (yyval.operand) = o;
    }
    break;

  case 90:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(3) - (3)].stringVector));
        Operand* o = new Operand (Operand::matchOperator, driver.stoi (*(yysemantic_stack_[(3) - (1)].string)), t);
        (yyval.operand) = o;
            driver.debug (srtl_driver::grammar, "Operand: INT:PML ::" + *(yysemantic_stack_[(3) - (1)].string) + "=" + t);
        delete (yysemantic_stack_[(3) - (1)].string); delete (yysemantic_stack_[(3) - (3)].stringVector);
    }
    break;

  case 91:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::num, driver.stoi (*(yysemantic_stack_[(1) - (1)].string)));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Operand: INT" + *(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 92:
/* Line 670 of lalr1.cc  */

    {
        /* For register, memory, constant etc. operands */
        (yyval.operand) = (yysemantic_stack_[(1) - (1)].operand);
        driver.debug (srtl_driver::grammar, "Operand: Fixed_Reg_Or_Const");
    }
    break;

  case 93:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(6) - (3)].stringVector));
        Operand* o = new Operand (Operand::reg, *(yysemantic_stack_[(6) - (1)].string), t, *(yysemantic_stack_[(6) - (5)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: ID(PM:C) ::" + *(yysemantic_stack_[(6) - (1)].string) + "(" + t + ":" + *(yysemantic_stack_[(6) - (5)].string) + ")");
        delete (yysemantic_stack_[(6) - (1)].string);
        delete (yysemantic_stack_[(6) - (3)].stringVector);
        delete (yysemantic_stack_[(6) - (5)].string);
    }
    break;

  case 94:
/* Line 670 of lalr1.cc  */

    {
        string t = driver.appendStrings ((yysemantic_stack_[(6) - (3)].stringVector));
        Operand * o = new Operand (Operand::regNum, *(yysemantic_stack_[(6) - (1)].string), t, *(yysemantic_stack_[(6) - (5)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: ID(PM:INT) ::"  + *(yysemantic_stack_[(6) - (1)].string) + "(" + t + ":" + *(yysemantic_stack_[(6) - (5)].string) + ")");
        delete (yysemantic_stack_[(6) - (1)].string); delete (yysemantic_stack_[(6) - (3)].stringVector); delete (yysemantic_stack_[(6) - (5)].string);
    }
    break;

  case 95:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::fixedReg, *(yysemantic_stack_[(1) - (1)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: FIXED_REG ::" + *(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 96:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::extraReg, *(yysemantic_stack_[(1) - (1)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: ID ::" + *(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 97:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::constSpec, driver.stoi (*(yysemantic_stack_[(3) - (3)].string)));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: CONST_INT:INT ::" + *(yysemantic_stack_[(3) - (3)].string));
        delete (yysemantic_stack_[(3) - (3)].string);
    }
    break;

  case 98:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::constSpec, driver.stoi (*(yysemantic_stack_[(5) - (3)].string)), *(yysemantic_stack_[(5) - (5)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: CONST_INT:INT:ID ::" + *(yysemantic_stack_[(5) - (3)].string) + ":" + *(yysemantic_stack_[(5) - (5)].string));
        delete (yysemantic_stack_[(5) - (3)].string); delete  (yysemantic_stack_[(5) - (5)].string);
    }
    break;

  case 99:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::integer, driver.stoi (*(yysemantic_stack_[(3) - (2)].string)));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: <INT> ::" + *(yysemantic_stack_[(3) - (2)].string));
        delete (yysemantic_stack_[(3) - (2)].string);
    }
    break;

  case 100:
/* Line 670 of lalr1.cc  */

    {
        Operand* o = new Operand (Operand::string, *(yysemantic_stack_[(3) - (2)].string));
        (yyval.operand) = o;
        driver.debug (srtl_driver::grammar, "Fixed_Reg_Or_Const: <ID> ::" + *(yysemantic_stack_[(3) - (2)].string));
        delete (yysemantic_stack_[(3) - (2)].string);
    }
    break;

  case 101:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Constraint: " + *(yysemantic_stack_[(1) - (1)].string));
    }
    break;

  case 102:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(2) - (2)].string));
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode_List: PML PM ::" + *(yysemantic_stack_[(2) - (2)].string));
        delete (yysemantic_stack_[(2) - (2)].string);
    }
    break;

  case 103:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(2) - (2)].string));
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode_List: PML PM ::" + *(yysemantic_stack_[(2) - (2)].string));
        delete (yysemantic_stack_[(2) - (2)].string);
    }
    break;

  case 104:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector) = new vector<string>();
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(1) - (1)].string));
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode_List: PMWB ::" + *(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 105:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector) = new vector<string> ();
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(1) - (1)].string));
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode_List: PM ::" + *(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 106:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string ("<" + *(yysemantic_stack_[(3) - (2)].string) + ">");
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode_With_Brackets: <PM> ::<" + *(yysemantic_stack_[(3) - (2)].string) + ">");
        delete (yysemantic_stack_[(3) - (2)].string);
    }
    break;

  case 107:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode: INT ::" + *(yysemantic_stack_[(1) - (1)].string));
    }
    break;

  case 108:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Predicate_Or_Mode: ID::" + *(yysemantic_stack_[(1) - (1)].string));
    }
    break;

  case 109:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 110:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(2) - (2)].string));
        delete (yysemantic_stack_[(2) - (2)].string);
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name_List: Concrete_Pattern_Name_List Concrete_Pattern_Name_With_Brackets");
    }
    break;

  case 111:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(2) - (2)].string));
        delete (yysemantic_stack_[(2) - (2)].string);
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name_List: Concrete_Pattern_Name_List Concrete_Pattern_Name");
    }
    break;

  case 112:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector) = new vector<string> ();
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name_List: Concrete_Pattern_Name_With_Brackets");

    }
    break;

  case 113:
/* Line 670 of lalr1.cc  */

    {
        (yyval.stringVector) = new vector<string> ();
        (yyval.stringVector)->push_back (*(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name_List: Concrete_Pattern_Name_List");
    }
    break;

  case 114:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string ("<" + *(yysemantic_stack_[(3) - (2)].string) + ">");
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name_With_Brackets: " + *(yyval.string));
        delete (yysemantic_stack_[(3) - (2)].string);
    }
    break;

  case 115:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string ("<" + *(yysemantic_stack_[(5) - (2)].string) + ":" + *(yysemantic_stack_[(5) - (4)].string) + ">");
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name_With_Brackets: " + *(yyval.string));
        delete (yysemantic_stack_[(5) - (2)].string); delete (yysemantic_stack_[(5) - (4)].string);
    }
    break;

  case 116:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name: ID: " + *(yysemantic_stack_[(1) - (1)].string));
    }
    break;

  case 117:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string (*(yysemantic_stack_[(1) - (1)].string));
        delete (yysemantic_stack_[(1) - (1)].string);
        driver.debug (srtl_driver::grammar, "Concrete_Patttern_Name: INT");
    }
    break;

  case 118:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string ("*");
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name: *");
    }
    break;

  case 119:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string (":");
        driver.debug (srtl_driver::grammar, "Concrete_Pattern_Name: :");
    }
    break;

  case 120:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = new string ("_");
        driver.debug (srtl_driver::grammar, "ConcretePatternName: _");
    }
    break;

  case 121:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 122:
/* Line 670 of lalr1.cc  */

    {
        (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 123:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l =new ListPattern();
        string sq ="\"", eq="\"", p;
        p= *(yysemantic_stack_[(4) - (2)].string);
        l->setPatType(Pattern::define_automaton);
        l->setPatName(p);
        (yyval.L)=l;	
    }
    break;

  case 124:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l=new ListPattern();
        l->setPatName(*(yysemantic_stack_[(7) - (2)].string));
        delete (yysemantic_stack_[(7) - (2)].string);;
        l->setPatType(Pattern::define_c_enum);
        l->append((yysemantic_stack_[(7) - (6)].EL));
        (yyval.L)=l;
    }
    break;

  case 125:
/* Line 670 of lalr1.cc  */

    {
    	ListPattern * l =new ListPattern();
    	l->setPatType(Pattern::define_bypass);
    	l->setPatName(*(yysemantic_stack_[(5) - (2)].string));
    	delete (yysemantic_stack_[(5) - (2)].string);
    	l->append((yysemantic_stack_[(5) - (5)].string));
		(yyval.L)=l;
        }
    break;

  case 126:
/* Line 670 of lalr1.cc  */

    {
    	ListPattern * l =new ListPattern();
        l->setPatType(Pattern::define_cpu_unit);
        l->setPatName(*(yysemantic_stack_[(5) - (2)].string));
        delete (yysemantic_stack_[(5) - (2)].string);
        l->append((yysemantic_stack_[(5) - (5)].string));
    	(yyval.L)=l;
    }
    break;

  case 127:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l =new ListPattern();
        string sq ="\"", eq="\"",* p;
        l->setPatType(Pattern::define_reservation);
        l->setPatName(*(yysemantic_stack_[(5) - (2)].string));
        delete (yysemantic_stack_[(5) - (2)].string);
        p= new string (*(yysemantic_stack_[(5) - (5)].string));
        l->append(p);
        (yyval.L)=l;
    }
    break;

  case 128:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l =new ListPattern();
        string sq ="\"", eq="\"",* p;
        l->setPatType(Pattern::define_reservation);
        l->setPatName(*(yysemantic_stack_[(7) - (2)].string));
        delete (yysemantic_stack_[(7) - (2)].string);
        p= new string (sq + *(yysemantic_stack_[(7) - (6)].string) +eq);
        l->append(p);
        (yyval.L)=l;
    }
    break;

  case 129:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l =new ListPattern();
        l->setPatType(Pattern::define_constants);
        l->append((yysemantic_stack_[(7) - (6)].EL));
        (yyval.L)=l;
    }
    break;

  case 130:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l =new ListPattern();
	    l->setPatType(Pattern::define_asm_attributes);
	    l->append((yysemantic_stack_[(7) - (6)].EL));
	    (yyval.L)=l;
    }
    break;

  case 131:
/* Line 670 of lalr1.cc  */

    {
        ListPattern * l=new ListPattern();
        l->setPatName(*(yysemantic_stack_[(7) - (2)].string));
        l->setPatType((yysemantic_stack_[(7) - (4)].LP));
        l->append((yysemantic_stack_[(7) - (6)].EL));
        (yyval.L)=l;
        delete (yysemantic_stack_[(7) - (2)].string);
    }
    break;

  case 132:
/* Line 670 of lalr1.cc  */

    {
    	 ListPattern * l=new ListPattern();
    	 l->setPatName(*(yysemantic_stack_[(7) - (2)].string));
    	 l->setPatType((yysemantic_stack_[(7) - (4)].LP));
    	 l->append((yysemantic_stack_[(7) - (6)].EL));
    	 (yyval.L)=l;
    	 delete (yysemantic_stack_[(7) - (2)].string);
    }
    break;

  case 133:
/* Line 670 of lalr1.cc  */

    {
        (yyval.LP)=Pattern::define_code_iterator;
    }
    break;

  case 134:
/* Line 670 of lalr1.cc  */

    {
        (yyval.LP)=Pattern::define_code_iterator;
    }
    break;

  case 135:
/* Line 670 of lalr1.cc  */

    {
        (yyval.LP)=Pattern::define_code_attr;
    }
    break;

  case 136:
/* Line 670 of lalr1.cc  */

    {
        (yyval.LP)=Pattern::define_mode_attr;
    }
    break;

  case 137:
/* Line 670 of lalr1.cc  */

    {
	   ElemList * el=new ElemList((yysemantic_stack_[(3) - (1)].EL),(yysemantic_stack_[(3) - (3)].E));
       (yyval.EL)=el;	
    }
    break;

  case 138:
/* Line 670 of lalr1.cc  */

    {
        ElemList * el=new ElemList((yysemantic_stack_[(1) - (1)].E));
        (yyval.EL)=el;
    }
    break;

  case 139:
/* Line 670 of lalr1.cc  */

    {
        Element *e;
		string q = "\"";
		string *s = new string (*(yysemantic_stack_[(7) - (6)].string));
		e=new Element((yysemantic_stack_[(7) - (4)].string),s);
		delete (yysemantic_stack_[(7) - (6)].string);
        (yyval.E)=e;
	}
    break;

  case 140:
/* Line 670 of lalr1.cc  */

    {
		ElemList * el = new ElemList((yysemantic_stack_[(5) - (1)].EL),(yysemantic_stack_[(5) - (4)].E));
		(yyval.EL) =el;
                }
    break;

  case 141:
/* Line 670 of lalr1.cc  */

    {
               	ElemList * el = new ElemList((yysemantic_stack_[(3) - (2)].E));
		(yyval.EL) = el;
		}
    break;

  case 142:
/* Line 670 of lalr1.cc  */

    {
		ElemList * el = new ElemList((yysemantic_stack_[(3) - (1)].EL),(yysemantic_stack_[(3) - (3)].E));
		(yyval.EL) =el;
    }
    break;

  case 143:
/* Line 670 of lalr1.cc  */

    {
		ElemList * el = new ElemList((yysemantic_stack_[(1) - (1)].E));
		(yyval.EL) = el;
	}
    break;

  case 144:
/* Line 670 of lalr1.cc  */

    {
    	ElemList * el = new ElemList((yysemantic_stack_[(5) - (1)].EL),(yysemantic_stack_[(5) - (4)].E));
    	(yyval.EL) =el;
    }
    break;

  case 145:
/* Line 670 of lalr1.cc  */

    {
    	ElemList * el = new ElemList((yysemantic_stack_[(3) - (2)].E));
    	(yyval.EL) = el;
	}
    break;

  case 146:
/* Line 670 of lalr1.cc  */

    {
    	ElemList * el = new ElemList((yysemantic_stack_[(5) - (1)].EL),(yysemantic_stack_[(5) - (4)].E));
    	(yyval.EL) =el;
    }
    break;

  case 147:
/* Line 670 of lalr1.cc  */

    {
		ElemList * el = new ElemList((yysemantic_stack_[(3) - (1)].EL),(yysemantic_stack_[(3) - (3)].E));
		(yyval.EL) = el;
	}
    break;

  case 148:
/* Line 670 of lalr1.cc  */

    {
		ElemList * el = new ElemList((yysemantic_stack_[(3) - (2)].E));
		(yyval.EL) = el;
    }
    break;

  case 149:
/* Line 670 of lalr1.cc  */

    {
		ElemList * el = new ElemList((yysemantic_stack_[(1) - (1)].E));
		(yyval.EL) = el;
    }
    break;

  case 150:
/* Line 670 of lalr1.cc  */

    {
    Element * e;
    e= new Element((yysemantic_stack_[(3) - (1)].string),(yysemantic_stack_[(3) - (3)].string));
    (yyval.E) =e;
    }
    break;

  case 151:
/* Line 670 of lalr1.cc  */

    {
        Element * e;
        string *s = new string( *(yysemantic_stack_[(3) - (3)].string)),* t= new string(*(yysemantic_stack_[(3) - (1)].string));
        delete (yysemantic_stack_[(3) - (3)].string);delete (yysemantic_stack_[(3) - (1)].string);
        e= new Element(t,s);
        (yyval.E)=e;
    }
    break;

  case 152:
/* Line 670 of lalr1.cc  */

    { 
        Element * e;
        ostringstream temp;
        temp<<*(yysemantic_stack_[(3) - (3)].string);
        string *t=new string  (temp.str()); 
        e = new Element((yysemantic_stack_[(3) - (1)].string),t);
        (yyval.E)=e; 
        delete (yysemantic_stack_[(3) - (3)].string);
    }
    break;

  case 153:
/* Line 670 of lalr1.cc  */

    {
        Element * e;
        string *s = new string( *(yysemantic_stack_[(4) - (3)].string)+*(yysemantic_stack_[(4) - (4)].string)),* t= new string(*(yysemantic_stack_[(4) - (1)].string));
        delete (yysemantic_stack_[(4) - (3)].string);delete (yysemantic_stack_[(4) - (1)].string);
        e= new Element(t,s);
        (yyval.E)=e;
    }
    break;

  case 154:
/* Line 670 of lalr1.cc  */

    {
	   (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
	}
    break;

  case 155:
/* Line 670 of lalr1.cc  */

    { 
	   (yyval.string) = (yysemantic_stack_[(1) - (1)].string);
	}
    break;

  case 156:
/* Line 670 of lalr1.cc  */

    {
        string *s;
        s=new string(*(yysemantic_stack_[(1) - (1)].string));
        (yyval.string)=s;
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 157:
/* Line 670 of lalr1.cc  */

    {
		string *s;
		s= new string (*(yysemantic_stack_[(2) - (1)].string));
		*s=*s+ *(yysemantic_stack_[(2) - (2)].string);
		(yyval.string)=s;	
	}
    break;

  case 158:
/* Line 670 of lalr1.cc  */

    {
        Element * e;
        string *s=new string(*(yysemantic_stack_[(1) - (1)].string));
        e= new Element(s) ;
        (yyval.E)=e;
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 159:
/* Line 670 of lalr1.cc  */

    {
		string *s;
		s= new string (*(yysemantic_stack_[(3) - (1)].string));
		*s=*s+ "|"+*(yysemantic_stack_[(3) - (3)].string);
		(yyval.string)=s;	
		delete (yysemantic_stack_[(3) - (3)].string); 
		delete (yysemantic_stack_[(3) - (1)].string);
	}
    break;

  case 160:
/* Line 670 of lalr1.cc  */

    {
		string *s;
		s= new string (*(yysemantic_stack_[(3) - (2)].string));
		*s= "("+ *s+ ")";
		(yyval.string)=s;	
		delete (yysemantic_stack_[(3) - (2)].string);
	}
    break;

  case 161:
/* Line 670 of lalr1.cc  */

    {
		string *s;
		s= new string (*(yysemantic_stack_[(3) - (1)].string));
		*s=*s+ "+"+*(yysemantic_stack_[(3) - (3)].string);
		(yyval.string)=s;	
		delete (yysemantic_stack_[(3) - (1)].string);
		delete (yysemantic_stack_[(3) - (3)].string);
    }
    break;

  case 162:
/* Line 670 of lalr1.cc  */

    {
        string *s;
        s=new string(*(yysemantic_stack_[(1) - (1)].string));
        (yyval.string)=s;
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 163:
/* Line 670 of lalr1.cc  */

    {
        string *s;
        s=new string(*(yysemantic_stack_[(1) - (1)].string));
        (yyval.string)=s;
        delete (yysemantic_stack_[(1) - (1)].string);
    }
    break;

  case 164:
/* Line 670 of lalr1.cc  */

    {
		string *s;
		s= new string (*(yysemantic_stack_[(3) - (1)].string));
		*s=*s+ ","+*(yysemantic_stack_[(3) - (3)].string);
		(yyval.string)=s;	
		delete (yysemantic_stack_[(3) - (3)].string);
		delete (yysemantic_stack_[(3) - (1)].string);
	}
    break;


/* Line 670 of lalr1.cc  */

      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
          }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  srtl_parser::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULL;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const short int srtl_parser::yypact_ninf_ = -257;
  const short int
  srtl_parser::yypact_[] =
  {
       162,   -14,    66,   -16,  -257,   106,  -257,   135,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,   108,   173,  -257,
      60,    11,    23,   127,  -257,  -257,  -257,   120,    41,    96,
     104,   117,  -257,  -257,  -257,  -257,    76,    85,  -257,    85,
      85,  -257,   147,   171,  -257,   324,  -257,  -257,   128,   128,
    -257,    14,   241,   -21,   172,  -257,   173,   130,   151,   130,
     230,   231,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
     183,  -257,  -257,  -257,  -257,  -257,   218,   232,  -257,  -257,
    -257,  -257,   250,   261,  -257,   209,     4,   280,   293,   277,
     223,  -257,   215,   316,    85,    85,   269,   295,   311,   312,
     313,    26,   203,  -257,  -257,    37,    26,  -257,   319,  -257,
     178,   325,   326,   327,   328,   329,   314,   322,   269,  -257,
     323,   323,  -257,   130,   130,   321,    17,   381,   333,   352,
      -3,  -257,    -7,    20,  -257,   335,    30,  -257,   335,    33,
    -257,   124,  -257,    37,   320,    47,  -257,   268,   205,   338,
      86,   337,   336,   336,   336,   331,   330,  -257,  -257,   269,
     362,   363,  -257,   365,  -257,  -257,   339,    13,  -257,  -257,
     340,   341,  -257,   312,  -257,  -257,   342,   343,  -257,   345,
     344,   347,  -257,   216,   348,  -257,   290,    37,    37,    37,
     349,  -257,  -257,  -257,  -257,   334,   346,   358,  -257,   114,
     288,   205,   301,   142,  -257,  -257,    65,  -257,  -257,   234,
     253,    18,   351,  -257,   353,   354,   355,   336,   350,   357,
     269,  -257,  -257,   359,   366,   152,  -257,  -257,  -257,   336,
    -257,  -257,   305,    -7,   336,  -257,   335,  -257,  -257,   335,
    -257,  -257,  -257,  -257,  -257,   336,   367,  -257,   258,   258,
     296,   356,   360,   361,   368,   224,  -257,  -257,   309,   272,
    -257,  -257,   369,   364,   309,   370,   371,   332,   131,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,   300,  -257,   372,  -257,
     378,   376,   375,   373,  -257,   380,   377,  -257,   379,   382,
    -257,  -257,   383,   176,   202,  -257,  -257,  -257,  -257,   269,
     205,  -257,  -257,   206,   384,   388,   385,  -257,  -257,   258,
     258,   386,   336,  -257,   392,  -257,   389,   390,  -257,  -257,
    -257,  -257,   393,    -8,   272,   269,   303,   336,   391,   394,
     395,   244,   248,  -257,  -257,  -257,  -257,   397,  -257,   398,
     400,  -257,   249,  -257,  -257,  -257,   374,  -257,   258,   336,
      24,  -257,  -257,  -257,   336,   401,   252,   402,   387,   396,
    -257,  -257,   403,   336,  -257,   404,   410,  -257,   405,    85,
      85,  -257,   156,   170,   269,   412,   443,   418,   399,   269,
     407,   408,   406,   411,  -257,   433,   205,  -257,   435,   439,
     304,   441,  -257,   413,  -257,   269,   269
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  srtl_parser::yydefact_[] =
  {
         0,     0,     0,     0,     8,     0,     9,     0,     3,     5,
       6,     7,     4,   120,   118,   116,   117,     0,     0,   119,
       0,     0,     0,     0,   112,   113,    11,     0,     0,     0,
       0,     0,     1,     2,    32,    33,     0,     0,    21,     0,
       0,    19,     0,     0,    20,     0,   110,   111,     0,     0,
      10,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,    27,    28,    34,    29,    30,    31,    24,    23,
       0,    25,    26,   121,    12,    14,     0,     0,   133,   135,
     134,   136,     0,     0,   123,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,     0,     0,   156,   125,   115,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    60,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,   138,     0,     0,   158,     0,     0,   143,     0,     0,
     149,   162,   163,     0,     0,     0,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    59,     0,
       0,     0,    40,     0,    39,    22,     0,     0,    17,    18,
       0,     0,   130,     0,   155,   154,     0,     0,   129,     0,
       0,     0,   131,     0,     0,   132,     0,     0,     0,     0,
       0,   128,   124,    75,    79,     0,     0,     0,    95,   108,
     107,     0,     0,     0,    83,    92,     0,   104,   105,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
      53,    37,    38,     0,     0,     0,    13,    16,    15,     0,
     137,   141,     0,     0,     0,   145,     0,   142,   148,     0,
     147,   159,   161,   164,   160,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   107,     0,     0,
     102,   103,     0,   108,     0,     0,     0,   107,     0,    77,
      76,    78,    69,    70,    71,    72,     0,    52,     0,    47,
       0,     0,     0,     0,   151,   152,     0,   150,     0,     0,
      88,   101,    97,     0,    90,    81,   100,    99,   106,    49,
       0,    82,    87,     0,     0,     0,     0,    62,    63,     0,
       0,     0,     0,    74,     0,   122,     0,     0,   153,   140,
     144,   146,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,    73,    51,    41,    61,     0,    98,     0,
       0,    89,     0,    80,    84,    65,     0,    64,     0,     0,
       0,   139,    93,    94,     0,     0,     0,     0,     0,     0,
      42,    85,     0,     0,    67,     0,     0,    66,     0,     0,
       0,    68,     0,     0,     0,     0,     0,    44,     0,    58,
       0,     0,     0,     0,    55,     0,     0,    54,     0,     0,
       0,     0,    45,     0,    43,    57,    56
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  srtl_parser::yypgoto_[] =
  {
      -257,  -257,   472,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,   409,  -257,  -257,
     318,   414,  -257,  -257,  -257,  -257,  -257,  -257,  -257,   -94,
     317,  -110,  -257,   315,  -189,   225,  -257,  -256,  -195,  -181,
    -185,  -143,   -33,   -22,   -18,   434,  -257,  -257,  -257,  -257,
    -257,   415,  -257,   416,  -257,  -120,   254,  -257,  -257,   -89,
    -129
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  srtl_parser::yydefgoto_[] =
  {
        -1,     7,     8,     9,    27,    50,    97,    98,   167,   170,
      10,    20,    21,    22,    38,    41,    44,   162,   350,   360,
     163,   160,   117,   276,   219,   377,   375,   382,   378,   118,
     168,   119,   149,   150,   203,   204,   205,   290,   206,   207,
     208,   291,    23,    24,    25,    74,   316,    11,    82,    83,
     130,   131,   133,   136,   139,   181,   176,   177,   108,   137,
     144
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char srtl_parser::yytable_ninf_ = -97;
  const short int
  srtl_parser::yytable_[] =
  {
        36,    46,   126,   302,    57,    47,    58,    59,   158,   214,
     215,   216,   250,   140,   190,   268,   158,   253,   184,    39,
      84,   261,   166,    85,   265,   260,   125,   339,   174,    86,
      87,    42,   358,    76,   269,    46,    46,    46,    89,    47,
      47,    47,    26,    40,   111,   112,   113,   114,   115,   172,
      12,   175,   340,   293,   294,    43,   359,    77,   241,   242,
     243,   123,   124,   104,   303,   220,   266,   173,   341,    13,
      14,   344,   178,   253,   277,   116,   270,   226,   271,   306,
     105,   165,   182,   261,   134,   185,   283,   260,    13,    14,
     179,   287,    37,   135,   237,   141,   142,   240,   361,   192,
     183,    46,    46,   186,   143,    47,    47,    51,   261,   261,
     158,   326,   260,   260,   331,   332,   288,   183,   261,   289,
      34,    35,   260,   256,    15,   257,    16,    48,    49,   342,
      13,    14,    17,    13,    14,    32,   258,    18,   259,    19,
       2,     3,   210,    15,    28,    16,   261,   261,    55,    56,
     260,   260,   211,   356,    13,    14,    18,   261,    19,    13,
      14,   260,    52,     1,    29,    30,    31,     2,     3,   334,
      53,   261,     4,    13,    14,   260,    13,    14,   187,   188,
       5,   248,   -96,    54,   -96,    15,    73,    16,    15,   256,
      16,   257,     6,    45,   189,    90,    88,   390,    18,     4,
      19,    18,   258,    19,   310,   325,   357,     5,   281,    15,
     254,    16,   255,    60,    15,   158,    16,    92,   282,     6,
     368,   374,    18,   195,    19,   120,   121,    18,    15,    19,
      16,    15,   110,    16,   256,   376,   257,    61,   196,   197,
     198,    18,   195,    19,   147,   148,    19,   258,    96,   323,
     111,   112,   113,   114,   115,    94,    95,   196,   197,   198,
     256,   134,   257,   199,   256,   200,   257,   262,   103,   158,
     138,    99,   201,   258,   134,   324,   202,   258,   125,   327,
     379,   116,   199,   236,   200,   100,   158,    78,    79,    80,
      81,   300,   263,   213,   257,   202,   111,   112,   113,   114,
     115,   396,   256,   101,   257,   264,   256,   256,   257,   257,
     256,   256,   257,   267,   102,   258,   256,   348,   257,   258,
     258,   349,   354,   258,   258,   363,   193,   116,   194,   258,
     256,   213,   257,   106,    62,    63,   372,   373,    64,    65,
      66,    67,    68,   258,    69,    70,    71,    72,   134,   109,
      46,    46,   107,   122,    47,    47,   -91,   239,   -91,   251,
     127,   252,   249,   284,   295,   285,   255,   256,   311,   257,
     312,   343,   393,   255,   255,    91,   128,    93,   146,   129,
     132,   151,   152,   153,   154,   155,   157,   147,   159,   156,
     166,   169,   171,   180,   209,   213,   191,   212,   217,   221,
     222,   223,   218,   314,   228,   224,   309,   245,   278,   355,
     231,   229,   233,   232,   234,   235,   238,   244,   247,   246,
     272,   279,   273,   274,   275,   280,   194,   292,   296,   335,
     369,   305,   297,   298,   315,   271,   370,   299,   318,   307,
     308,   313,   304,   317,   328,   319,   329,   320,   380,   337,
     321,   338,   381,   365,   383,   333,   322,   330,   336,   389,
     345,   391,   366,   384,   347,   351,   352,   346,   353,   362,
     387,   364,   367,   385,   371,   386,   392,   388,   394,    33,
     301,   225,   395,    75,   227,     0,     0,   286,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230
  };

  /* YYCHECK.  */
  const short int
  srtl_parser::yycheck_[] =
  {
        18,    23,    96,   259,    37,    23,    39,    40,   118,   152,
     153,   154,   201,   102,   143,   210,   126,   202,   138,     8,
      41,   206,     9,    44,   209,   206,     9,    35,    35,    50,
      51,     8,     8,    19,    16,    57,    58,    59,    56,    57,
      58,    59,    58,    32,    27,    28,    29,    30,    31,    52,
      64,    58,    60,   248,   249,    32,    32,    43,   187,   188,
     189,    94,    95,    59,   259,   159,   209,    70,   324,     3,
       4,   327,    52,   258,   217,    58,    58,    64,    60,   264,
      76,    64,    52,   268,    58,    52,   229,   268,     3,     4,
      70,   234,    32,    67,   183,    58,    59,   186,   354,    52,
      70,   123,   124,    70,    67,   123,   124,    66,   293,   294,
     220,   300,   293,   294,   309,   310,   236,    70,   303,   239,
      12,    13,   303,    58,    58,    60,    60,     7,     8,   324,
       3,     4,    66,     3,     4,     0,    71,    71,    73,    73,
       5,     6,    56,    58,    38,    60,   331,   332,    72,    73,
     331,   332,    66,   348,     3,     4,    71,   342,    73,     3,
       4,   342,    66,     1,    58,    59,    60,     5,     6,   312,
      66,   356,    37,     3,     4,   356,     3,     4,    54,    55,
      45,    67,    68,    66,    70,    58,    58,    60,    58,    58,
      60,    60,    57,    66,    70,    65,    24,   386,    71,    37,
      73,    71,    71,    73,    73,   299,   349,    45,    56,    58,
      68,    60,    70,    66,    58,   325,    60,    66,    66,    57,
     363,    65,    71,    18,    73,    10,    11,    71,    58,    73,
      60,    58,     9,    60,    58,    65,    60,    66,    33,    34,
      35,    71,    18,    73,    66,    67,    73,    71,    65,    73,
      27,    28,    29,    30,    31,    25,    25,    33,    34,    35,
      58,    58,    60,    58,    58,    60,    60,    33,    59,   379,
      67,    53,    67,    71,    58,    73,    71,    71,     9,    73,
     374,    58,    58,    67,    60,    53,   396,    46,    47,    48,
      49,    67,    58,    59,    60,    71,    27,    28,    29,    30,
      31,   395,    58,    53,    60,    71,    58,    58,    60,    60,
      58,    58,    60,    60,    53,    71,    58,    73,    60,    71,
      71,    73,    73,    71,    71,    73,    58,    58,    60,    71,
      58,    59,    60,    53,    10,    11,   369,   370,    14,    15,
      16,    17,    18,    71,    20,    21,    22,    23,    58,    72,
     372,   373,    59,    37,   372,   373,    68,    67,    70,    58,
      65,    60,    74,    58,    68,    60,    70,    58,    68,    60,
      70,    68,    68,    70,    70,    57,    65,    59,    59,    67,
      67,    56,    56,    56,    56,    56,    64,    66,    65,    75,
       9,    58,    40,    58,    56,    59,    76,    60,    67,    37,
      37,    36,    72,    25,    64,    66,    74,    73,    58,    35,
      68,    70,    67,    70,    70,    68,    68,    68,    60,    73,
      69,    64,    69,    69,    69,    66,    60,    60,    72,    37,
      26,    67,    72,    72,    58,    60,    26,    69,    58,    69,
      69,    69,    73,    70,    60,    68,    58,    68,    36,    59,
      68,    58,     9,    66,    36,    69,    73,    72,    69,    26,
      69,    26,    66,    64,    69,    68,    68,    73,    68,    68,
      64,    69,    69,    66,    69,    67,    37,    66,    37,     7,
     255,   166,    69,    49,   167,    -1,    -1,   233,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  srtl_parser::yystos_[] =
  {
         0,     1,     5,     6,    37,    45,    57,    78,    79,    80,
      87,   124,    64,     3,     4,    58,    60,    66,    71,    73,
      88,    89,    90,   119,   120,   121,    58,    81,    38,    58,
      59,    60,     0,    79,    12,    13,   121,    32,    91,     8,
      32,    92,     8,    32,    93,    66,   120,   121,     7,     8,
      82,    66,    66,    66,    66,    72,    73,   119,   119,   119,
      66,    66,    10,    11,    14,    15,    16,    17,    18,    20,
      21,    22,    23,    58,   122,   122,    19,    43,    46,    47,
      48,    49,   125,   126,    41,    44,    50,    51,    24,   121,
      65,    97,    66,    97,    25,    25,    65,    83,    84,    53,
      53,    53,    53,    59,    59,    76,    53,    59,   135,    72,
       9,    27,    28,    29,    30,    31,    58,    99,   106,   108,
      10,    11,    37,   119,   119,     9,   106,    65,    65,    67,
     127,   128,    67,   129,    58,    67,   130,   136,    67,   131,
     136,    58,    59,    67,   137,   130,    59,    66,    67,   109,
     110,    56,    56,    56,    56,    56,    75,    64,   108,    65,
      98,    98,    94,    97,    94,    64,     9,    85,   107,    58,
      86,    40,    52,    70,    35,    58,   133,   134,    52,    70,
      58,   132,    52,    70,   132,    52,    70,    54,    55,    70,
     137,    76,    52,    58,    60,    18,    33,    34,    35,    58,
      60,    67,    71,   111,   112,   113,   115,   116,   117,    56,
      56,    66,    60,    59,   118,   118,   118,    67,    72,   101,
     106,    37,    37,    36,    66,   110,    64,   107,    64,    70,
     128,    68,    70,    67,    70,    68,    67,   136,    68,    67,
     136,   137,   137,   137,    68,    73,    73,    60,    67,    74,
     111,    58,    60,   117,    68,    70,    58,    60,    71,    73,
     116,   117,    33,    58,    71,   117,   118,    60,   115,    16,
      58,    60,    69,    69,    69,    69,   100,   118,    58,    64,
      66,    56,    66,   118,    58,    60,   133,   118,   132,   132,
     114,   118,    60,   115,   115,    68,    72,    72,    72,    69,
      67,   112,   114,   115,    73,    67,   117,    69,    69,    74,
      73,    68,    70,    69,    25,    58,   123,    70,    58,    68,
      68,    68,    73,    73,    73,   106,   111,    73,    60,    58,
      72,   115,   115,    69,   118,    37,    69,    59,    58,    35,
      60,   114,   115,    68,   114,    69,    73,    69,    73,    73,
      95,    68,    68,    68,    73,    35,   115,   118,     8,    32,
      96,   114,    68,    73,    69,    66,    66,    69,   118,    26,
      26,    69,   119,   119,    65,   103,    65,   102,   105,   106,
      36,     9,   104,    36,    64,    66,    67,    64,    66,    26,
     111,    26,    37,    68,    37,    69,   106
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  srtl_parser::yytoken_number_[] =
  {
         0,   256,   257,    95,    42,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   125,   123,    46,    40,    41,    59,
      44,    60,    62,    58,    61,    45,    34
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  srtl_parser::yyr1_[] =
  {
         0,    77,    78,    78,    78,    79,    79,    79,    79,    79,
      80,    81,    83,    82,    84,    82,    85,    85,    86,    87,
      87,    87,    87,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    92,    92,    92,    93,
      93,    95,    94,    96,    96,    96,    97,    98,    99,    99,
      99,   100,   100,   101,   102,   103,   104,   104,   105,   106,
     106,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   115,   115,   115,   115,   116,   117,   117,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   121,   121,
     121,   122,   123,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     129,   129,   130,   130,   130,   130,   131,   131,   131,   131,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   137,   137,   137
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  srtl_parser::yyr2_[] =
  {
         0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       3,     1,     0,     6,     0,     6,     2,     1,     1,     3,
       3,     3,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     4,     6,     6,     5,
       5,     0,     7,     9,     5,     9,     3,     3,     6,     5,
       1,     3,     1,     1,     3,     3,     6,     5,     1,     2,
       1,     5,     5,     5,     7,     7,    10,     9,    11,     4,
       4,     4,     4,     6,     5,     2,     3,     3,     3,     2,
       5,     3,     3,     1,     5,     7,     2,     3,     3,     5,
       3,     1,     1,     6,     6,     1,     1,     3,     5,     3,
       3,     1,     2,     2,     1,     1,     3,     1,     1,     1,
       2,     2,     1,     1,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     4,     7,     5,     5,     5,     7,     7,
       7,     7,     7,     1,     1,     1,     1,     3,     1,     7,
       5,     3,     3,     1,     5,     3,     5,     3,     3,     1,
       3,     3,     3,     4,     1,     1,     1,     2,     1,     3,
       3,     3,     1,     1,     3
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const srtl_parser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "'_'", "'*'", "CONCRETE",
  "ABSTRACT", "EXTENDS", "OVERRIDES", "ROOT", "INSN", "EXP", "PEEP2",
  "SPLIT", "INSN_SPLIT", "INSN_RESERV", "PREDICATE", "SPECIAL_PREDICATE",
  "ATTR", "ASM_ATTR", "CONS", "REG_CONS", "MEM_CONS", "ADD_CONS", "BYPASS",
  "IN", "OUT", "LATENCY", "LOV", "DOCSTRING", "REGCLASS", "ALLCONSTRAINTS",
  "INSTANTIATES", "CONST_INT", "DUPLICATE", "FIXED_REG", "CMD_SPEC",
  "CMD_SPEC_BODY", "NONAME", "MODE_ATTR", "SET_ATTR", "AUTOMATON",
  "CODE_ATTR", "CONSTANTS", "CPU_UNIT", "LIST", "C_ITER", "C_ATTR",
  "M_ITER", "M_ATTR", "RESERVATION", "C_ENUM", "CBRACE", "OBRACE", "PIPE",
  "PLUS", "ASSIGN", "DDDD", "ID", "QUOTED_ID", "INT", "rid", "aid", "HEX",
  "'}'", "'{'", "'.'", "'('", "')'", "';'", "','", "'<'", "'>'", "':'",
  "'='", "'-'", "'\"'", "$accept", "Pattern_List", "Pattern",
  "Abstract_Pattern", "Abstract_Pattern_Name", "Abstract_Rtl_Spec", "$@1",
  "$@2", "Abstract_Extends_Body", "Abstract_Overrides_Body",
  "Concrete_Pattern", "Concrete_Pattern_Name_Qualifier_S",
  "Concrete_Pattern_Name_Qualifier", "Concrete_Pattern_Name_Qualifier_C",
  "Concrete_Rtl_Spec_S", "Concrete_Rtl_Spec", "Concrete_Rtl_Spec_C",
  "Concrete_Instantiates_Body_C", "$@3", "Concrete_Instantiates_Body_C2",
  "Concrete_Instantiates_Body", "Concrete_Overrides_Body",
  "Concrete_Instantiates_Body_Inner", "Quoted_Id_List",
  "Concrete_Overrides_Body_Inner", "Concrete_Instantiates_Body_Out",
  "Concrete_Overrides_Body_Out", "Concrete_Instantiates_Body_Inner_Out",
  "Concrete_Overrides_Body_Inner_Out", "Concrete_Inst_Stmt_List", "Stmt",
  "Mode_Stmt", "Attr_Access", "Operand_Access", "Operands", "Operand",
  "Fixed_Reg_Or_Const", "Constraint", "Predicate_Or_Mode_List",
  "Predicate_Or_Mode_With_Brackets", "Predicate_Or_Mode", "Quoted_Id",
  "Concrete_Pattern_Name_List", "Concrete_Pattern_Name_With_Brackets",
  "Concrete_Pattern_Name", "Base_Name", "Pattern_Name", "List_Pattern",
  "Code_Mode_Iter", "Code_Mode_Attr", "ListAsmEntries", "AsmEntry",
  "ListPID", "ListEntries", "ListQEntries", "SQEntryPair", "IEntryPair",
  "Id_Reg", "QIDList", "SEntry", "PipedId", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const srtl_parser::rhs_number_type
  srtl_parser::yyrhs_[] =
  {
        78,     0,    -1,    78,    79,    -1,    79,    -1,     1,    64,
      -1,    80,    -1,    87,    -1,   124,    -1,    37,    -1,    57,
      -1,     6,    81,    82,    -1,    58,    -1,    -1,     7,   122,
      83,    65,    85,    64,    -1,    -1,     8,   122,    84,    65,
      86,    64,    -1,    85,   107,    -1,   107,    -1,    58,    -1,
       5,    89,    92,    -1,     5,    90,    93,    -1,     5,    88,
      91,    -1,     5,   119,    66,    21,    65,   106,    64,    -1,
     119,    66,    20,    -1,   119,    66,    18,    -1,   119,    66,
      22,    -1,   119,    66,    23,    -1,   119,    66,    10,    -1,
     119,    66,    11,    -1,   119,    66,    15,    -1,   119,    66,
      16,    -1,   119,    66,    17,    -1,    66,    12,    -1,    66,
      13,    -1,   119,    66,    14,    -1,    32,   119,    97,    -1,
      32,   119,    97,    37,    -1,     8,   119,    66,    10,    98,
      37,    -1,     8,   119,    66,    11,    98,    37,    -1,    32,
      66,    25,   119,    94,    -1,     8,    66,    25,   119,    94,
      -1,    -1,    97,    36,    66,    25,    37,    95,    96,    -1,
      32,    66,    26,   119,   102,    36,    66,    26,    37,    -1,
      32,    66,    26,   119,   102,    -1,     8,    66,    26,   119,
     103,    36,    66,    26,    37,    -1,    65,    99,    64,    -1,
      65,   101,    64,    -1,     9,    67,   111,    68,    69,   106,
      -1,     9,    67,   111,    68,    69,    -1,   106,    -1,   100,
      70,   118,    -1,   118,    -1,   106,    -1,    65,   104,    64,
      -1,    65,   105,    64,    -1,     9,    67,   111,    68,    69,
     106,    -1,     9,    67,   111,    68,    69,    -1,   106,    -1,
     106,   108,    -1,   108,    -1,     9,   110,    56,   123,    69,
      -1,     9,   109,    56,   117,    69,    -1,     9,   109,    56,
     118,    69,    -1,     9,   109,    56,    71,   117,    72,    69,
      -1,     9,   109,    56,    33,    73,    60,    69,    -1,     9,
     109,    56,    58,    67,    58,    73,    35,    68,    69,    -1,
       9,   110,    56,   115,    73,   115,    73,   118,    69,    -1,
       9,   110,    56,    60,    74,   115,    73,   115,    73,   118,
      69,    -1,    27,    56,    60,    69,    -1,    28,    56,   118,
      69,    -1,    29,    56,   118,    69,    -1,    30,    56,   118,
      69,    -1,    31,    56,    67,   100,    68,    69,    -1,    58,
      75,    72,    58,    69,    -1,    66,    58,    -1,   110,    66,
      58,    -1,   110,    66,    16,    -1,   110,    66,    60,    -1,
      66,    60,    -1,   111,    70,    67,   111,    68,    -1,    67,
     111,    68,    -1,   111,    70,   112,    -1,   112,    -1,   115,
      73,   115,    73,   114,    -1,    60,    74,   115,    73,   115,
      73,   114,    -1,    34,    60,    -1,   115,    73,   114,    -1,
      18,    73,   114,    -1,    60,    74,   115,    73,   114,    -1,
      60,    74,   115,    -1,    60,    -1,   113,    -1,    58,    67,
     115,    73,    35,    68,    -1,    58,    67,   115,    73,    60,
      68,    -1,    35,    -1,    58,    -1,    33,    73,    60,    -1,
      33,    73,    60,    73,    58,    -1,    71,    60,    72,    -1,
      71,    58,    72,    -1,   118,    -1,   115,   116,    -1,   115,
     117,    -1,   116,    -1,   117,    -1,    71,   117,    72,    -1,
      60,    -1,    58,    -1,    59,    -1,   119,   120,    -1,   119,
     121,    -1,   120,    -1,   121,    -1,    71,   121,    72,    -1,
      71,   121,    73,   121,    72,    -1,    58,    -1,    60,    -1,
       4,    -1,    73,    -1,     3,    -1,    58,    -1,    58,    -1,
      45,    59,    66,    41,    -1,    45,    59,    66,    51,    53,
     130,    52,    -1,    45,    60,    66,    24,   135,    -1,    45,
      59,    66,    44,    59,    -1,    45,    59,    66,    50,    59,
      -1,    45,    59,    66,    50,    76,   137,    76,    -1,    45,
      38,    66,    43,    53,   129,    52,    -1,    45,    38,    66,
      19,    53,   127,    52,    -1,    45,    58,    66,   125,    53,
     130,    52,    -1,    45,    58,    66,   126,    53,   131,    52,
      -1,    46,    -1,    48,    -1,    47,    -1,    49,    -1,   127,
      70,   128,    -1,   128,    -1,    67,    40,    70,   118,    70,
      59,    68,    -1,   129,    70,    67,   133,    68,    -1,    67,
     133,    68,    -1,   130,    70,   136,    -1,   136,    -1,   130,
      70,    67,   132,    68,    -1,    67,   132,    68,    -1,   131,
      70,    67,   132,    68,    -1,   131,    70,   136,    -1,    67,
     132,    68,    -1,   136,    -1,    58,    70,   118,    -1,   134,
      70,    58,    -1,   134,    70,    60,    -1,   134,    70,    60,
      58,    -1,    58,    -1,    35,    -1,    59,    -1,   135,    59,
      -1,    58,    -1,    58,    54,   137,    -1,    67,   137,    68,
      -1,    58,    55,   137,    -1,    58,    -1,    59,    -1,    58,
      70,   137,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  srtl_parser::yyprhs_[] =
  {
         0,     0,     3,     6,     8,    11,    13,    15,    17,    19,
      21,    25,    27,    28,    35,    36,    43,    46,    48,    50,
      54,    58,    62,    70,    74,    78,    82,    86,    90,    94,
      98,   102,   106,   109,   112,   116,   120,   125,   132,   139,
     145,   151,   152,   160,   170,   176,   186,   190,   194,   201,
     207,   209,   213,   215,   217,   221,   225,   232,   238,   240,
     243,   245,   251,   257,   263,   271,   279,   290,   300,   312,
     317,   322,   327,   332,   339,   345,   348,   352,   356,   360,
     363,   369,   373,   377,   379,   385,   393,   396,   400,   404,
     410,   414,   416,   418,   425,   432,   434,   436,   440,   446,
     450,   454,   456,   459,   462,   464,   466,   470,   472,   474,
     476,   479,   482,   484,   486,   490,   496,   498,   500,   502,
     504,   506,   508,   510,   515,   523,   529,   535,   541,   549,
     557,   565,   573,   581,   583,   585,   587,   589,   593,   595,
     603,   609,   613,   617,   619,   625,   629,   635,   639,   643,
     645,   649,   653,   657,   662,   664,   666,   668,   671,   673,
     677,   681,   685,   687,   689
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  srtl_parser::yyrline_[] =
  {
         0,   160,   160,   162,   164,   168,   181,   202,   216,   219,
     226,   230,   240,   240,   307,   307,   315,   345,   380,   385,
     387,   389,   391,   417,   422,   427,   432,   439,   444,   449,
     454,   459,   466,   470,   474,   481,   533,   606,   630,   655,
     697,   714,   714,   723,   763,   804,   821,   825,   829,   836,
     841,   848,   851,   857,   864,   868,   872,   879,   886,   893,
     897,   905,   916,   926,   934,   944,   952,   960,   971,   982,
     989,   996,  1003,  1010,  1016,  1027,  1032,  1049,  1057,  1061,
    1070,  1083,  1090,  1094,  1102,  1111,  1122,  1128,  1148,  1154,
    1161,  1168,  1174,  1181,  1190,  1197,  1203,  1209,  1215,  1221,
    1227,  1235,  1241,  1246,  1251,  1257,  1265,  1272,  1276,  1283,
    1288,  1293,  1298,  1305,  1313,  1318,  1325,  1329,  1334,  1338,
    1342,  1348,  1353,  1359,  1367,  1375,  1383,  1391,  1401,  1411,
    1417,  1423,  1431,  1441,  1444,  1449,  1452,  1457,  1461,  1467,
    1477,  1482,  1488,  1492,  1496,  1500,  1506,  1510,  1514,  1518,
    1524,  1531,  1538,  1548,  1557,  1560,  1565,  1571,  1579,  1588,
    1596,  1603,  1611,  1617,  1623
  };

  // Print the state stack on the debug stream.
  void
  srtl_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  srtl_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  srtl_parser::token_number_type
  srtl_parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
      67,    68,     4,     2,    70,    75,    66,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    69,
      71,    74,    72,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    64,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int srtl_parser::yyeof_ = 0;
  const int srtl_parser::yylast_ = 588;
  const int srtl_parser::yynnts_ = 61;
  const int srtl_parser::yyempty_ = -2;
  const int srtl_parser::yyfinal_ = 32;
  const int srtl_parser::yyterror_ = 1;
  const int srtl_parser::yyerrcode_ = 256;
  const int srtl_parser::yyntokens_ = 77;

  const unsigned int srtl_parser::yyuser_token_number_max_ = 316;
  const srtl_parser::token_number_type srtl_parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */

/* Line 1142 of lalr1.cc  */



void yy::srtl_parser::error (const yy::srtl_parser::location_type& l,
                             const std::string& m) {
    driver.error (l, m);
}

