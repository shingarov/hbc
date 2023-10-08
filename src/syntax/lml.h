
typedef union  {
	tree utree;
	list ulist;
	ttype uttype;
	atype uatype;
	binding ubinding;
	pbinding upbinding;
	finfot ufinfo;
	impidt uimpid;
	id uid;
	long uuint;
	char *ustring;
	qual uqual;
	double ufloat;
	impstuff uimpstuff;
	char uterm;			/* for conctypes */
	sym usym;			/* for conctypes */
	brack ubrack;			/* for conctypes */
        assoc uassoc;                   /* for conctypes */
	pair upair;
} YYSTYPE;
extern YYSTYPE yylval;
# define NANNOT 257
# define ENDANNOT 258
# define A_LINE 259
# define A_INLINE 260
# define A_ARITY 261
# define A_STRICTNESS 262
# define A_STRICT 263
# define A_SHARED 264
# define A_UNSHARED 265
# define A_SPARK 266
# define A_ENTRY 267
# define A_FRAMESIZE 268
# define A_NOEVAL 269
# define A_OVERLOAD 270
# define A_FLAT 271
# define A_DERIVED 272
# define A_FROMMODULE 273
# define A_SPECIALIZE 274
# define A_EVALED 275
# define A_VECTORDEF 276
# define A_VECREG2 277
# define A_LIMITOK 278
# define A_METCALL 279
# define A_NOTCHK 280
# define A_EXPAND 281
# define ID 282
# define NONFIX 283
# define INTCONST 284
# define CHAR 285
# define STRING 286
# define FLOATCONST 287
# define INTEGERCONST 288
# define LAMBDA 289
# define DOT 290
# define LET 291
# define LETREC 292
# define IN 293
# define WHERE 294
# define WHEREREC 295
# define LPAR 296
# define RPAR 297
# define LBRACK 298
# define RBRACK 299
# define GUARD 300
# define REC 301
# define TYPE 302
# define EQ 303
# define NE 304
# define LT 305
# define GT 306
# define LE 307
# define GE 308
# define IF 309
# define THEN 310
# define ELSE 311
# define COMMA 312
# define AND 313
# define PLUS 314
# define MINUS 315
# define TIMES 316
# define DIV 317
# define MOD 318
# define NOT 319
# define ANDOP 320
# define OROP 321
# define COLON 322
# define CONC 323
# define INDEX 324
# define FPLUS 325
# define FMINUS 326
# define FTIMES 327
# define FDIV 328
# define IPLUS 329
# define IMINUS 330
# define ITIMES 331
# define IDIV 332
# define IMOD 333
# define LINDEX 334
# define RAISE 335
# define SEMI 336
# define FCOMP 337
# define EXCL 338
# define MODULE 339
# define END 340
# define IMPORT 341
# define EXPORT 342
# define TFUN 343
# define TPAIR 344
# define CASE 345
# define WILD 346
# define AS 347
# define LOCAL 348
# define ASSIGN 349
# define LBRACE 350
# define RBRACE 351
# define DCOLON 352
# define SUCH 353
# define LARROW 354
# define DOTDOT 355
# define ANNOT 356
# define MINFIX 357
# define MINFIXR 358
# define MPREFIX 359
# define MNONFIX 360
# define MPOSTFIX 361
# define SYNTAX_ERROR 362
# define CONCTYPE 363
# define LQUOTE 364
# define RQUOTE 365
# define TERMINAL 366
# define INTTERMINAL 367
# define IDTERMINAL 368
# define SYMTERMINAL 369
# define ANTIQUOTE 370
# define ANTIQVAR 371
# define LFORGET 372
# define RFORGET 373
# define LNONTERM 374
# define RNONTERM 375
# define STARTCURLY 376
# define DOTS 377
# define ENDCURLYPLUS 378
# define ENDCURLYMULT 379
# define LEFTASSOC 380
# define RIGHTASSOC 381
# define NONASSOC 382
# define LOAD 383
# define MLOAD 384
# define OLOAD 385
# define LEOF 386
# define SOURCE 387
# define WHATIS 388
# define HELP 389
# define SHOW_ 390
# define THEEND 391
# define LOW 392
# define UMINUS 393
# define INFIXL 394
# define INFIXR 395
# define PREFIX 396
# define POSTFIX 397
# define NIL 398
# define PREC_AP 399
# define P_ANNOT 400
