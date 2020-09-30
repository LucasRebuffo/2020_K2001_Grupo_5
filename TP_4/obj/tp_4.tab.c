
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
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNRULES -- Number of states.  */
#define YYNSTATES  295

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
       0,     0,     3,     4,     7,     9,    12,    14,    18,    20,
      24,    26,    32,    34,    36,    38,    42,    44,    48,    50,
      54,    56,    60,    64,    68,    70,    74,    76,    80,    84,
      86,    90,    94,    98,   100,   105,   107,   110,   113,   116,
     121,   123,   125,   127,   129,   131,   133,   135,   140,   145,
     149,   152,   155,   156,   158,   160,   164,   166,   168,   170,
     172,   174,   176,   180,   183,   184,   186,   189,   192,   195,
     196,   198,   200,   204,   206,   210,   212,   216,   221,   223,
     227,   229,   231,   233,   235,   237,   239,   245,   248,   250,
     251,   253,   255,   258,   261,   264,   267,   268,   270,   272,
     276,   278,   281,   285,   287,   290,   293,   297,   298,   300,
     302,   305,   307,   311,   316,   321,   326,   327,   329,   330,
     332,   334,   340,   342,   346,   349,   352,   353,   355,   357,
     361,   367,   370,   372,   376,   378,   382,   384,   386,   389,
     390,   392,   394,   396,   399,   403,   408,   413,   414,   416,
     417,   419,   420,   422,   424,   426,   428,   430,   432,   434,
     436,   439,   444,   445,   447,   448,   450,   452,   455,   457,
     460,   466,   474,   480,   486,   494,   504,   505,   507,   512,
     516,   520,   523,   526,   530,   534
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      60,     0,    -1,    -1,    60,    61,    -1,    36,    -1,   122,
      36,    -1,    63,    -1,    62,    37,    63,    -1,    64,    -1,
      74,    65,    63,    -1,    66,    -1,    66,    38,    62,    39,
      64,    -1,    10,    -1,    40,    -1,    67,    -1,    66,    12,
      67,    -1,    68,    -1,    67,    13,    68,    -1,    69,    -1,
      68,    11,    69,    -1,    70,    -1,    69,    14,    70,    -1,
      69,    41,    70,    -1,    69,    42,    70,    -1,    71,    -1,
      70,    17,    71,    -1,    72,    -1,    71,    43,    72,    -1,
      71,    44,    72,    -1,    73,    -1,    72,    45,    73,    -1,
      72,    46,    73,    -1,    72,    47,    73,    -1,    74,    -1,
      48,   117,    49,    73,    -1,    76,    -1,    16,    74,    -1,
      75,    73,    -1,    15,    74,    -1,    15,    48,   117,    49,
      -1,    50,    -1,    45,    -1,    44,    -1,    51,    -1,    43,
      -1,    52,    -1,    79,    -1,    76,    53,    62,    54,    -1,
      76,    48,    77,    49,    -1,    76,    55,     3,    -1,    76,
      16,    -1,    76,    18,    -1,    -1,    78,    -1,    63,    -1,
      78,    37,    63,    -1,     3,    -1,     5,    -1,     7,    -1,
       6,    -1,     8,    -1,     4,    -1,    48,    62,    49,    -1,
      82,    81,    -1,    -1,    84,    -1,    88,    83,    -1,    89,
      83,    -1,    90,    83,    -1,    -1,    82,    -1,    85,    -1,
      84,    37,    85,    -1,   100,    -1,   100,    40,    86,    -1,
      63,    -1,    56,    87,    57,    -1,    56,    87,    37,    57,
      -1,    86,    -1,    87,    37,    86,    -1,    19,    -1,     9,
      -1,    91,    -1,   112,    -1,   116,    -1,    20,    -1,    93,
      92,    56,    94,    57,    -1,    93,     3,    -1,     3,    -1,
      -1,    21,    -1,    95,    -1,    94,    95,    -1,    96,    98,
      -1,    89,    97,    -1,    90,    97,    -1,    -1,    96,    -1,
      99,    -1,    98,    37,    99,    -1,   100,    -1,    39,   134,
      -1,   100,    39,   134,    -1,   104,    -1,   101,   104,    -1,
      45,   102,    -1,    45,   102,   101,    -1,    -1,   103,    -1,
      90,    -1,   103,    90,    -1,     3,    -1,    48,   100,    49,
      -1,   104,    53,   105,    54,    -1,   104,    48,   107,    49,
      -1,   104,    48,   106,    49,    -1,    -1,   134,    -1,    -1,
     111,    -1,   108,    -1,   108,    37,    55,    55,    55,    -1,
     109,    -1,   108,    37,   109,    -1,    82,   100,    -1,    82,
     110,    -1,    -1,   118,    -1,     3,    -1,   111,    37,     3,
      -1,    22,    92,    56,   113,    57,    -1,    22,     3,    -1,
     114,    -1,   113,    37,   114,    -1,   115,    -1,   115,    40,
     134,    -1,     3,    -1,     3,    -1,    96,   110,    -1,    -1,
     118,    -1,   101,    -1,   119,    -1,   101,   119,    -1,    48,
     118,    49,    -1,   120,    53,   105,    54,    -1,   120,    48,
     121,    49,    -1,    -1,   119,    -1,    -1,   134,    -1,    -1,
     107,    -1,   123,    -1,   124,    -1,   129,    -1,   130,    -1,
     132,    -1,   133,    -1,    58,    -1,    62,    58,    -1,    56,
     125,   126,    57,    -1,    -1,   127,    -1,    -1,   128,    -1,
      80,    -1,   127,    80,    -1,   122,    -1,   128,   122,    -1,
      23,    48,    62,    49,   122,    -1,    23,    48,    62,    49,
     122,    25,   122,    -1,    24,    48,    62,    49,   122,    -1,
      26,    48,    62,    49,   122,    -1,    27,   122,    26,    48,
      62,    49,    58,    -1,    28,    48,   131,    58,   131,    58,
     131,    49,   122,    -1,    -1,    62,    -1,    29,   134,    39,
     122,    -1,    30,    39,   122,    -1,     3,    39,   122,    -1,
      31,    58,    -1,    32,    58,    -1,    33,   131,    58,    -1,
      34,     3,    58,    -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    62,    63,    68,    69,    71,    72,
      74,    75,    77,    78,    80,    81,    83,    84,    86,    87,
      89,    90,    91,    92,    94,    95,    97,    98,    99,   101,
     102,   103,   104,   106,   107,   109,   110,   111,   112,   113,
     115,   116,   117,   118,   119,   120,   122,   123,   124,   125,
     126,   127,   129,   130,   132,   133,   135,   136,   137,   138,
     139,   140,   141,   146,   148,   149,   151,   152,   153,   155,
     156,   158,   159,   161,   162,   164,   165,   166,   168,   169,
     171,   173,   174,   175,   176,   178,   180,   181,   183,   184,
     186,   188,   189,   191,   193,   194,   196,   197,   199,   200,
     202,   203,   204,   206,   207,   209,   210,   212,   213,   215,
     216,   218,   219,   220,   221,   222,   224,   225,   227,   228,
     230,   231,   233,   234,   236,   237,   239,   240,   242,   243,
     245,   246,   248,   249,   251,   252,   254,   256,   258,   260,
     261,   263,   264,   265,   267,   268,   269,   271,   272,   274,
     275,   277,   278,   283,   284,   285,   286,   287,   288,   290,
     291,   293,   295,   296,   298,   299,   301,   302,   304,   305,
     307,   308,   309,   311,   312,   313,   315,   316,   318,   319,
     320,   322,   323,   324,   325,   328
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
  "expAsignacion", "expCondicional", "operAsignacion", "expOr", "expAnd",
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
       0,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    71,    71,    71,    72,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    80,    81,    81,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    87,    87,
      88,    89,    89,    89,    89,    90,    91,    91,    92,    92,
      93,    94,    94,    95,    96,    96,    97,    97,    98,    98,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   116,   117,   110,
     110,   118,   118,   118,   119,   119,   119,   120,   120,   105,
     105,   121,   121,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   129,   130,   130,   130,   131,   131,   132,   132,
     132,   133,   133,   133,   133,   134
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     3,     1,     3,
       1,     5,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     1,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       2,     2,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     1,     2,     2,     2,     0,
       1,     1,     3,     1,     3,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     5,     2,     1,     0,
       1,     1,     2,     2,     2,     2,     0,     1,     1,     3,
       1,     2,     3,     1,     2,     2,     3,     0,     1,     1,
       2,     1,     3,     4,     4,     4,     0,     1,     0,     1,
       1,     5,     1,     3,     2,     2,     0,     1,     1,     3,
       5,     2,     1,     3,     1,     3,     1,     1,     2,     0,
       1,     1,     1,     2,     3,     4,     4,     0,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     0,     1,     0,     1,     1,     2,     1,     2,
       5,     7,     5,     5,     7,     9,     0,     1,     4,     3,
       3,     2,     2,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    56,    61,    57,    59,    58,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     4,    44,    42,    41,     0,    40,    43,    45,
     162,   159,     3,     0,     6,     8,    10,    14,    16,    18,
      20,    24,    26,    29,    33,     0,    35,    46,     0,   153,
     154,   155,   156,   157,   158,     0,    56,     0,    38,     0,
      36,     0,     0,     0,     0,   176,   185,    33,     0,     0,
     181,   182,   177,     0,     0,    56,    81,    85,    90,    89,
       0,    96,    96,    82,    89,   126,    83,    84,     0,   137,
      80,   166,    64,    69,    69,    69,   164,   163,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,    37,    50,    51,    52,
       0,     0,     5,   180,     0,     0,     0,     0,     0,     0,
       0,   179,   183,   184,   131,     0,    62,    97,    94,    95,
      87,     0,   107,   147,   141,   138,   127,   142,     0,     0,
     111,     0,    63,    65,    71,    73,     0,   103,    70,    66,
      67,    68,   168,     0,   165,   167,     7,    15,     0,    17,
      19,    21,    22,    23,    25,    27,    28,    30,    31,    32,
       9,    54,     0,    53,     0,    49,    39,     0,     0,     0,
       0,   176,   178,     0,     0,   109,   105,   108,     0,   143,
     151,   116,    34,     0,     0,     0,   104,   118,   116,   161,
     169,     0,    48,     0,    47,   170,   172,   173,     0,     0,
     136,     0,   132,   134,     0,    91,     0,   106,   110,   144,
     126,   152,   120,   122,     0,     0,   117,   112,    72,     0,
      75,    74,   137,     0,     0,   119,     0,    11,    55,     0,
       0,   176,     0,   130,     0,    86,    92,     0,    93,    98,
     100,   147,   124,   141,   125,     0,   146,   145,    78,     0,
     115,   114,     0,   113,   171,   174,     0,   133,   135,   101,
       0,     0,     0,   123,     0,    76,   129,     0,    99,   102,
       0,    77,    79,   175,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    33,    34,    35,   115,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,   182,   183,
      47,    91,   152,   158,   159,   153,   154,   241,   269,    93,
      94,    95,    83,   135,    84,   224,   225,    85,   138,   258,
     259,   155,   156,   196,   197,   157,   235,   243,   231,   232,
     233,   145,   245,    86,   221,   222,   223,    87,    88,   146,
     147,   148,   234,    48,    49,    50,    96,   163,    97,   164,
      51,    52,    73,    53,    54,   236
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
    -142,   252,  -142,    -9,  -142,  -142,  -142,  -142,  -142,   453,
     484,    -1,    35,    46,   308,   108,   503,     0,    69,   104,
     503,   178,  -142,  -142,  -142,  -142,   433,  -142,  -142,  -142,
     148,  -142,  -142,    -4,  -142,  -142,    96,   177,   203,   103,
     194,   121,   -23,  -142,    11,   503,   106,  -142,   179,  -142,
    -142,  -142,  -142,  -142,  -142,   308,  -142,   433,  -142,   503,
    -142,   503,   503,   503,   191,   503,  -142,  -142,   180,   308,
    -142,  -142,   189,   172,   173,   200,  -142,  -142,  -142,   229,
      -6,   207,   207,  -142,   230,   118,  -142,  -142,   185,  -142,
    -142,  -142,    23,   148,   148,   148,   308,   148,   503,  -142,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,  -142,  -142,   503,  -142,  -142,  -142,   503,
     503,   233,  -142,  -142,   188,    84,    94,   111,   192,   187,
     308,  -142,  -142,  -142,   193,   195,  -142,  -142,  -142,  -142,
    -142,   197,   224,    -8,   -19,  -142,  -142,     5,    93,   503,
    -142,    23,  -142,   211,  -142,   214,    24,   165,  -142,  -142,
    -142,  -142,  -142,   204,   308,  -142,  -142,   177,   110,   203,
     103,   194,   194,   194,   121,   -23,   -23,  -142,  -142,  -142,
    -142,  -142,   213,   226,    86,  -142,  -142,   308,   308,   308,
     503,   503,  -142,   261,   207,  -142,   220,   224,   222,     5,
     148,   503,  -142,   223,    23,   379,   165,   186,   503,  -142,
    -142,   503,  -142,   503,  -142,   244,  -142,  -142,   142,   219,
    -142,    75,  -142,   247,    54,  -142,    17,  -142,  -142,  -142,
      61,  -142,   253,  -142,   240,   237,  -142,  -142,  -142,   379,
    -142,  -142,   143,   243,   245,   256,   251,  -142,  -142,   308,
     241,   503,   261,  -142,   503,  -142,  -142,   503,   264,  -142,
     259,    39,  -142,    33,  -142,    58,  -142,  -142,  -142,    78,
    -142,  -142,   303,  -142,  -142,  -142,   258,  -142,  -142,  -142,
      17,   503,   254,  -142,   364,  -142,  -142,   308,  -142,  -142,
     262,  -142,  -142,  -142,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   -13,   -87,   -15,  -142,  -142,   218,   217,
     225,   119,   215,    79,   -20,    -7,  -142,  -142,  -142,  -142,
    -142,   228,  -142,   -24,   105,  -142,   116,  -129,  -142,  -142,
     -22,   -12,  -142,   242,  -142,  -142,    97,   -66,   248,  -142,
      47,  -141,   -77,  -142,  -142,  -138,   125,  -142,   122,  -142,
      80,   113,  -142,  -142,  -142,    92,  -142,  -142,   289,  -124,
    -127,  -142,  -142,   -14,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,   -53,  -142,  -142,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -149
