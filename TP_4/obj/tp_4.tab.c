
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../src/tp_4.y"

  #include <stdio.h>
  #include <math.h>  
  #include <string.h>
  int yylex();
  int yyerror (char *s);
  int yywrap(){
    return (1);
  }

  int nroLinea = 1;


/* Line 189 of yacc.c  */
#line 87 "tp_4.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICADOR = 258,
     LITERAL_CADENA = 259,
     CONSTANTE_DECIMAL = 260,
     CONSTANTE_OCTAL = 261,
     CONSTANTE_HEXA = 262,
     CONSTANTE_REAL = 263,
     TIPO_DE_DATO = 264,
     OP_ASIGANCION = 265,
     OP_IGUALDAD = 266,
     OP_OR = 267,
     OP_AND = 268,
     OP_RELACIONAL = 269,
     SIZEOF = 270,
     OP_INCREMENTO_DECREMENTO = 271,
     OP_CORRIMIENTO = 272,
     OP_ACCESO = 273,
     ESPEC_DE_CLASE = 274,
     CALIFICADOR_DE_TIPO = 275,
     STRUCT_O_UNION = 276,
     ESPECIFICADOR_ENUM = 277,
     IF = 278,
     SWITCH = 279,
     ELSE = 280,
     WHILE = 281,
     DO = 282,
     FOR = 283,
     CASE = 284,
     DEFAULT = 285,
     CONTINUE = 286,
     BREAK = 287,
     RETURN = 288,
     GOTO = 289,
     ERROR = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 14 "../src/tp_4.y"

  long int entero;
  char* cadena;
  double real;



