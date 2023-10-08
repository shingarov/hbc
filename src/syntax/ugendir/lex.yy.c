# include <stdio.h>
# include <stddef.h>
# include <locale.h>
# include <stdlib.h>
# define U(x) ((x)&0377)
# define NCH 256
# define NLSTATE yyprevious=YYNEWLINE
# define BEGIN yybgin = yysvec + 1 +
# define INITIAL 0
# define YYLERR yysvec
# define YYSTATE (yyestate-yysvec-1)
# define YYOPTIM 1
# define YYLMAX 200


/**** UGLY MISPORT ****/

char *mbsinvalid(const char *s)
{
    int len;
    int rc;
    
    if (s == (char *)NULL)
	return ((char *)NULL);

    while (*s) {
	if ((rc = mblen(s, MB_CUR_MAX)) == -1)
	    return(s);
	s += rc;
    }

    return ((char *)NULL);
}


/**********************/



#ifdef __cplusplus
int yylook(void);
extern "C" int yywrap(void), yyless(int), yyreject(void);
#endif /* __cplusplus */

#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
# include <iostream.h>
# define output(c) (*yyout) << ((unsigned char) c)
# define input() (((yytchar=yysptr>yysbuf?U(*--yysptr):yyin->get())==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
# define ECHO (*yyout) << yytext
istream *yyin = &cin;
ostream *yyout = &cout;
#else
# define output(c) putc(c,yyout)
# define input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
# define ECHO fprintf(yyout, "%S",yywtext)
FILE *yyin = NULL, *yyout = NULL;
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
# define unput(c) {yytchar= (c);if(yytchar=='\n')yylineno--;*yysptr++=yytchar;}
# define yymore() (yymorfg=1)
# define REJECT { yynstr = yyreject(); goto yyfussy;}
# define yysetlocale() setlocale(LC_ALL,"")
# define wreturn(r) return(yywreturn(r))
# define winput() yywinput()
# define wunput(c) yywunput(c)
# define woutput(c) yywoutput(c)
int yyleng;
extern char yytext[];
int yywleng; extern wchar_t yywtext[];
int yymorfg;
int yymbcurmax = -1;
int __once_yylex = 1;
extern unsigned char *yysptr, yysbuf[];
int yytchar;
extern int yylineno;
struct yywork;
struct yysvf { 
	struct yywork *yystoff;
	struct yysvf *yyother;
	int *yystops;};
struct yysvf *yyestate;
extern struct yysvf yysvec[], *yybgin;
#include "id.h"
#include "tree.h"
#include "y.tab.h"
#include <stdio.h>
extern  FILE *fc;
#ifdef ECHO
#undef ECHO
#endif
#define ECHO 