static const yytype_int16 yytable[] =
{
      64,    66,    58,    60,    81,    68,    92,    72,   144,    67,
     203,   166,   129,    80,    82,   137,   137,   199,   206,   198,
     150,   113,   110,   111,   112,   116,   150,   150,   180,   143,
      55,    98,   181,    98,  -147,    81,   150,   142,    67,    69,
     143,   123,   150,   136,    80,    82,    80,    61,   125,   126,
     127,   114,    72,  -148,    99,   131,   257,    89,  -148,    81,
      81,    89,   142,    76,   150,   151,   144,    76,   142,    82,
      82,   151,   151,    92,    77,    78,    79,    90,    77,    78,
      79,   261,   162,    62,   142,   260,  -147,   261,   168,   262,
     177,   178,   179,    67,    63,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,   142,   184,   100,   261,
     268,   255,   252,   282,  -147,   284,   192,   104,   240,   227,
     203,    98,   117,    98,   118,   206,   248,    70,   226,   202,
     195,    98,   253,   187,   101,   285,   199,   198,   219,   260,
     214,   200,    67,   188,   105,   106,   201,    98,    98,   211,
     210,    89,   240,   263,   119,   292,    65,    76,   226,   120,
     189,   121,    71,   142,   108,   109,   143,    90,    77,    78,
      79,  -147,    81,   215,   216,   217,   230,   218,    72,    98,
    -128,    74,    82,   230,   263,   228,    66,   175,   176,   242,
     102,   250,  -128,    66,    67,    76,   247,   240,   276,   160,
     161,    67,    81,  -137,    67,    90,    77,    78,    79,  -137,
      89,   107,    82,   207,   103,   122,    76,   128,   208,   130,
    -137,  -137,  -137,   171,   172,   173,    98,    77,    78,    79,
     132,   133,   134,   140,   149,   274,   185,   186,    72,    66,
     190,   230,    66,   278,    77,   191,   279,    67,   204,   -88,
      67,   193,     2,   194,   205,     3,     4,     5,     6,     7,
       8,   209,   212,   213,   220,   142,    66,     9,    10,   249,
     289,   229,   237,   293,    67,    11,    12,   251,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   254,    22,   266,
     265,   267,   270,   272,   271,    23,    24,    25,   281,   275,
      26,   280,    27,    28,    29,   273,   286,   287,    30,   290,
      31,     3,     4,     5,     6,     7,     8,   294,   167,   169,
     238,   256,   174,     9,    10,   165,   141,   288,   170,   244,
     139,    11,    12,   246,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   264,   277,   283,   124,     0,     0,     0,
       0,    23,    24,    25,     0,     0,    26,     0,    27,    28,
      29,     0,     0,     0,    30,     0,    31,    56,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     9,
      10,     0,    56,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
       0,     0,    26,     0,    27,    28,    29,     0,     0,     0,
     239,   291,    23,    24,    25,     0,     0,    26,     0,    27,
      28,    29,     0,     0,     0,   239,    75,     4,     5,     6,
       7,     8,    76,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     0,    77,    78,    79,    56,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,    23,    24,    25,     0,
       0,    26,     0,    27,    28,    29,     0,    56,     4,     5,
       6,     7,     8,     0,     0,     0,    23,    24,    25,     9,
      10,    57,     0,    27,    28,    29,    56,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
       0,     0,    59,     0,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,     0,
       0,    26,     0,    27,    28,    29
};