/* Line 214 of yacc.c  */
#line 166 "tp_4.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "tp_4.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNRULES -- Number of states.  */
#define YYNSTATES  300

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      36,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,    47,    50,     2,
      48,    49,    45,    43,    37,    44,    55,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    58,
      41,    40,    42,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,    52,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    20,
      24,    26,    30,    32,    38,    40,    42,    44,    48,    50,
      54,    56,    60,    62,    66,    70,    74,    76,    80,    82,
      86,    90,    92,    96,   100,   104,   106,   111,   113,   116,
     119,   122,   127,   129,   131,   133,   135,   137,   139,   141,
     146,   151,   155,   158,   161,   163,   164,   166,   170,   172,
     174,   176,   178,   180,   182,   186,   189,   191,   192,   195,
     198,   201,   203,   204,   206,   210,   212,   216,   218,   222,
     227,   229,   233,   235,   237,   239,   241,   243,   245,   251,
     254,   256,   257,   259,   261,   264,   267,   270,   273,   275,
     276,   278,   282,   284,   287,   291,   293,   296,   299,   303,
     305,   306,   308,   311,   313,   317,   322,   327,   332,   334,
     335,   337,   338,   340,   346,   348,   352,   355,   358,   360,
     361,   363,   367,   373,   376,   378,   382,   384,   388,   390,
     392,   395,   397,   398,   400,   402,   405,   409,   414,   419,
     421,   422,   424,   425,   427,   428,   430,   432,   434,   436,
     438,   440,   442,   445,   450,   452,   453,   455,   456,   458,
     461,   463,   466,   472,   480,   486,   492,   500,   510,   512,
     513,   518,   522,   526,   529,   532,   536,   540
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      60,     0,    -1,    -1,    60,    61,    -1,    36,    -1,    80,
      36,    -1,    62,    36,    -1,   122,    36,    -1,    63,    -1,
      62,    37,    63,    -1,    64,    -1,    74,    65,    63,    -1,
      66,    -1,    66,    38,    62,    39,    64,    -1,    10,    -1,
      40,    -1,    67,    -1,    66,    12,    67,    -1,    68,    -1,
      67,    13,    68,    -1,    69,    -1,    68,    11,    69,    -1,
      70,    -1,    69,    14,    70,    -1,    69,    41,    70,    -1,
      69,    42,    70,    -1,    71,    -1,    70,    17,    71,    -1,
      72,    -1,    71,    43,    72,    -1,    71,    44,    72,    -1,
      73,    -1,    72,    45,    73,    -1,    72,    46,    73,    -1,
      72,    47,    73,    -1,    74,    -1,    48,   117,    49,    73,
      -1,    76,    -1,    16,    74,    -1,    75,    73,    -1,    15,
      74,    -1,    15,    48,   117,    49,    -1,    50,    -1,    45,
      -1,    44,    -1,    51,    -1,    43,    -1,    52,    -1,    79,
      -1,    76,    53,    62,    54,    -1,    76,    48,    77,    49,
      -1,    76,    55,     3,    -1,    76,    16,    -1,    76,    18,
      -1,    78,    -1,    -1,    63,    -1,    78,    37,    63,    -1,
       3,    -1,     5,    -1,     7,    -1,     6,    -1,     8,    -1,
       4,    -1,    48,    62,    49,    -1,    82,    81,    -1,    84,
      -1,    -1,    88,    83,    -1,    89,    83,    -1,    90,    83,
      -1,    82,    -1,    -1,    85,    -1,    84,    37,    85,    -1,
     100,    -1,   100,    40,    86,    -1,    63,    -1,    56,    87,
      57,    -1,    56,    87,    37,    57,    -1,    86,    -1,    87,
      37,    86,    -1,    19,    -1,     9,    -1,    91,    -1,   112,
      -1,   116,    -1,    20,    -1,    93,    92,    56,    94,    57,
      -1,    93,     3,    -1,     3,    -1,    -1,    21,    -1,    95,
      -1,    94,    95,    -1,    96,    98,    -1,    89,    97,    -1,
      90,    97,    -1,    96,    -1,    -1,    99,    -1,    98,    37,
      99,    -1,   100,    -1,    39,   134,    -1,   100,    39,   134,
      -1,   104,    -1,   101,   104,    -1,    45,   102,    -1,    45,
     102,   101,    -1,   103,    -1,    -1,    90,    -1,   103,    90,
      -1,     3,    -1,    48,   100,    49,    -1,   104,    53,   105,
      54,    -1,   104,    48,   107,    49,    -1,   104,    48,   106,
      49,    -1,   134,    -1,    -1,   111,    -1,    -1,   108,    -1,
     108,    37,    55,    55,    55,    -1,   109,    -1,   108,    37,
     109,    -1,    82,   100,    -1,    82,   110,    -1,   118,    -1,
      -1,     3,    -1,   111,    37,     3,    -1,    22,    92,    56,
     113,    57,    -1,    22,     3,    -1,   114,    -1,   113,    37,
     114,    -1,   115,    -1,   115,    40,   134,    -1,     3,    -1,
       3,    -1,    96,   110,    -1,   118,    -1,    -1,   101,    -1,
     119,    -1,   101,   119,    -1,    48,   118,    49,    -1,   120,
      53,   105,    54,    -1,   120,    48,   121,    49,    -1,   119,
      -1,    -1,   134,    -1,    -1,   107,    -1,    -1,   123,    -1,
     124,    -1,   129,    -1,   130,    -1,   132,    -1,   133,    -1,
      58,    -1,    62,    58,    -1,    56,   125,   126,    57,    -1,
     127,    -1,    -1,   128,    -1,    -1,    80,    -1,   127,    80,
      -1,   122,    -1,   128,   122,    -1,    23,    48,    62,    49,
     122,    -1,    23,    48,    62,    49,   122,    25,   122,    -1,
      24,    48,    62,    49,   122,    -1,    26,    48,    62,    49,
     122,    -1,    27,   122,    26,    48,    62,    49,    58,    -1,
      28,    48,   131,    58,   131,    58,   131,    49,   122,    -1,
      62,    -1,    -1,    29,   134,    39,   122,    -1,    30,    39,
     122,    -1,     3,    39,   122,    -1,    31,    58,    -1,    32,
      58,    -1,    33,   131,    58,    -1,    34,     3,    58,    -1,
      64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    62,    63,    64,    65,    68,    69,
      71,    72,    74,    75,    77,    78,    80,    81,    83,    84,
      86,    87,    89,    90,    91,    92,    94,    95,    97,    98,
      99,   101,   102,   103,   104,   106,   107,   109,   110,   111,
     112,   113,   115,   116,   117,   118,   119,   120,   122,   123,
     124,   125,   126,   127,   129,   130,   132,   133,   135,   136,
     137,   138,   139,   140,   141,   144,   146,   147,   149,   150,
     151,   153,   154,   156,   157,   159,   160,   162,   163,   164,
     166,   167,   169,   171,   172,   173,   174,   176,   178,   179,
     181,   182,   184,   186,   187,   189,   191,   192,   194,   195,
     197,   198,   200,   201,   202,   204,   205,   207,   208,   210,
     211,   213,   214,   216,   217,   218,   219,   220,   222,   223,
     225,   226,   228,   229,   231,   232,   234,   235,   237,   238,
     240,   241,   243,   244,   246,   247,   249,   250,   252,   254,
     256,   258,   259,   261,   262,   263,   265,   266,   267,   269,
     270,   272,   273,   275,   276,   279,   280,   281,   282,   283,
     284,   286,   287,   289,   291,   292,   294,   295,   297,   298,
     300,   301,   303,   304,   305,   307,   308,   309,   311,   312,
     314,   315,   316,   318,   319,   320,   321,   324
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "LITERAL_CADENA",
  "CONSTANTE_DECIMAL", "CONSTANTE_OCTAL", "CONSTANTE_HEXA",
  "CONSTANTE_REAL", "TIPO_DE_DATO", "OP_ASIGANCION", "OP_IGUALDAD",
  "OP_OR", "OP_AND", "OP_RELACIONAL", "SIZEOF", "OP_INCREMENTO_DECREMENTO",
  "OP_CORRIMIENTO", "OP_ACCESO", "ESPEC_DE_CLASE", "CALIFICADOR_DE_TIPO",
  "STRUCT_O_UNION", "ESPECIFICADOR_ENUM", "IF", "SWITCH", "ELSE", "WHILE",
  "DO", "FOR", "CASE", "DEFAULT", "CONTINUE", "BREAK", "RETURN", "GOTO",
  "ERROR", "'\\n'", "','", "'?'", "':'", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'('", "')'", "'&'", "'!'", "'~'", "'['", "']'",
  "'.'", "'{'", "'}'", "';'", "$accept", "input", "line", "expresion",
  "expAsignacion", "expCondicional", "operAsigancion", "expOr", "expAnd",
  "expIgualdad", "expRelacional", "expCorrimiento", "expAditiva",
  "expMultiplicativa", "expDeConversion", "expUnaria", "operUnario",
  "expPostfijo", "listaArgumentosOP", "listaArgumentos", "expPrimaria",
  "declaracion", "listaDeDeclaradoresOP", "especificadoresDeDeclaracion",
  "especificadoresDeDeclaracionOP", "listaDeDeclaradores", "declarador",
  "inicializador", "listaDeInicializadores",
  "especificadorDeClaseDeAlmacenamiento", "especificadorDeTipo",
  "calificadorDeTipo", "especificadorDeStructOUnion", "identificadorOP",
  "structOUnion", "listaDeDeclaracionesStruct", "declaracionStruct",
  "listaDeCalificadores", "listaDeCalificadoresOP", "declaradoresStruct",
  "declaStruct", "decla", "puntero", "listaDeCalificadoresTipoOP",
  "listaDeCalificadoresTipo", "declaradorDirecto", "expresionConstanteOP",
  "listaDeIdentifiacadoresOP", "listaTiposParametros", "listaDeParametros",
  "declaracionDeParametro", "declaradorAbstractoOP",
  "listaDeIdentifiacadores", "especificadorDeEnum", "listaDeEnumeradores",
  "enumerador", "constanteDeEnumeracion", "nombreDeTypedef",
  "nombreDeTipo", "declaradorAbstracto", "declaradorAbstractoDirecto",
  "declaradorAbstractoDirectoOP", "listaTiposParametrosOP", "sentencia",
  "sentenciaExpresion", "sentenciaCompuesta", "listaDeDeclaracionesOP",
  "listaDeSentenciasOP", "listaDeDeclaraciones", "listaDeSentencias",
  "sentenciaDeSeleccion", "sentenciaDeIteracion", "expresionOP",
  "sentenciaEtiquetada", "sentenciaDeSalto", "expresionConstante", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    10,    44,    63,    58,
      61,    60,    62,    43,    45,    42,    47,    37,    40,    41,
      38,    33,   126,    91,    93,    46,   123,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    69,    69,    69,    70,    70,    71,    71,
      71,    72,    72,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      87,    87,    88,    89,    89,    89,    89,    90,    91,    91,
      92,    92,    93,    94,    94,    95,    96,    96,    97,    97,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   116,
     117,   110,   110,   118,   118,   118,   119,   119,   119,   120,
     120,   105,   105,   121,   121,   122,   122,   122,   122,   122,
     122,   123,   123,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   130,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   133,   133,   134
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     1,     3,
       1,     3,     1,     5,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     2,     2,     1,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     0,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     5,     2,
       1,     0,     1,     1,     2,     2,     2,     2,     1,     0,
       1,     3,     1,     2,     3,     1,     2,     2,     3,     1,
       0,     1,     2,     1,     3,     4,     4,     4,     1,     0,
       1,     0,     1,     5,     1,     3,     2,     2,     1,     0,
       1,     3,     5,     2,     1,     3,     1,     3,     1,     1,
       2,     1,     0,     1,     1,     2,     3,     4,     4,     1,
       0,     1,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     1,     0,     1,     0,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     9,     1,     0,
       4,     3,     3,     2,     2,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    58,    63,    59,    61,    60,    62,    83,
       0,     0,    82,    87,    92,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,     4,    46,    44,
      43,     0,    42,    45,    47,   165,   161,     3,     0,     8,
      10,    12,    16,    18,    20,    22,    26,    28,    31,    35,
       0,    37,    48,     0,    67,    72,    72,    72,    84,    91,
      85,    86,     0,   155,   156,   157,   158,   159,   160,     0,
      58,     0,    40,     0,    38,   133,     0,     0,     0,     0,
      58,     0,     0,   179,   187,    35,     0,     0,   183,   184,
     178,     0,     0,    58,     0,    99,    99,   129,     0,   139,
     168,   167,   164,     6,     0,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,    39,    52,    53,    55,     0,     0,     5,   113,
     110,     0,    65,    66,    73,    75,     0,   105,    71,    68,
      69,    70,    89,     0,     7,   182,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   185,   186,    64,    98,    96,
      97,   150,   143,   140,   128,   144,     0,     0,   170,     0,
     166,   169,     9,    17,     0,    19,    21,    23,    24,    25,
      27,    29,    30,    32,    33,    34,    11,    56,     0,    54,
       0,    51,   111,   107,   109,     0,     0,     0,   106,   121,
     119,     0,    41,   138,     0,   134,   136,     0,     0,     0,
       0,   179,   180,     0,   145,   154,   119,    36,   163,   171,
       0,    50,     0,    49,   108,   112,   114,    74,     0,    77,
      76,   139,   129,     0,     0,   122,   124,   120,     0,   118,
       0,    93,     0,     0,   132,     0,   172,   174,   175,     0,
       0,   146,   153,     0,     0,    13,    57,    80,     0,   150,
     126,   143,   127,   117,   116,     0,     0,   115,    88,    94,
       0,    95,   100,   102,   135,   137,     0,     0,   179,   148,
     147,     0,    78,     0,   125,   131,   103,     0,     0,   173,
     176,     0,    79,    81,     0,   101,   104,     0,   123,   177
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    37,    81,    39,    40,   121,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   188,   189,
      52,    53,   132,    54,   139,   133,   134,   230,   258,    55,
      56,    57,    58,    76,    59,   240,   241,    97,   159,   271,
     272,   135,   136,   193,   194,   137,   238,   233,   234,   235,
     236,   163,   237,    60,   204,   205,   206,    61,    98,   164,
     165,   166,   253,    62,    63,    64,   101,   169,   102,   170,
      65,    66,    91,    67,    68,   239
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -215
static const yytype_int16 yypact[] =
{
    -215,   281,  -215,   143,  -215,  -215,  -215,  -215,  -215,  -215,
     482,   513,  -215,  -215,  -215,    38,    11,    21,    47,   337,
      70,   532,    94,    -8,    89,   532,   141,  -215,  -215,  -215,
    -215,   462,  -215,  -215,  -215,   199,  -215,  -215,    90,  -215,
    -215,    19,   156,   140,    14,   137,   131,   210,  -215,    12,
     532,   125,  -215,   149,    84,   199,   199,   199,  -215,   168,
    -215,  -215,   151,  -215,  -215,  -215,  -215,  -215,  -215,   337,
    -215,   462,  -215,   532,  -215,   133,   155,   532,   532,   532,
     157,    57,   165,   532,  -215,  -215,   160,   337,  -215,  -215,
     166,   119,   159,   225,    -5,   228,   228,   191,   158,  -215,
    -215,   337,   199,  -215,   532,  -215,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,  -215,
    -215,   532,  -215,  -215,  -215,   532,   532,   212,  -215,  -215,
     203,    84,  -215,   188,  -215,   192,    26,   -14,  -215,  -215,
    -215,  -215,  -215,   209,  -215,  -215,   217,   264,    87,   112,
     121,   220,   213,   337,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,    74,   147,  -215,  -215,   161,   185,   532,  -215,   148,
     337,  -215,  -215,   156,    -2,   140,    14,   137,   137,   137,
     131,   210,   210,  -215,  -215,  -215,  -215,  -215,   224,   233,
       6,  -215,  -215,   229,   203,   226,    84,   408,   -14,   221,
     532,   228,  -215,  -215,     9,  -215,   236,   337,   337,   337,
     532,   532,  -215,   230,   161,   199,   532,  -215,  -215,  -215,
     532,  -215,   532,  -215,  -215,  -215,  -215,  -215,   408,  -215,
    -215,   130,    23,   234,   242,   240,  -215,   255,   239,  -215,
      27,  -215,    86,   264,  -215,   532,   269,  -215,  -215,   135,
     237,  -215,  -215,   249,   245,  -215,  -215,  -215,    73,   108,
    -215,    17,  -215,  -215,  -215,    42,   303,  -215,  -215,  -215,
     532,   279,  -215,   280,  -215,  -215,   337,   260,   532,  -215,
    -215,   393,  -215,   265,  -215,  -215,  -215,    86,   532,  -215,
    -215,   272,  -215,  -215,   267,  -215,  -215,   337,  -215,  -215
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,     2,   -83,   -19,  -215,  -215,   222,   215,
     218,   152,   223,   138,   -25,   -10,  -215,  -215,  -215,  -215,
    -215,   -12,  -215,   -49,   202,  -215,   134,  -214,  -215,  -215,
     -13,   -18,  -215,   275,  -215,  -215,    95,   -80,   250,  -215,
      51,  -119,   -73,  -215,  -215,  -126,   132,  -215,   136,  -215,
      82,   117,  -215,  -215,  -215,   107,  -215,  -215,   283,  -142,
    -145,  -215,  -215,   -15,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,   -74,  -215,  -215,   -16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -151
static const yytype_int16 yytable[] =
{
      72,    74,    84,    38,    82,    86,   138,   138,   138,   152,
     198,    85,   195,    96,   257,   158,   158,   214,    95,   213,
     129,   172,   119,   100,   162,   122,   129,    90,   110,   129,
      99,   106,   104,    94,   199,   104,     9,   220,   186,   200,
      85,    75,   187,   104,   157,    99,   243,    13,    14,    15,
      88,     9,   120,    96,   145,   111,   112,   107,    95,    77,
     223,    12,    13,    14,    15,   259,   244,   293,   130,    78,
    -150,   259,   154,    94,   131,    94,  -150,    96,    96,   148,
     149,   150,    95,    95,   268,    90,   168,   129,   162,   129,
     171,   183,   184,   185,   104,    79,    85,   283,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,   174,
     281,   129,   192,   260,   229,   105,   214,   213,    83,   130,
     224,   242,   161,   273,   104,   270,   103,   104,   190,   130,
     282,   130,   131,    87,   131,   198,   207,   250,   212,   256,
     195,   123,   217,   124,    92,   229,  -139,    89,   105,   104,
     232,   109,  -139,   130,   113,   219,   259,    85,   104,   261,
     242,   208,  -139,  -139,  -139,  -139,   232,  -130,   273,   108,
     209,   142,   104,   125,   114,   115,   225,   155,   126,  -130,
     127,    84,    69,    96,   277,   128,   261,   144,    95,   -90,
      85,   151,   246,   247,   248,   161,    69,    84,   229,   153,
    -150,   255,    99,   104,   291,   218,    85,   167,     9,  -149,
      85,   147,   249,    90,  -149,   191,   232,   156,    12,    13,
      14,    15,    96,    13,   231,   196,    84,    95,  -139,   275,
       9,    99,   197,   215,  -139,    85,   130,     9,   216,   161,
      12,    13,    14,    15,  -150,  -139,  -139,  -139,    13,    14,
      15,    84,   181,   182,   286,   116,   117,   118,   140,   141,
      85,   289,   177,   178,   179,   201,   202,   203,   210,    84,
     222,   211,   296,   221,   130,   226,   245,   265,    85,   251,
      90,     2,   299,   263,     3,     4,     5,     6,     7,     8,
       9,   264,   266,   267,   276,   278,    10,    11,   279,   280,
      12,    13,    14,    15,    16,    17,   285,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   287,    27,   290,   288,
     294,   297,   298,   175,    28,    29,    30,   176,   173,    31,
     227,    32,    33,    34,   143,   269,   180,    35,   295,    36,
      80,     4,     5,     6,     7,     8,   160,   284,   254,   262,
     274,   252,    10,    11,   146,     0,     0,     0,     0,     0,
      16,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,    31,     0,    32,    33,    34,
       0,     0,     0,    35,     0,    36,    70,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,    10,    11,
       0,    70,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,    31,     0,    32,    33,    34,     0,     0,     0,   228,
     292,    28,    29,    30,     0,     0,    31,     0,    32,    33,
      34,     0,     0,     0,   228,    93,     4,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,    13,    14,    15,    70,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
      31,     0,    32,    33,    34,     0,    70,     4,     5,     6,
       7,     8,     0,     0,     0,    28,    29,    30,    10,    11,
      71,     0,    32,    33,    34,    70,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,    73,     0,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
      31,     0,    32,    33,    34
};

static const yytype_int16 yycheck[] =
{
      10,    11,    21,     1,    19,    21,    55,    56,    57,    83,
     136,    21,   131,    31,   228,    95,    96,   162,    31,   161,
       3,   104,    10,    35,    97,    50,     3,    25,    14,     3,
       3,    12,    37,    31,    48,    37,     9,    39,   121,    53,
      50,     3,   125,    37,    49,     3,    37,    20,    21,    22,
      58,     9,    40,    71,    69,    41,    42,    38,    71,    48,
      54,    19,    20,    21,    22,    48,    57,   281,    45,    48,
      53,    48,    87,    71,    48,    73,    53,    95,    96,    77,
      78,    79,    95,    96,    57,    83,   101,     3,   161,     3,
     102,   116,   117,   118,    37,    48,   106,    55,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   107,
      37,     3,   130,   232,   197,    58,   261,   259,    48,    45,
     193,   201,    48,   242,    37,    39,    36,    37,   126,    45,
      57,    45,    48,    39,    48,   261,    49,   211,   153,   222,
     259,    16,   167,    18,     3,   228,     3,    58,    58,    37,
     199,    11,     9,    45,    17,   170,    48,   167,    37,   232,
     240,    49,    19,    20,    21,    22,   215,    37,   287,    13,
      49,     3,    37,    48,    43,    44,   194,    58,    53,    49,
      55,   200,    39,   201,    49,    36,   259,    36,   201,    56,
     200,    26,   207,   208,   209,    48,    39,   216,   281,    39,
      53,   220,     3,    37,   278,    57,   216,    49,     9,    48,
     220,    56,   210,   211,    53,     3,   265,    58,    19,    20,
      21,    22,   240,    20,     3,    37,   245,   240,     3,   245,
       9,     3,    40,    48,     9,   245,    45,     9,    53,    48,
      19,    20,    21,    22,    53,    20,    21,    22,    20,    21,
      22,   270,   114,   115,   270,    45,    46,    47,    56,    57,
     270,   276,   110,   111,   112,    56,    49,     3,    48,   288,
      37,    58,   288,    49,    45,    49,    40,    37,   288,    49,
     278,     0,   297,    49,     3,     4,     5,     6,     7,     8,
       9,    49,    37,    54,    25,    58,    15,    16,    49,    54,
      19,    20,    21,    22,    23,    24,     3,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    37,    36,    58,    39,
      55,    49,    55,   108,    43,    44,    45,   109,   106,    48,
     196,    50,    51,    52,    59,   240,   113,    56,   287,    58,
       3,     4,     5,     6,     7,     8,    96,   265,   216,   232,
     243,   215,    15,    16,    71,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    43,    44,    45,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    56,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    21,    22,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    43,    44,    45,    15,    16,
      48,    -1,    50,    51,    52,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,     0,     3,     4,     5,     6,     7,     8,     9,
      15,    16,    19,    20,    21,    22,    23,    24,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    36,    43,    44,
      45,    48,    50,    51,    52,    56,    58,    61,    62,    63,
      64,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    79,    80,    82,    88,    89,    90,    91,    93,
     112,   116,   122,   123,   124,   129,   130,   132,   133,    39,
       3,    48,    74,    48,    74,     3,    92,    48,    48,    48,
       3,    62,   122,    48,    64,    74,   134,    39,    58,    58,
      62,   131,     3,     3,    62,    89,    90,    96,   117,     3,
      80,   125,   127,    36,    37,    58,    12,    38,    13,    11,
      14,    41,    42,    17,    43,    44,    45,    46,    47,    10,
      40,    65,    73,    16,    18,    48,    53,    55,    36,     3,
      45,    48,    81,    84,    85,   100,   101,   104,    82,    83,
      83,    83,     3,    92,    36,   122,   117,    56,    62,    62,
      62,    26,   131,    39,   122,    58,    58,    49,    96,    97,
      97,    48,   101,   110,   118,   119,   120,    49,   122,   126,
     128,    80,    63,    67,    62,    68,    69,    70,    70,    70,
      71,    72,    72,    73,    73,    73,    63,    63,    77,    78,
      62,     3,    90,   102,   103,   100,    37,    40,   104,    48,
      53,    56,    49,     3,   113,   114,   115,    49,    49,    49,
      48,    58,   122,   118,   119,    48,    53,    73,    57,   122,
      39,    49,    37,    54,   101,    90,    49,    85,    56,    63,
      86,     3,    82,   106,   107,   108,   109,   111,   105,   134,
      94,    95,    96,    37,    57,    40,   122,   122,   122,    62,
     131,    49,   107,   121,   105,    64,    63,    86,    87,    48,
     100,   101,   110,    49,    49,    37,    37,    54,    57,    95,
      39,    98,    99,   100,   114,   134,    25,    49,    58,    49,
      54,    37,    57,    55,   109,     3,   134,    37,    39,   122,
      58,   131,    57,    86,    55,    99,   134,    49,    55,   122
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 62 "../src/tp_4.y"
    {nroLinea++;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 63 "../src/tp_4.y"
    {printf("Se encontro una declaracion en linea %d\n",nroLinea);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 64 "../src/tp_4.y"
    { printf("Se encontro una expresionen linea %d\n",nroLinea);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 65 "../src/tp_4.y"
    { printf("Se encontro una sentenciaen linea %d\n",nroLinea);;}
    break;



/* Line 1455 of yacc.c  */
#line 1766 "tp_4.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 328 "../src/tp_4.y"


int yyerror (char *s)  
{
  printf ("%s\n", s);
}


int main (int argc, char const* argv[])
{
  #ifdef BISON_DEBUG
        yydebug = 1;
#endif
  yyparse();
}
