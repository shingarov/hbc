
# line 2 "syntax.y"
# include "id.h"
# include "tree.h"
extern tree root;
int yylineno;

# line 9 "syntax.y"
typedef union  {
    tree utree;
    id uid;
} YYSTYPE;
# define ID 257
# define TYPE 258
# define SEMICOL 259
# define COLON 260
# define END 261
# define STDEF 262
# define ENDDEF 263
#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern int yyerrflag;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
YYSTYPE yylval, yyval;
typedef int yytabelem;
#include <stdio.h>
# define YYERRCODE 256
yytabelem yyexca[] ={
	-1, 1,
	0, -1,
	-2, 0,
	};
# define YYNPROD 9
# define YYLAST 33
yytabelem yyact[]={

    16,    16,    12,    22,     7,    20,    17,    14,     8,    10,
    23,    21,    19,    11,     4,     2,     7,     3,    15,     6,
     1,    13,     5,     0,     0,     9,     0,     0,     0,     0,
     0,     0,    18 };
yytabelem yypact[]={

  -243,-10000000,  -240,  -245,  -241,  -253,-10000000,  -251,  -246,-10000000,
  -260,-10000000,  -256,  -257,  -247,-10000000,  -255,  -248,-10000000,-10000000,
  -254,-10000000,  -249,-10000000 };
yytabelem yypgo[]={

     0,    22,    19,    18,    21,    20 };
yytabelem yyr1[]={

     0,     5,     1,     1,     2,     2,     4,     4,     3 };
yytabelem yyr2[]={

     0,    13,     3,     5,    13,    11,     3,     5,     9 };
yytabelem yychk[]={

-10000000,    -5,   258,   257,   259,    -1,    -2,   257,   261,    -2,
   260,   259,   262,    -4,   263,    -3,   257,   263,    -3,   259,
   260,   259,   257,   259 };
yytabelem yydef[]={

     0,    -2,     0,     0,     0,     0,     2,     0,     0,     3,
     0,     1,     0,     0,     0,     6,     0,     0,     7,     5,
     0,     4,     0,     8 };
typedef struct { char *t_name; int t_val; } yytoktype;
#ifndef YYDEBUG
#	define YYDEBUG	0	/* don't allow debugging */
#endif

#if YYDEBUG

char * yyreds[] =
{
	"-no such reduction-",
      "typdef : TYPE ID SEMICOL deflist END SEMICOL",
      "deflist : def",
      "deflist : deflist def",
      "def : ID COLON STDEF itemlist ENDDEF SEMICOL",
      "def : ID COLON STDEF ENDDEF SEMICOL",
      "itemlist : item",
      "itemlist : itemlist item",
      "item : ID COLON ID SEMICOL",
};
yytoktype yytoks[] =
{
	"ID",	257,
	"TYPE",	258,
	"SEMICOL",	259,
	"COLON",	260,
	"END",	261,
	"STDEF",	262,
	"ENDDEF",	263,
	"-unknown-",	-1	/* ends search */
};
#endif /* YYDEBUG */

/* @(#)27       1.7.1.4  src/bos/usr/ccs/bin/yacc/yaccpar, cmdlang, bos430, 9737A_430 11/28/95 13:48:59 */
/*
 * COMPONENT_NAME: (CMDLANG) Language Utilities
 *
 * FUNCTIONS: yyparse
 * ORIGINS: 3
 */
/*
** Skeleton parser driver for yacc output
*/