char yytext[YYLMAX];
int yyback(int *yyp, int yym);
# if YYHSIZE
int yyhlook(int yyc, int yyv);
int yymlook(int yyc);
# endif /*YYHSIZE*/
# if YYXSIZE
int yyxlook (int yyc, int yyv);
#endif /*YYXSIZE*/
int yywinput();
void yywoutput(int yyc);
void yywunput(int yyc);
int yywreturn(int yyr);
int yyinput();
void yyoutput(int yyc);
void yyunput(int yyc);
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
int yymbinput();
void yymboutput(int yyc);
void yymbunput(int yyc);
int yymbreturn(int yyx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
# define YYNEWLINE 10
#ifdef __cplusplus
extern "C"
#endif /*__cplusplus */
int yylex(){
int yynstr; extern int yyprevious;
if (__once_yylex) {
      yysetlocale();
#if !(__cplusplus && _CPP_IOSTREAMS)
      if (yyin == NULL) yyin = stdin;
      if (yyout == NULL) yyout = stdout;
#endif /* !(__cplusplus && _CPP_IOSTREAMS) */
      __once_yylex = 0; }
if(yymbcurmax<=0) yymbcurmax=MB_CUR_MAX;
while((yynstr = yylook()) >= 0)
yyfussy: switch(yynstr){
case 0:
if(yywrap()) return(0); break;
case 1:
		{ ECHO; return(SEMICOL); }
/*NOTREACHED*/ break;
case 2:
		{ ECHO; return(COLON); }
/*NOTREACHED*/ break;
case 3:
		{ ECHO; return(STDEF); }
/*NOTREACHED*/ break;
case 4:
		{ ECHO; return(ENDDEF); }
/*NOTREACHED*/ break;
case 5:
 		{ ECHO; return(TYPE); }
/*NOTREACHED*/ break;
case 6:
 		{ ECHO; return(END); }
/*NOTREACHED*/ break;
case 7:
{
				ECHO;
				yylval.uid = installid(yytext);
				return(ID);
			}
/*NOTREACHED*/ break;
case 8:
		ECHO;
/*NOTREACHED*/ break;
case 9:
		ECHO;
/*NOTREACHED*/ break;
case 10:
ECHO;
/*NOTREACHED*/ break;
case 11:
{
				ECHO;
				yytext[yyleng-2] = '\0';
				fprintf(fc, "\n%s",  &yytext[2]);
			}
/*NOTREACHED*/ break;
case -1:
break;
default:
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
(*yyout) << "bad switch yylook " << yynstr;
#else
fprintf(yyout,"bad switch yylook %d",yynstr);
#endif /* defined(__cplusplus) && defined(_CPP_IOSTREAMS)*/
} return(0); }
/* end of yylex */
#ifndef yywrap
yywrap()
{
	return(1);
}
#endif
int yyvstop[] = {
0,

8,
0,

9,
0,

8,
0,

8,
0,

2,
8,
0,

1,
8,
0,

3,
8,
0,

4,
8,
0,

7,
8,
0,

7,
8,
0,

7,
8,
0,

7,
0,

7,
0,

7,
0,

6,
7,
0,

7,
0,

11,
0,

10,
0,

5,
7,
0,
0};
# define YYTYPE unsigned char
struct yywork { YYTYPE verify, advance; } yycrank[] = {
	0,0,	0,0,	1,3,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	1,4,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	1,5,	0,0,
	0,0,	0,0,	0,0,	1,3,
	6,15,	0,0,	20,15,	0,0,
	1,6,	1,3,	19,14,	20,24,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	1,7,
	1,8,	1,9,	0,0,	1,10,
	0,0,	0,0,	1,11,	2,7,
	2,8,	2,9,	0,0,	2,10,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	17,21,	1,12,	22,25,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	2,12,	12,17,
	0,0,	18,22,	0,0,	0,0,
	0,0,	1,13,	0,0,	0,0,
	0,0,	0,0,	13,18,	0,0,
	5,14,	2,13,	1,3,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	0,0,	19,23,	0,0,
	0,0,	0,0,	0,0,	0,0,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	0,0,	0,0,
	0,0,	0,0,	11,16,	0,0,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	11,16,	11,16,
	11,16,	11,16,	14,14,	0,0,
	15,15,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	14,14,
	0,0,	15,15,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	14,19,	0,0,
	15,15,	0,0,	0,0,	14,14,
	0,0,	15,20,	0,0,	0,0,
	14,14,	14,14,	15,15,	15,15,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	14,14,	0,0,
	15,15,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	0,0,	0,0,
	0,0,	0,0,	14,14,	0,0,
	15,15,	0,0};
# define YYHSIZE 0
struct yywwork { wchar_t wch; unsigned int wnext; YYTYPE wverify, wadvance;} yywcrank[] = {
	0,0,0,0};
struct yysvf yysvec[] = {
0,	0,	0,
yycrank+-1,	0,		0,	
yycrank+-9,	yysvec+1,	0,	
yycrank+0,	0,		yyvstop+1,
yycrank+0,	0,		yyvstop+3,
yycrank+1,	0,		yyvstop+5,
yycrank+2,	0,		yyvstop+7,
yycrank+0,	0,		yyvstop+9,
yycrank+0,	0,		yyvstop+12,
yycrank+0,	0,		yyvstop+15,
yycrank+0,	0,		yyvstop+18,
yycrank+79,	0,		yyvstop+21,
yycrank+1,	yysvec+11,	yyvstop+24,
yycrank+1,	yysvec+11,	yyvstop+27,
yycrank+-201,	0,		0,	
yycrank+-203,	0,		0,	
yycrank+0,	yysvec+11,	yyvstop+30,
yycrank+1,	yysvec+11,	yyvstop+32,
yycrank+1,	yysvec+11,	yyvstop+34,
yycrank+-13,	yysvec+14,	0,	
yycrank+-4,	yysvec+15,	0,	
yycrank+0,	yysvec+11,	yyvstop+36,
yycrank+2,	yysvec+11,	yyvstop+39,
yycrank+0,	0,		yyvstop+41,
yycrank+0,	0,		yyvstop+43,
yycrank+0,	yysvec+11,	yyvstop+45,
0,	0,	0};
struct yywork *yytop = yycrank+328;
struct yysvf *yybgin = yysvec+1;
unsigned char yymatch[] = {
00  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,012 ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,'%' ,01  ,01  ,
01  ,01  ,'*' ,01  ,01  ,01  ,01  ,'/' ,
'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,
'0' ,'0' ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,01  ,01  ,01  ,01  ,'0' ,
01  ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,'A' ,
'A' ,'A' ,'A' ,01  ,01  ,'}' ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
0};
unsigned char yyextra[] = {
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0};
/* @(#)44 1.9.2.7 src/bos/usr/ccs/lib/libl/ncform, libl, bos43N, 9913A_43N 3/24/99 08:02:37";*/
/*
 * COMPONENT_NAME: (LIBL) Lex Libraries
 *
 * FUNCTIONS: yylook, yyhlook, yyback, yyinput, yyoutput, yyunput,
 *            yymbinput, yymboutput, yymbunput, yymbreturn
 *            yywinput, yywoutput, yywunput, yywreturn
 *
 * ORIGINS: 3
 *
*/

int yylineno =1;

# define YYU(x)         x
# define NLSTATE        yyprevious=YYNEWLINE

# define YYCCLDOT       0x0001

wchar_t         yywtext[YYLMAX];
wchar_t         yywbuf[YYLMAX];

unsigned char   yytbuf[YYLMAX];
unsigned char   *yytbp;
int             yytbi;
wchar_t         yytwc;

struct yysvf    *yylstate [YYLMAX], **yylsp, **yyolsp;
unsigned char   yysbuf[YYLMAX];
unsigned char   *yysptr = yysbuf;
int             *yyfnd;
extern struct yysvf *yyestate;
int             yyprevious = YYNEWLINE;

# ifdef LEXDEBUG
int             debug;
#ifdef __cplusplus
#ifdef _CPP_IOSTREAMS
void            allprint(wchar_t);
void            sprint  (wchar_t *);
#else
extern "C" void allprint(wchar_t);
extern "C" void sprint  (wchar_t *);
#endif
#endif
# endif

yylook()
{
register struct yysvf *yystate, **yytlsp;
register struct yywork *yyt;
struct yysvf    *yyz;
int             yywch, yyfirst, yyw;
struct yywork   *yyr;
wchar_t         *yywlastch;
/*
 * start off machines
 */
# ifdef LEXDEBUG
    debug = 1;
# endif

    yyfirst=1;
    if (!yymorfg)
        yywlastch = yywtext;
    else
    {
        yymorfg=0;
        yywlastch = &(yywtext[yywleng]);
    }

    for(;;)
    {
        yytlsp = yylstate;
        yyestate = yystate = yybgin;
        if (yyprevious==YYNEWLINE)
            yystate++;
        for (;;)
        {
# ifdef LEXDEBUG
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
            if(debug) (*yyout) << "state " << yystate-yysvec-1 << endl;
#else
            if(debug) fprintf(yyout,"state %d\n",yystate-yysvec-1);
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
# endif
            yyt = yystate->yystoff;
            if(yyt == yycrank && !yyfirst)      /* may not be any transitions */
            {
                yyz = yystate->yyother;
                if(yyz == 0)
                    break;
                if(yyz->yystoff == yycrank)
                    break;
            }
            yywch = winput();

           if( (yywlastch - yywtext) < YYLMAX -1)
            *yywlastch++ = yywch;

           else
           {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)    	
	    (*yyout) << "LEX Error: input string too long to fit in yywtext[]." << endl;
	    (*yyout) << "Increase the array size by defining YYLMAX to be a higher value" << endl;
#else
            fprintf(yyout,"LEX Error: input string too long to fit in yywtext[].\n\
	   Increase the array size by defining YYLMAX to be a higher value\n");
#endif
	    exit(1);
	    
	    }


            yyfirst=0;
        tryagain:
# ifdef LEXDEBUG
            if(debug)
            {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                (*yyout) << "char ";
                allprint (yywch);
                (*yyout) << endl;
#else
                fprintf(yyout,"char ");
                allprint(yywch);
                putchar('\n');
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
            }
# endif
            yyr = yyt;
            if ( (long)yyt > (long)yycrank)
            {
                if (yywch < NCH)                /* 8-bit */
                {
                    yyt = yyr + yywch;
                    if (yyt <= yytop && yyt->verify+yysvec == yystate)
                    {
                        if(yyt->advance+yysvec == YYLERR) /* error transitions */
                        {
                            wunput(*--yywlastch);
                            break;
                        }
                        *yytlsp++ = yystate = yyt->advance+yysvec;
                        goto contin;
                    }
                }
# if YYHSIZE
                else                            /* wide */
                {
                    if (yyw = yyhlook(yywch,yystate-yysvec))
                    {
                        if (yywcrank[yyw].wadvance+yysvec==YYLERR)
                        {
                            wunput(*--yywlastch);
                            break;
                        }
                        *yytlsp++ = yystate = yywcrank[yyw].wadvance+yysvec;
                        goto contin;
                    }
                }
# endif /*YYHSIZE*/
            }
# ifdef YYOPTIM
            else if ((long)yyt < (long)yycrank)   /* r < yycrank */
            {
                yyt = yyr = yycrank+(yycrank-yyt);
# ifdef LEXDEBUG
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                if(debug) (*yyout) << "compressed state" << endl;
#else
                if(debug) fprintf(yyout,"compressed state\n");
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
# endif
                if (yywch < NCH)                /* 8-bit */
                {
                    yyt = yyt + yywch;
                    if(yyt <= yytop && yyt->verify+yysvec == yystate)
                    {
                        if(yyt->advance+yysvec == YYLERR) /* error transitions */
                        {
                            wunput(*--yywlastch);
                            break;
                        }
                        *yytlsp++ = yystate = yyt->advance+yysvec;
                        goto contin;
                    }
                    yyt = yyr + YYU(yymatch[yywch]);
# ifdef LEXDEBUG
                    if(debug)
                    {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                        (*yyout) << "try fall back character ";
                        allprint(YYU(yymatch[yywch]));
                        (*yyout) << endl;
#else
                        fprintf(yyout,"try fall back character ");
                        allprint(YYU(yymatch[yywch]));
                        putchar('\n');
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                    }
# endif
                    if(yyt <= yytop && yyt->verify+yysvec == yystate)
                    {
                        if(yyt->advance+yysvec == YYLERR) /* error transition */
                        {
                            wunput(*--yywlastch);
                            break;
                        }
                        *yytlsp++ = yystate = yyt->advance+yysvec;
                        goto contin;
                    }
                }
# if YYHSIZE
                else                            /* wide */
                {
                    if (yyw = yyhlook(yywch,yystate-yysvec))
                    {
                        if (yywcrank[yyw].wadvance+yysvec==YYLERR)
                        {
                            wunput(*--yywlastch);
                            break;
                        }
                        *yytlsp++ = yystate = yywcrank[yyw].wadvance+yysvec;
                        goto contin;
                    }
                    if (yyw = yymlook(yywch))   /* find the target char */
                    {
                        if (yyw = yyhlook(yyw,yystate-yysvec))
                        {
                            if (yywcrank[yyw].wadvance+yysvec == YYLERR)
                            {
                                wunput(*--yywlastch);
                                break;
                            }
                            *yytlsp++ = yystate = yywcrank[yyw].wadvance+yysvec;
                            goto contin;
                        }
                    }
                }
# endif /*YYHSIZE*/
# if YYXSIZE
# ifdef MFDEBUG
                if (debug)
                {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                    (*yyout) << "try extended ccl on char ";
                    allprint(YYU(yywch));
                    (*yyout) << '\n';
#else
                    fprintf (yyout, "try extended ccl on char ");
                    allprint(YYU(yywch));
                    putchar('\n');
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                }
# endif
                yyw = yyxlook(yywch,yystate-yysvec);
                if (yyw != -1)
                {
                    if (yyxccl[yyw].advance+yysvec == YYLERR)
                    {
                        wunput(*--yywlastch);
                        break;
                    }
                    *yytlsp++ = yystate = yyxccl[yyw].advance+yysvec;
                    goto contin;
                }
# endif /*YYXSIZE*/
            } /* r < yycrank */
            if ((yystate = yystate->yyother) && (yyt= yystate->yystoff) != yycrank)
            {
# ifdef LEXDEBUG
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                if(debug) (*yyout) << "fall back to state "
                                   << yystate-yysvec-1 << endl;
#else
                if(debug) fprintf(yyout,"fall back to state %d\n",yystate-yysvec-1);
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
# endif
                goto tryagain;
            }
# endif /*YYOPTIM*/
            else
            {
                wunput(*--yywlastch);
                break;
            }
        contin:
# ifdef LEXDEBUG
            if(debug)
            {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                (*yyout) << "state " << yystate-yysvec-1 << " char ";
                allprint(yywch);
                (*yyout) << endl;
#else
                fprintf(yyout,"state %d char ",yystate-yysvec-1);
                allprint(yywch);
                putchar('\n');
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
            }
# endif
            ; /* contin: */
        } /* for(;;) */
# ifdef LEXDEBUG
        if(debug)
        {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
            (*yyout) << "stopped at " << (int) (*(yytlsp-1)-yysvec-1) << " with ";
            allprint(yywch);
            (*yyout) << endl;
#else
            fprintf(yyout,"stopped at %d with ",*(yytlsp-1)-yysvec-1);
            allprint(yywch);
            putchar('\n');
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
        }
# endif
        while (yytlsp-- > yylstate)
        {
            *yywlastch-- = 0;
            if (*yytlsp != 0 && (yyfnd= (*yytlsp)->yystops) && *yyfnd > 0)
            {
                yyolsp = yytlsp;
                if(yyextra[*yyfnd])             /* must backup */
                {
                    while(yyback((*yytlsp)->yystops,-*yyfnd) != 1 && yytlsp > yylstate)
                    {
                        yytlsp--;
                        wunput(*yywlastch--);
                    }
                }
                yyprevious = YYU(*yywlastch);
                yylsp = yytlsp;
                yywleng = yywlastch-yywtext+1;
                yywtext[yywleng] = 0;
# ifdef LEXDEBUG
                if(debug)
                {
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
                    (*yyout) << "\nmatch ";
                    sprint(yywtext);
                    (*yyout) << " action " << *yyfnd << endl;
#else
                    fprintf(yyout,"\nmatch ");
                    sprint(yywtext);
                    fprintf(yyout," action %d\n",*yyfnd);
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
                }
# endif

                wreturn(*yyfnd++);
            }
            wunput(*yywlastch);
        }
        if (yywtext[0] == 0  /* && feof(yyin) */)
        {
            yysptr=yysbuf;
            wreturn(0);
        }
        yyprevious = yywtext[0] = winput();
        if (yyprevious>0)
            woutput(yyprevious);
        yywlastch=yywtext;
# ifdef LEXDEBUG
#if defined(__cplusplus) && defined(_CPP_IOSTREAMS)
        if(debug) cout << endl;
#else
        if(debug) putchar('\n');
#endif /* #if defined(__cplusplus) && defined(_CPP_IOSTREAMS) */
# endif
    } /* for (;;) */
    wreturn(0);
}
int yyback(int *yyp, int yym)
{
    if (yyp==0) return(0);
    while (*yyp)
    {
        if (*yyp++ == yym)
            return(1);
    }
    return(0);
}
# if YYHSIZE
/*
 * wide chars are hashed in yywcrank, return the index of the found element, or
 * zero
 */