static const yytype_int16 yycheck[] =
{
      14,    16,     9,    10,    26,    16,    30,    20,    85,    16,
     151,    98,    65,    26,    26,    81,    82,   144,   156,   143,
       3,    10,    45,    46,    47,    45,     3,     3,   115,    48,
      39,    37,   119,    37,    53,    57,     3,    45,    45,    39,
      48,    55,     3,    49,    57,    57,    59,    48,    61,    62,
      63,    40,    65,    48,    58,    69,    39,     3,    53,    81,
      82,     3,    45,     9,     3,    48,   143,     9,    45,    81,
      82,    48,    48,    97,    20,    21,    22,    19,    20,    21,
      22,    48,    96,    48,    45,   226,    53,    48,   101,   230,
     110,   111,   112,   100,    48,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    45,   120,    12,    48,
     239,    57,    37,    55,    53,    37,   130,    14,   205,   196,
     261,    37,    16,    37,    18,   263,   213,    58,   194,   149,
     142,    37,    57,    49,    38,    57,   263,   261,   191,   280,
      54,    48,   149,    49,    41,    42,    53,    37,    37,    39,
     164,     3,   239,   230,    48,   284,    48,     9,   224,    53,
      49,    55,    58,    45,    43,    44,    48,    19,    20,    21,
      22,    53,   194,   187,   188,   189,   200,   190,   191,    37,
      37,     3,   194,   207,   261,   197,   201,   108,   109,     3,
      13,    49,    49,   208,   201,     9,   211,   284,   251,    94,
      95,   208,   224,     3,   211,    19,    20,    21,    22,     9,
       3,    17,   224,    48,    11,    36,     9,    26,    53,    39,
      20,    21,    22,   104,   105,   106,    37,    20,    21,    22,
      58,    58,     3,     3,    49,   249,     3,    49,   251,   254,
      48,   265,   257,   254,    20,    58,   257,   254,    37,    56,
     257,    56,     0,    56,    40,     3,     4,     5,     6,     7,
       8,    57,    49,    37,     3,    45,   281,    15,    16,    25,
     281,    49,    49,   287,   281,    23,    24,    58,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    40,    36,    49,
      37,    54,    49,    37,    49,    43,    44,    45,    39,    58,
      48,    37,    50,    51,    52,    54,     3,    49,    56,    55,
      58,     3,     4,     5,     6,     7,     8,    55,   100,   102,
     204,   224,   107,    15,    16,    97,    84,   280,   103,   207,
      82,    23,    24,   208,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   230,   252,   265,    57,    -1,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    56,    -1,    58,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    43,    44,    45,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    56,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    21,    22,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    43,    44,    45,    15,
      16,    48,    -1,    50,    51,    52,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    -1,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,     0,     3,     4,     5,     6,     7,     8,    15,
      16,    23,    24,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    36,    43,    44,    45,    48,    50,    51,    52,
      56,    58,    61,    62,    63,    64,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    79,   122,   123,
     124,   129,   130,   132,   133,    39,     3,    48,    74,    48,
      74,    48,    48,    48,   122,    48,    64,    74,   134,    39,
      58,    58,    62,   131,     3,     3,     9,    20,    21,    22,
      62,    89,    90,    91,    93,    96,   112,   116,   117,     3,
      19,    80,    82,    88,    89,    90,   125,   127,    37,    58,
      12,    38,    13,    11,    14,    41,    42,    17,    43,    44,
      45,    46,    47,    10,    40,    65,    73,    16,    18,    48,
      53,    55,    36,   122,   117,    62,    62,    62,    26,   131,
      39,   122,    58,    58,     3,    92,    49,    96,    97,    97,
       3,    92,    45,    48,   101,   110,   118,   119,   120,    49,
       3,    48,    81,    84,    85,   100,   101,   104,    82,    83,
      83,    83,   122,   126,   128,    80,    63,    67,    62,    68,
      69,    70,    70,    70,    71,    72,    72,    73,    73,    73,
      63,    63,    77,    78,    62,     3,    49,    49,    49,    49,
      48,    58,   122,    56,    56,    90,   102,   103,   118,   119,
      48,    53,    73,   100,    37,    40,   104,    48,    53,    57,
     122,    39,    49,    37,    54,   122,   122,   122,    62,   131,
       3,   113,   114,   115,    94,    95,    96,   101,    90,    49,
      82,   107,   108,   109,   121,   105,   134,    49,    85,    56,
      63,    86,     3,   106,   107,   111,   105,    64,    63,    25,
      49,    58,    37,    57,    40,    57,    95,    39,    98,    99,
     100,    48,   100,   101,   110,    37,    49,    54,    86,    87,
      49,    49,    37,    54,   122,    58,   131,   114,   134,   134,
      37,    39,    55,   109,    37,    57,     3,    49,    99,   134,
      55,    57,    86,   122,    55
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
    {nroLinea++;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 283 "../src/tp_4.y"
    {printf("Se encontro una sentencia de expresion \n");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 285 "../src/tp_4.y"
    {printf("Se encontro una sentencia de expresion \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1759 "tp_4.tab.c"
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
#line 332 "../src/tp_4.y"


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