/*
** yacc user known macros and defines
*/
#ifdef YYSPLIT
#   define YYERROR      return(-2)
#else
#   define YYERROR      goto yyerrlab
#endif
#ifdef YACC_MSG
#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE
#endif
#include <nl_types.h>
nl_catd yyusercatd;
#endif
#define YYACCEPT        return(0)
#define YYABORT         return(1)
#ifndef YACC_MSG
#define YYBACKUP( newtoken, newvalue )\
{\
        if ( yychar >= 0 || ( yyr2[ yytmp ] >> 1 ) != 1 )\
        {\
                yyerror( "syntax error - cannot backup" );\
                YYERROR;\
        }\
        yychar = newtoken;\
        yystate = *yyps;\
        yylval = newvalue;\
        goto yynewstate;\
}
#else
#define YYBACKUP( newtoken, newvalue )\
{\
        if ( yychar >= 0 || ( yyr2[ yytmp ] >> 1 ) != 1 )\
        {\
                yyusercatd=catopen("yacc_user.cat", NL_CAT_LOCALE);\
                yyerror(catgets(yyusercatd,1,1,"syntax error - cannot backup" ));\
                YYERROR;\
        }\
        yychar = newtoken;\
        yystate = *yyps;\
        yylval = newvalue;\
        goto yynewstate;\
}
#endif
#define YYRECOVERING()  (!!yyerrflag)
#ifndef YYDEBUG
#       define YYDEBUG  1       /* make debugging available */
#endif

/*
** user known globals
*/
int yydebug;                    /* set to 1 to get debugging */

/*
** driver internal defines
*/
#define YYFLAG          (-10000000)

#ifdef YYSPLIT
#   define YYSCODE { \
                        extern int (*_yyf[])(); \
                        register int yyret; \
                        if (_yyf[yytmp]) \
                            if ((yyret=(*_yyf[yytmp])()) == -2) \
                                    goto yyerrlab; \
                                else if (yyret>=0) return(yyret); \
                   }
#endif

/*
** global variables used by the parser
*/
YYSTYPE yyv[ YYMAXDEPTH ];      /* value stack */
int yys[ YYMAXDEPTH ];          /* state stack */

YYSTYPE *yypv;                  /* top of value stack */
YYSTYPE *yypvt;                 /* top of value stack for $vars */
int *yyps;                      /* top of state stack */

int yystate;                    /* current state */
int yytmp;                      /* extra var (lasts between blocks) */

int yynerrs;                    /* number of errors */
int yyerrflag;                  /* error recovery flag */
int yychar;                     /* current input token number */

#ifdef __cplusplus
 #ifdef _CPP_IOSTREAMS
  #include <iostream.h>
  extern void yyerror (char *); /* error message routine -- iostream version */
 #else
  #include <stdio.h>
  extern "C" void yyerror (char *); /* error message routine -- stdio version */
 #endif /* _CPP_IOSTREAMS */
 extern "C" int yylex(void);        /* return the next token */
#endif /* __cplusplus */