int yyhlook(int yyc, int yyv)
{
int             yyn;

    yyn = (yyc % (YYHSIZE - 1)) + 1;
    for (;;)
    {
        if ((yywcrank[yyn].wch==yyc)&&(yywcrank[yyn].wverify==yyv))
            return(yyn);
        yyn = yywcrank[yyn].wnext;
        if (yyn==0)
            return(0);
    }
}
# endif /*YYHSIZE*/
# if YYHSIZE
/*
 * wide CCL chars are hashed in yywmatch, return the character to map to or
 * zero if there are none;  each char occurs only once in the match table.
 */
int
yymlook(int yyc)
{
# if YYMSIZE
int             yyn;

    yyn = (yyc % (YYMSIZE - 1)) + 1;

    while (yyn!=0)
    {
        if (yywmatch[yyn].wch == yyc)
            return(yywmatch[yyn].wmatch);
        yyn = yywmatch[yyn].wnext;
    }
# endif /*YYMSIZE*/

    return(0);
}
# endif /*YYHSIZE*/
# if YYXSIZE
/*
 * general CCLs are described in yyxccl; return the index of the first
 * acceptable CCL that matches verification, -1 if none found.
 */
int
yyxlook (int yyc, int yyv)
{
register int yyi;

    if (!yyc)                                     /* c==0 => EOF */
        return (-1);

    for (yyi = 0; (yyi < YYXSIZE) && (yyxccl[yyi].verify < yyv); yyi++)
        ; /*Empty*/

    for ( ; (yyi < YYXSIZE) && (yyxccl[yyi].verify == yyv); yyi++)
    {
        switch (yyxccl[yyi].type)
        {
        case YYCCLDOT:  return((yyc=='\n')?-1:yyi);
        }
    }
    return (-1);
}
#endif
/*
 * The following are the multi-byte renditions of input, unput, and
 * output.  They are referenced through the winput, wunput, and woutput macros
 * resepectively.
 *
 * A (-1) is returned if the character input is invalid.
 */
