
typedef union  {
	tree utree;
	list ulist;
	pair upair;
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
	expidt uexpid;
	stmt ustmt;
	kind ukind;
} YYSTYPE;
extern YYSTYPE yylval;
# define CASE 257
# define CLASS 258
# define DATA 259
# define DEFAULT 260
# define DERIVING 261
# define ELSE 262
# define HIDING 263
# define IF 264
# define IMPORT 265
# define INFIX 266
# define INFIXL 267
# define INFIXR 268
# define INSTANCE 269
# define INTERFACE 270
# define MODULE 271
# define OF 272
# define RENAMING 273
# define THEN 274
# define TO 275
# define TYPE 276
# define WHERE 277
# define LET 278
# define IN 279
# define NEWTYPE 280
# define DO 281
# define QUALIFIED 282
# define AS_KWD 283
# define STAR 284
# define VIEW 285
# define OLD_WHERE 286
# define NONFIX 287
# define MNONFIX 288
# define LCURL 289
# define RCURL 290
# define SEMI 291
# define COMMA 292
# define LPAR 293
# define RPAR 294
# define AS 295
# define ANNOT 296
# define TILDE 297
# define WILD 298
# define DCOLON 299
# define ARROW 300
# define LBRA 301
# define RBRA 302
# define BAR 303
# define BACKSLASH 304
# define DOTDOT 305
# define DARROW 306
# define EQ 307
# define LARROW 308
# define MINUS 309
# define RATNUM 310
# define CHAR 311
# define INT 312
# define STRING 313
# define DIGIT 314
# define INTCONST 315
# define CNAME 316
# define NAME 317
# define QNAME 318
# define TYPEEXCL 319
# define NANNOT 320
# define ENDANNOT 321
# define A_LINE 322
# define A_INLINE 323
# define A_ARITY 324
# define A_STRICTNESS 325
# define A_STRICT 326
# define A_SHARED 327
# define A_UNSHARED 328
# define A_SPARK 329
# define A_ENTRY 330
# define A_FRAMESIZE 331
# define A_NOEVAL 332
# define A_OVERLOAD 333
# define A_FLAT 334
# define A_DERIVED 335
# define A_FROMMODULE 336
# define A_SPECIALIZE 337
# define A_EVALED 338
# define A_NOTCHK 339
# define ERREOF 340
# define LEOF 341
# define SYNTAX_ERROR 342
# define LOAD 343
# define MLOAD 344
# define OLOAD 345
# define SOURCE 346
# define WHATIS 347
# define HELP 348
# define THEEND 349
# define PREC_LAM 350
# define OPN0 351
# define OPL0 352
# define OPR0 353
# define OPN1 354
# define OPL1 355
# define OPR1 356
# define OPN2 357
# define OPL2 358
# define OPR2 359
# define OPN3 360
# define OPL3 361
# define OPR3 362
# define OPN4 363
# define OPL4 364
# define OPR4 365
# define OPN5 366
# define OPL5 367
# define OPR5 368
# define OPN6 369
# define OPL6 370
# define UMINUS 371
# define OPR6 372
# define OPN7 373
# define OPL7 374
# define OPR7 375
# define OPN8 376
# define OPL8 377
# define OPR8 378
# define OPN9 379
# define OPL9 380
# define OPR9 381
# define PREC_AP 382
# define P_ANNOT 383
# define PREC10 384