/*
** yyparse - return 0 if worked, 1 if syntax error not recovered from
*/
#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
int
yyparse()
{
        /*
        ** Initialize externals - yyparse may be called more than once
        */
        yypv = &yyv[-1];
        yyps = &yys[-1];
        yystate = 0;
        yytmp = 0;
        yynerrs = 0;
        yyerrflag = 0;
        yychar = -1;
#ifdef YACC_MSG
        yyusercatd=catopen("yacc_user.cat", NL_CAT_LOCALE);
#endif
        goto yystack;
        {
                register YYSTYPE *yy_pv;        /* top of value stack */
                register int *yy_ps;            /* top of state stack */
                register int yy_state;          /* current state */
                register int  yy_n;             /* internal state number info */

                /*
                ** get globals into registers.
                ** branch to here only if YYBACKUP was called.
                */
        yynewstate:
                yy_pv = yypv;
                yy_ps = yyps;
                yy_state = yystate;
                goto yy_newstate;

                /*
                ** get globals into registers.
                ** either we just started, or we just finished a reduction
                */
        yystack:
                yy_pv = yypv;
                yy_ps = yyps;
                yy_state = yystate;

                /*
                ** top of for (;;) loop while no reductions done
                */
        yy_stack:
                /*
                ** put a state and value onto the stacks
                */
#if YYDEBUG
                /*
                ** if debugging, look up token value in list of value vs.
                ** name pairs.  0 and negative (-1) are special values.
                ** Note: linear search is used since time is not a real
                ** consideration while debugging.
                */
                if ( yydebug )
                {
                        register int yy_i;

#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                        cout << "State " << yy_state << " token ";
                        if ( yychar == 0 )
                                cout << "end-of-file" << endl;
                        else if ( yychar < 0 )
                                cout << "-none-" << endl;
#else
                        printf( "State %d, token ", yy_state );
                        if ( yychar == 0 )
                                printf( "end-of-file\n" );
                        else if ( yychar < 0 )
                                printf( "-none-\n" );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                        else
                        {
                                for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
                                        yy_i++ )
                                {
                                        if ( yytoks[yy_i].t_val == yychar )
                                                break;
                                }
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                cout << yytoks[yy_i].t_name << endl;
#else
                                printf( "%s\n", yytoks[yy_i].t_name );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                        }
                }
#endif /* YYDEBUG */
                if ( ++yy_ps >= &yys[ YYMAXDEPTH ] )    /* room on stack? */
                {
#ifndef YACC_MSG
                        yyerror( "yacc stack overflow" );
#else
                        yyerror(catgets(yyusercatd,1,2,"yacc stack overflow" ));
#endif
                        YYABORT;
                }
                *yy_ps = yy_state;
                *++yy_pv = yyval;

                /*
                ** we have a new state - find out what to do
                */
        yy_newstate:
                if ( ( yy_n = yypact[ yy_state ] ) <= YYFLAG )
                        goto yydefault;         /* simple state */
#if YYDEBUG
                /*
                ** if debugging, need to mark whether new token grabbed
                */
                yytmp = yychar < 0;
#endif
                if ( ( yychar < 0 ) && ( ( yychar = yylex() ) < 0 ) )
                        yychar = 0;             /* reached EOF */
#if YYDEBUG
                if ( yydebug && yytmp )
                {
                        register int yy_i;

#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                        cout << "Received token " << endl;
                        if ( yychar == 0 )
                                cout << "end-of-file" << endl;
                        else if ( yychar < 0 )
                                cout << "-none-" << endl;
#else
                        printf( "Received token " );
                        if ( yychar == 0 )
                                printf( "end-of-file\n" );
                        else if ( yychar < 0 )
                                printf( "-none-\n" );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                        else
                        {
                                for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
                                        yy_i++ )
                                {
                                        if ( yytoks[yy_i].t_val == yychar )
                                                break;
                                }
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                cout << yytoks[yy_i].t_name << endl;
#else
                                printf( "%s\n", yytoks[yy_i].t_name );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                        }
                }