#ifdef __cplusplus
#include <mbstr.h>
#endif /*  __cplusplus */
int yywinput()
{
    yytbi=0;
    do
    {
        yytbuf[yytbi++]=input();
        yytbuf[yytbi]=0;
    } while(mbsinvalid((const char *) yytbuf)&&(yytbi<yymbcurmax));

    if (mbtowc(&yytwc,(const char *)yytbuf,yymbcurmax)<0)
        return (-1);

    return ((int)yytwc);
}

void yywoutput(int yyc)
{
    for (yytbi=wctomb((char *) yytbuf,(wchar_t)yyc),yytbp=yytbuf;yytbi>0;yytbi--)
        output(*yytbp++);
}
void yywunput(int yyc)
{
    for(yytbi=wctomb((char *)yytbuf,(wchar_t)yyc)-1;yytbi>=0;yytbi--)
        unput(yytbuf[yytbi]);
}
/*
 * Convert yywtext to yytext prior to returning from yylook.  It is referenced
 * through the wreturn macro.
 */
int yywreturn(int yyr)
{
    yyleng=wcstombs((char *)yytext,yywtext,YYLMAX);
    if(yyleng<0)
    {
        yyleng=0;
        yytext[0]=0;
    }
    return(yyr);
}
/*
 * the following are only used in the lex library
 */
int yyinput()
{
    return(input());
}
void yyoutput(int yyc)
{
    output(yyc);
}
void yyunput(int yyc)
{
    unput(yyc);
}
int yymbinput()
{
    return(winput());
}
void yymboutput(int yyc)
{
    woutput(yyc);
}
void yymbunput(int yyc)
{
    wunput(yyc);
}
int yymbreturn(int yyx)
{
    wreturn (yyx);
}