#endif /* YYDEBUG */
                if ( ( ( yy_n += yychar ) < 0 ) || ( yy_n >= YYLAST ) )
                        goto yydefault;
                if ( yychk[ yy_n = yyact[ yy_n ] ] == yychar )  /*valid shift*/
                {
                        yychar = -1;
                        yyval = yylval;
                        yy_state = yy_n;
                        if ( yyerrflag > 0 )
                                yyerrflag--;
                        goto yy_stack;
                }

        yydefault:
                if ( ( yy_n = yydef[ yy_state ] ) == -2 )
                {
#if YYDEBUG
                        yytmp = yychar < 0;
#endif
                        if ( ( yychar < 0 ) && ( ( yychar = yylex() ) < 0 ) )
                                yychar = 0;             /* reached EOF */
#if YYDEBUG
                        if ( yydebug && yytmp )
                        {
                                register int yy_i;

#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                cout << "Received token " << endl;
                                if ( yychar == 0 )
                                        cout << "end-of-file" << endl;
                                else if ( yychar < 0 )
                                        cout << "-none-" << endl;
#else
                                printf( "Received token " );
                                if ( yychar == 0 )
                                        printf( "end-of-file\n" );
                                else if ( yychar < 0 )
                                        printf( "-none-\n" );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                                else
                                {
                                        for ( yy_i = 0;
                                                yytoks[yy_i].t_val >= 0;
                                                yy_i++ )
                                        {
                                                if ( yytoks[yy_i].t_val
                                                        == yychar )
                                                {
                                                        break;
                                                }
                                        }
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                        cout << yytoks[yy_i].t_name << endl;
#else
                                        printf( "%s\n", yytoks[yy_i].t_name );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                                }
                        }
#endif /* YYDEBUG */
                        /*
                        ** look through exception table
                        */
                        {
                                register int *yyxi = yyexca;

                                while ( ( *yyxi != -1 ) ||
                                        ( yyxi[1] != yy_state ) )
                                {
                                        yyxi += 2;
                                }
                                while ( ( *(yyxi += 2) >= 0 ) &&
                                        ( *yyxi != yychar ) )
                                        ;
                                if ( ( yy_n = yyxi[1] ) < 0 )
                                        YYACCEPT;
                        }
                }

                /*
                ** check for syntax error
                */
                if ( yy_n == 0 )        /* have an error */
                {
                        /* no worry about speed here! */
                        switch ( yyerrflag )
                        {
                        case 0:         /* new error */
#ifndef YACC_MSG
                                yyerror( "syntax error" );
#else
                                yyerror(catgets(yyusercatd,1,3,"syntax error" ));
#endif
                                goto skip_init;
                        yyerrlab:
                                /*
                                ** get globals into registers.
                                ** we have a user generated syntax type error
                                */
                                yy_pv = yypv;
                                yy_ps = yyps;
                                yy_state = yystate;
                                yynerrs++;
                        skip_init:
                        case 1:
                        case 2:         /* incompletely recovered error */
                                        /* try again... */
                                yyerrflag = 3;
                                /*
                                ** find state where "error" is a legal
                                ** shift action
                                */
                                while ( yy_ps >= yys )
                                {
                                        yy_n = yypact[ *yy_ps ] + YYERRCODE;
                                        if ( yy_n >= 0 && yy_n < YYLAST &&
                                                yychk[yyact[yy_n]] == YYERRCODE)                                        {
                                                /*
                                                ** simulate shift of "error"
                                                */
                                                yy_state = yyact[ yy_n ];
                                                goto yy_stack;
                                        }
                                        /*
                                        ** current state has no shift on
                                        ** "error", pop stack
                                        */
#if YYDEBUG
                                        if ( yydebug )
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                            cout << "Error recovery pops state "
                                                 << (*yy_ps)
                                                 << ", uncovers state "
                                                 << yy_ps[-1] << endl;
#else
#       define _POP_ "Error recovery pops state %d, uncovers state %d\n"
                                                printf( _POP_, *yy_ps,
                                                        yy_ps[-1] );
#       undef _POP_
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
#endif
                                        yy_ps--;
                                        yy_pv--;
                                }
                                /*
                                ** there is no state on stack with "error" as
                                ** a valid shift.  give up.
                                */
                                YYABORT;
                        case 3:         /* no shift yet; eat a token */
#if YYDEBUG
                                /*
                                ** if debugging, look up token in list of
                                ** pairs.  0 and negative shouldn't occur,
                                ** but since timing doesn't matter when
                                ** debugging, it doesn't hurt to leave the
                                ** tests here.
                                */
                                if ( yydebug )
                                {
                                        register int yy_i;

#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                        cout << "Error recovery discards ";
                                        if ( yychar == 0 )
                                            cout << "token end-of-file" << endl;
                                        else if ( yychar < 0 )
                                            cout << "token -none-" << endl;
#else
                                        printf( "Error recovery discards " );
                                        if ( yychar == 0 )
                                                printf( "token end-of-file\n" );
                                        else if ( yychar < 0 )
                                                printf( "token -none-\n" );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                                        else
                                        {
                                                for ( yy_i = 0;
                                                        yytoks[yy_i].t_val >= 0;
                                                        yy_i++ )
                                                {
                                                        if ( yytoks[yy_i].t_val
                                                                == yychar )
                                                        {
                                                                break;
                                                        }
                                                }
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                                                cout << "token " <<
                                                    yytoks[yy_i].t_name <<
                                                    endl;
#else
                                                printf( "token %s\n",
                                                        yytoks[yy_i].t_name );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                                        }
                                }
#endif /* YYDEBUG */
                                if ( yychar == 0 )      /* reached EOF. quit */
                                        YYABORT;
                                yychar = -1;
                                goto yy_newstate;
                        }
                }/* end if ( yy_n == 0 ) */
                /*
                ** reduction by production yy_n
                ** put stack tops, etc. so things right after switch
                */
#if YYDEBUG
                /*
                ** if debugging, print the string that is the user's
                ** specification of the reduction which is just about
                ** to be done.
                */
                if ( yydebug )
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                        cout << "Reduce by (" << yy_n << ") \"" <<
                            yyreds[ yy_n ] << "\"\n";
#else
                        printf( "Reduce by (%d) \"%s\"\n",
                                yy_n, yyreds[ yy_n ] );
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
#endif
                yytmp = yy_n;                   /* value to switch over */
                yypvt = yy_pv;                  /* $vars top of value stack */
                /*
                ** Look in goto table for next state
                ** Sorry about using yy_state here as temporary
                ** register variable, but why not, if it works...
                ** If yyr2[ yy_n ] doesn't have the low order bit
                ** set, then there is no action to be done for
                ** this reduction.  So, no saving & unsaving of
                ** registers done.  The only difference between the
                ** code just after the if and the body of the if is
                ** the goto yy_stack in the body.  This way the test
                ** can be made before the choice of what to do is needed.
                */
                {
                        /* length of production doubled with extra bit */
                        register int yy_len = yyr2[ yy_n ];

                        if ( !( yy_len & 01 ) )
                        {
                                yy_len >>= 1;
                                yyval = ( yy_pv -= yy_len )[1]; /* $$ = $1 */
                                yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
                                        *( yy_ps -= yy_len ) + 1;
                                if ( yy_state >= YYLAST ||
                                        yychk[ yy_state =
                                        yyact[ yy_state ] ] != -yy_n )
                                {
                                        yy_state = yyact[ yypgo[ yy_n ] ];
                                }
                                goto yy_stack;
                        }
                        yy_len >>= 1;
                        yyval = ( yy_pv -= yy_len )[1]; /* $$ = $1 */
                        yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
                                *( yy_ps -= yy_len ) + 1;
                        if ( yy_state >= YYLAST ||
                                yychk[ yy_state = yyact[ yy_state ] ] != -yy_n )
                        {
                                yy_state = yyact[ yypgo[ yy_n ] ];
                        }
                }
                                        /* save until reenter driver code */
                yystate = yy_state;
                yyps = yy_ps;
                yypv = yy_pv;
        }
        /*
        ** code supplied by user is placed in this switch
        */

                switch(yytmp){

case 1:
# line 20 "syntax.y"

	{
		root = mktypdef(yypvt[-4].uid, yypvt[-2].utree);
	} /*NOTREACHED*/ break;
case 2:
# line 26 "syntax.y"

	{
		yyval.utree = yypvt[-0].utree;
	} /*NOTREACHED*/ break;
case 3:
# line 30 "syntax.y"

	{
		yyval.utree = mkdeflist(yypvt[-1].utree, yypvt[-0].utree);
	} /*NOTREACHED*/ break;
case 4:
# line 36 "syntax.y"

	{
		yyval.utree = mkdef(yypvt[-5].uid, yypvt[-2].utree);
	} /*NOTREACHED*/ break;
case 5:
# line 40 "syntax.y"

	{
		yyval.utree = mkdef(yypvt[-4].uid, mkemitemlist());
	} /*NOTREACHED*/ break;
case 6:
# line 46 "syntax.y"

	{
		yyval.utree = yypvt[-0].utree;
	} /*NOTREACHED*/ break;
case 7:
# line 50 "syntax.y"

	{
		yyval.utree = mkitemlist(yypvt[-1].utree, yypvt[-0].utree);
	} /*NOTREACHED*/ break;
case 8:
# line 56 "syntax.y"

	{
		yyval.utree = mkitem(yypvt[-3].uid, yypvt[-1].uid);
	} /*NOTREACHED*/ break;
}


        goto yystack;           /* reset registers in driver code */
}

# line 60 "syntax.y"
