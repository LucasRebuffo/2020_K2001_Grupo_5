
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
     PALABRA_RESERVADA = 258,
     IDENTIFICADOR = 259,
     LITERAL_CADENA = 260,
     COMENTARIO_MULTIPLE = 261,
     COMENTARIO_SIMPLE = 262,
     CONSTANTE_DECIMAL = 263,
     CONSTANTE_OCTAL = 264,
     CONSTANTE_HEXA = 265,
     CONSTANTE_REAL = 266,
     TIPO_DE_DATO = 267,
     OP_ASIGANCION = 268,
     OP_IGUALDAD = 269,
     OP_OR = 270,
     OP_AND = 271,
     OP_RELACIONAL = 272,
     SIZEOF = 273,
     OP_INCREMENTO_DECREMENTO = 274,
     OP_CORRIMIENTO = 275,
     OP_ACCESO = 276,
     ESPEC_DE_CLASE = 277,
     CALIFICADOR_DE_TIPO = 278,
     STRUCT_O_UNION = 279,
     ESPECIFICADOR_ENUM = 280,
     IF = 281,
     SWITCH = 282,
     ELSE = 283,
     WHILE = 284,
     DO = 285,
     FOR = 286,
     CASE = 287,
     DEFAULT = 288,
     CONTINUE = 289,
     BREAK = 290,
     RETURN = 291,
     GOTO = 292,
     ERROR = 293
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
#line 170 "tp_4.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 182 "tp_4.tab.c"

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
#define YYLAST   1191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNRULES -- Number of states.  */
#define YYNSTATES  331

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,    50,    53,     2,
      51,    52,    48,    46,    40,    47,    58,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    61,
      44,    43,    45,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,    55,     2,     2,     2,
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
      35,    36,    37,    38
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
     146,   151,   155,   159,   162,   165,   167,   171,   173,   175,
     177,   179,   181,   183,   187,   189,   192,   194,   197,   199,
     202,   204,   207,   209,   213,   215,   219,   221,   225,   230,
     232,   236,   238,   240,   242,   244,   246,   248,   253,   259,
     262,   264,   266,   269,   272,   274,   277,   279,   282,   284,
     288,   290,   293,   297,   299,   302,   305,   307,   310,   314,
     316,   319,   321,   325,   329,   334,   339,   344,   346,   352,
     354,   358,   361,   363,   366,   368,   372,   377,   383,   386,
     388,   392,   394,   398,   400,   402,   404,   407,   409,   411,
     414,   418,   421,   425,   429,   434,   437,   441,   445,   450,
     452,   454,   456,   458,   460,   462,   464,   467,   470,   474,
     478,   483,   485,   488,   490,   493,   499,   507,   513,   519,
     527,   534,   542,   550,   558,   567,   576,   585,   595,   600,
     604,   608,   611,   614,   617,   621,   625
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    63,    64,    -1,    39,    -1,    82,
      39,    -1,    65,    39,    -1,   114,    39,    -1,    66,    -1,
      65,    40,    66,    -1,    67,    -1,    77,    68,    66,    -1,
      69,    -1,    69,    41,    65,    42,    67,    -1,    13,    -1,
      43,    -1,    70,    -1,    69,    15,    70,    -1,    71,    -1,
      70,    16,    71,    -1,    72,    -1,    71,    14,    72,    -1,
      73,    -1,    72,    17,    73,    -1,    72,    44,    73,    -1,
      72,    45,    73,    -1,    74,    -1,    73,    20,    74,    -1,
      75,    -1,    74,    46,    75,    -1,    74,    47,    75,    -1,
      76,    -1,    75,    48,    76,    -1,    75,    49,    76,    -1,
      75,    50,    76,    -1,    77,    -1,    51,   111,    52,    76,
      -1,    79,    -1,    19,    77,    -1,    78,    76,    -1,    18,
      77,    -1,    18,    51,   111,    52,    -1,    53,    -1,    48,
      -1,    47,    -1,    54,    -1,    46,    -1,    55,    -1,    81,
      -1,    79,    56,    65,    57,    -1,    79,    51,    80,    52,
      -1,    79,    51,    52,    -1,    79,    58,     4,    -1,    79,
      19,    -1,    79,    21,    -1,    66,    -1,    80,    40,    66,
      -1,     4,    -1,     8,    -1,    10,    -1,     9,    -1,    11,
      -1,     5,    -1,    51,    65,    52,    -1,    83,    -1,    83,
      84,    -1,    88,    -1,    88,    83,    -1,    89,    -1,    89,
      83,    -1,    90,    -1,    90,    83,    -1,    85,    -1,    84,
      40,    85,    -1,    98,    -1,    98,    43,    86,    -1,    66,
      -1,    59,    87,    60,    -1,    59,    87,    40,    60,    -1,
      86,    -1,    87,    40,    86,    -1,    22,    -1,    12,    -1,
      91,    -1,   106,    -1,   110,    -1,    23,    -1,    92,    59,
      93,    60,    -1,    92,     4,    59,    93,    60,    -1,    92,
       4,    -1,    24,    -1,    94,    -1,    93,    94,    -1,    95,
      96,    -1,    89,    -1,    89,    95,    -1,    90,    -1,    90,
      95,    -1,    97,    -1,    96,    40,    97,    -1,    98,    -1,
      42,   123,    -1,    98,    42,   123,    -1,   101,    -1,    99,
     101,    -1,    48,   100,    -1,    48,    -1,    48,    99,    -1,
      48,   100,    99,    -1,    90,    -1,   100,    90,    -1,     4,
      -1,    51,    98,    52,    -1,   101,    56,    57,    -1,   101,
      56,   123,    57,    -1,   101,    51,   102,    52,    -1,   101,
      51,   105,    52,    -1,   103,    -1,   103,    40,    58,    58,
      58,    -1,   104,    -1,   103,    40,   104,    -1,    83,    98,
      -1,    83,    -1,    83,   112,    -1,     4,    -1,   105,    40,
       4,    -1,    25,    59,   107,    60,    -1,    25,     4,    59,
     107,    60,    -1,    25,     4,    -1,   108,    -1,   107,    40,
     108,    -1,   109,    -1,   109,    43,   123,    -1,     4,    -1,
       4,    -1,    95,    -1,    95,   112,    -1,    99,    -1,   113,
      -1,    99,   113,    -1,    51,   112,    52,    -1,    56,    57,
      -1,   113,    56,    57,    -1,    56,   123,    57,    -1,   113,
      56,   123,    57,    -1,    51,    52,    -1,   113,    51,    52,
      -1,    51,   102,    52,    -1,   113,    51,   102,    52,    -1,
     115,    -1,   116,    -1,   119,    -1,   120,    -1,   121,    -1,
     122,    -1,    61,    -1,    65,    61,    -1,    59,    60,    -1,
      59,   117,    60,    -1,    59,   118,    60,    -1,    59,   117,
     118,    60,    -1,    82,    -1,   117,    82,    -1,   114,    -1,
     118,   114,    -1,    26,    51,    65,    52,   114,    -1,    26,
      51,    65,    52,   114,    28,   114,    -1,    27,    51,    65,
      52,   114,    -1,    29,    51,    65,    52,   114,    -1,    30,
     114,    29,    51,    65,    52,    61,    -1,    31,    51,    61,
      61,    52,   114,    -1,    31,    51,    65,    61,    61,    52,
     114,    -1,    31,    51,    61,    65,    61,    52,   114,    -1,
      31,    51,    61,    61,    65,    52,   114,    -1,    31,    51,
      65,    61,    65,    61,    52,   114,    -1,    31,    51,    65,
      61,    61,    65,    52,   114,    -1,    31,    51,    61,    65,
      61,    65,    52,   114,    -1,    31,    51,    65,    61,    65,
      61,    65,    52,   114,    -1,    32,   123,    42,   114,    -1,
      33,    42,   114,    -1,     4,    42,   114,    -1,    34,    61,
      -1,    35,    61,    -1,    36,    61,    -1,    36,    65,    61,
      -1,    37,     4,    61,    -1,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    63,    66,    67,    68,    69,    72,    73,
      75,    76,    78,    79,    81,    82,    84,    85,    87,    88,
      90,    91,    93,    94,    95,    96,    98,    99,   101,   102,
     103,   105,   106,   107,   108,   110,   111,   113,   114,   115,
     116,   117,   119,   120,   121,   122,   123,   124,   126,   127,
     128,   129,   130,   131,   132,   134,   135,   137,   138,   139,
     140,   141,   142,   143,   146,   147,   149,   150,   151,   152,
     153,   154,   156,   157,   159,   160,   162,   163,   164,   166,
     167,   169,   171,   172,   173,   174,   176,   178,   179,   180,
     182,   184,   185,   187,   189,   190,   191,   192,   194,   195,
     197,   198,   199,   201,   202,   204,   205,   206,   207,   209,
     210,   212,   213,   214,   215,   216,   217,   219,   220,   222,
     223,   225,   226,   227,   229,   230,   232,   233,   234,   236,
     237,   239,   240,   242,   244,   246,   247,   249,   250,   251,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   264,
     265,   266,   267,   268,   269,   271,   272,   274,   275,   276,
     277,   279,   280,   282,   283,   285,   286,   287,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   300,   301,
     302,   304,   305,   306,   307,   308,   311
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PALABRA_RESERVADA", "IDENTIFICADOR",
  "LITERAL_CADENA", "COMENTARIO_MULTIPLE", "COMENTARIO_SIMPLE",
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
  "expPostfijo", "listaArgumentos", "expPrimaria", "declaracion",
  "especificadoresDeDeclaracion", "listaDeDeclaradores", "declarador",
  "inicializador", "listaDeInicializadores",
  "especificadorDeClaseDeAlmacenamiento", "especificadorDeTipo",
  "calificadorDeTipo", "especificadorDeStructOUnion", "structOUnion",
  "listaDeDeclaracionesStruct", "declaracionStruct",
  "listaDeCalificadores", "declaradoresStruct", "declaStruct", "decla",
  "puntero", "listaDeCalificadoresTipo", "declaradorDirecto",
  "listaTiposParametros", "listaDeParametros", "declaracionDeParametro",
  "listaDeIdentifiacadores", "especificadorDeEnum", "listaDeEnumeradores",
  "enumerador", "constanteDeEnumeracion", "nombreDeTypedef",
  "nombreDeTipo", "declaradorAbstracto", "declaradorAbstractoDirecto",
  "sentencia", "sentenciaExpresion", "sentenciaCompuesta",
  "listaDeDeclaraciones", "listaDeSentencias", "sentenciaDeSeleccion",
  "sentenciaDeIteracion", "sentenciaEtiquetada", "sentenciaDeSalto",
  "expresionConstante", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    10,
      44,    63,    58,    61,    60,    62,    43,    45,    42,    47,
      37,    40,    41,    38,    33,   126,    91,    93,    46,   123,
     125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      74,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    87,
      87,    88,    89,    89,    89,    89,    90,    91,    91,    91,
      92,    93,    93,    94,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    98,    98,    99,    99,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   106,   107,
     107,   108,   108,   109,   110,   111,   111,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   114,   114,   114,   115,   115,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   122,   122,   122,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     1,     3,
       1,     3,     1,     5,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     3,     2,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     1,     2,     2,     1,     2,     1,     2,     1,     3,
       1,     2,     3,     1,     2,     2,     1,     2,     3,     1,
       2,     1,     3,     3,     4,     4,     4,     1,     5,     1,
       3,     2,     1,     2,     1,     3,     4,     5,     2,     1,
       3,     1,     3,     1,     1,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       4,     1,     2,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     7,     7,     8,     8,     8,     9,     4,     3,
       3,     2,     2,     2,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   134,    62,    58,    60,    59,    61,    82,
       0,     0,    81,    86,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,    46,    44,
      43,     0,    42,    45,    47,     0,   155,     3,     0,     8,
      10,    12,    16,    18,    20,    22,    26,    28,    31,    35,
       0,    37,    48,     0,    64,    66,    68,    70,    83,     0,
      84,    85,     0,   149,   150,   151,   152,   153,   154,     0,
      57,     0,    40,     0,    38,   128,     0,     0,     0,     0,
      57,     0,     0,     0,   186,    35,     0,     0,   181,   182,
     183,     0,     0,    57,     0,    94,    96,   135,     0,   157,
     161,   163,     0,     0,     6,     0,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,    39,    53,    54,     0,     0,     0,     5,
     111,   106,     0,    65,    72,    74,     0,   103,   134,    67,
      69,    71,    89,     0,     7,   180,     0,     0,   133,     0,
     129,   131,     0,     0,     0,     0,     0,     0,     0,   179,
     184,   185,    63,    95,    97,     0,     0,   137,   136,   138,
       0,   158,   162,     0,   159,   164,     9,    17,     0,    19,
      21,    23,    24,    25,    27,    29,    30,    32,    33,    34,
      11,    51,    55,     0,     0,    52,   109,   107,   105,     0,
       0,     0,   104,     0,     0,     0,     0,    91,     0,    41,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   145,   122,     0,   117,   119,     0,   141,     0,
     139,     0,     0,    36,   160,     0,     0,    50,    49,   110,
     108,   112,    73,     0,    76,    75,   134,     0,     0,   113,
       0,     0,    87,    92,     0,    93,    98,   100,   127,   130,
     132,   165,   167,   168,     0,     0,     0,     0,     0,     0,
       0,   121,   137,   123,   147,     0,   140,   143,   146,     0,
     142,     0,    13,    56,    79,     0,   115,     0,   116,   114,
      88,   101,     0,     0,     0,     0,   170,     0,     0,     0,
       0,     0,     0,   134,     0,   120,   148,   144,     0,    77,
     125,    99,   102,   166,   169,   173,   172,     0,   171,     0,
       0,     0,     0,    78,    80,   176,   175,   174,     0,   118,
     177
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    37,    81,    39,    40,   122,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   193,    52,
      53,   223,   133,   134,   245,   285,    55,    56,    57,    58,
      59,   206,   207,   208,   255,   256,   135,   136,   198,   137,
     224,   225,   226,   248,    60,   149,   150,   151,    61,    98,
     227,   169,   101,    63,    64,   102,   103,    65,    66,    67,
      68,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -225
static const yytype_int16 yypact[] =
{
    -225,   320,  -225,  1130,  -225,  -225,  -225,  -225,  -225,  -225,
    1056,  1087,  -225,  -225,  -225,    28,   -38,     2,     5,   610,
      45,  1108,    -7,     9,    44,   237,   103,  -225,  -225,  -225,
    -225,   900,  -225,  -225,  -225,   378,  -225,  -225,   112,  -225,
    -225,    -5,   105,    99,    72,   127,   189,   312,  -225,     7,
    1108,   149,  -225,   160,    58,   186,   186,   186,  -225,    29,
    -225,  -225,   204,  -225,  -225,  -225,  -225,  -225,  -225,   610,
    -225,   900,  -225,  1108,  -225,   190,   221,  1108,  1108,  1108,
     234,   123,   274,   668,  -225,  -225,   262,   610,  -225,  -225,
    -225,   125,   246,   155,   106,   368,   368,   266,   258,  -225,
    -225,  -225,   436,   494,  -225,  1108,  -225,  1108,  1108,  1108,
    1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,
    -225,  -225,  1108,  -225,  -225,  -225,   931,  1108,   307,  -225,
    -225,   -11,    58,   281,  -225,   283,    34,   -34,  -225,  -225,
    -225,  -225,   278,   368,  -225,  -225,   288,   221,  -225,   166,
    -225,   298,   129,   200,   210,   297,   680,   131,   610,  -225,
    -225,  -225,  -225,  -225,  -225,   257,   814,   183,  -225,   244,
    1108,  -225,  -225,   552,  -225,  -225,  -225,   105,   -14,    99,
      72,   127,   127,   127,   189,   312,   312,  -225,  -225,  -225,
    -225,  -225,  -225,   213,   -13,  -225,  -225,  -225,   -11,   306,
      58,   762,   -34,   311,   826,   368,   100,  -225,     4,  -225,
     184,   221,  -225,  1108,   610,   610,   610,  1108,   952,   135,
     692,  -225,  -225,    97,   317,   330,  -225,   324,  -225,   321,
     244,   179,   838,  -225,  -225,  1108,  1108,  -225,  -225,  -225,
    -225,  -225,  -225,   762,  -225,  -225,   218,   325,   219,  -225,
     327,   170,  -225,  -225,  1108,   345,  -225,   352,  -225,  -225,
    -225,   367,  -225,  -225,   220,   610,   223,   983,  1004,   172,
     878,  -225,    93,  -225,  -225,    35,  -225,  -225,  -225,   346,
    -225,   342,  -225,  -225,  -225,   197,  -225,   402,  -225,  -225,
    -225,  -225,     4,  1108,   610,   355,  -225,   610,   610,   226,
     610,   249,  1035,    47,   359,  -225,  -225,  -225,   746,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,   610,  -225,   610,
     610,   254,   360,  -225,  -225,  -225,  -225,  -225,   610,  -225,
    -225
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,     0,   -81,   -16,  -225,  -225,   313,   310,
     318,   252,   308,   171,   -27,    19,  -225,  -225,  -225,  -225,
     -28,     8,  -225,   227,  -224,  -225,  -225,   -29,    23,  -225,
    -225,   216,  -190,   -20,  -225,   138,  -128,   -83,  -225,  -133,
    -182,  -225,   148,  -225,  -225,   287,   224,  -225,  -225,   365,
     -82,  -161,    -1,  -225,  -225,  -225,   340,  -225,  -225,  -225,
    -225,  -132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -135
static const yytype_int16 yytable[] =
{
      62,    38,    95,   202,   199,    84,   230,   100,   130,    54,
     107,    97,    13,    77,   167,   168,   253,   203,    82,   284,
     120,   247,   204,   123,   176,    91,   105,   105,   235,    72,
      74,    94,    75,   142,   229,    87,   108,   131,   130,   138,
      85,   190,    95,    54,   238,   192,   254,     9,   197,   279,
     121,    97,   131,    78,    96,   132,    79,    12,    13,    14,
      15,   253,   130,   139,   140,   141,    95,    95,   145,    85,
      88,    94,   250,    94,   172,   163,   164,   152,   153,   154,
     257,   260,   167,   157,   324,   132,   159,    76,   143,   111,
     187,   188,   189,   304,    96,   271,    83,   130,  -111,  -111,
     281,   130,   175,  -111,   138,    89,   131,    92,   178,   132,
      54,   230,     9,   110,    95,   240,   112,   113,    96,    96,
     244,   109,   291,    13,    14,    15,    85,   194,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,   202,
     272,   273,   199,   233,   270,   131,   105,   114,   270,   166,
      84,   104,   105,   166,   196,   283,   219,   221,   162,  -134,
     252,   312,   244,   105,   257,   105,    96,  -134,   124,   105,
     125,   105,   175,   106,   138,   105,    95,    95,  -134,  -134,
    -134,   214,     9,   138,   106,    85,   160,   272,    84,    85,
     138,     9,   220,    13,    14,    15,   267,    84,     9,   129,
     126,    12,    13,    14,    15,   127,   211,   128,    12,    13,
      14,    15,   105,   261,   262,   263,    84,   264,   266,   282,
     269,   239,    95,    85,   211,   148,   212,   244,    96,    96,
     290,   278,    85,   302,   165,   115,   116,   308,    84,   166,
     105,    70,     4,   144,   258,     5,     6,     7,     8,   147,
     105,    85,   215,   236,    85,    10,    11,   309,  -124,   287,
     105,   138,   216,   105,   296,   237,   105,   299,   301,     9,
    -124,   288,   295,    85,    96,   297,    69,    84,   317,    12,
      13,    14,    15,    28,    29,    30,   185,   186,    31,   105,
      32,    33,    34,   313,   105,   231,   315,   316,    90,   318,
     232,   319,   321,   155,   158,   131,   328,   161,   165,   222,
     170,   195,    85,   166,   131,   246,   325,   165,   326,   327,
       2,   200,   166,     9,     3,     4,   201,   330,     5,     6,
       7,     8,     9,    12,    13,    14,    15,   205,    10,    11,
     209,   213,    12,    13,    14,    15,    16,    17,   217,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   241,    27,
     117,   118,   119,   181,   182,   183,    28,    29,    30,   274,
     275,    31,   138,    32,    33,    34,   276,   286,   277,    35,
       9,    36,     3,     4,   289,   292,     5,     6,     7,     8,
       9,    13,    14,    15,   293,   294,    10,    11,   306,   307,
      12,    13,    14,    15,    16,    17,   310,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   314,   322,   329,   179,
     177,   251,   184,   305,    28,    29,    30,   242,   180,    31,
     311,    32,    33,    34,   210,   259,   146,    35,    99,    36,
       3,     4,   173,     0,     5,     6,     7,     8,     9,     0,
       0,     0,     0,     0,    10,    11,     0,     0,    12,    13,
      14,    15,    16,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,     0,    31,     0,    32,
      33,    34,     0,     0,     0,    35,   171,    36,    80,     4,
       0,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,     0,     0,
      16,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,    31,     0,    32,    33,    34,
       0,     0,     0,    35,   174,    36,    80,     4,     0,     0,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,    16,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      30,     0,     0,    31,     0,    32,    33,    34,     0,     0,
       0,    35,   234,    36,    80,     4,     0,     0,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,     0,     0,    16,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,    31,     0,    32,    33,    34,     0,     0,     0,    35,
       0,    36,    70,     4,     0,     0,     5,     6,     7,     8,
       0,     0,     0,     0,    70,     4,    10,    11,     5,     6,
       7,     8,     0,     0,     0,     0,    70,     4,    10,    11,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,    28,    29,    30,     0,     0,    31,
       0,    32,    33,    34,     0,     0,    28,    29,    30,   156,
       0,    31,     0,    32,    33,    34,     0,     0,    28,    29,
      30,   218,     0,    31,     0,    32,    33,    34,     0,     0,
      70,     4,     0,   268,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,    10,    11,    70,     4,     0,     0,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,     0,    31,     0,    32,
      33,    34,     0,     0,     0,   243,   323,     0,    28,    29,
      30,     0,     0,    31,     0,    32,    33,    34,    70,     4,
       0,   243,     5,     6,     7,     8,     0,     0,     0,     0,
      70,     4,    10,    11,     5,     6,     7,     8,     0,     0,
       0,     0,    70,     4,    10,    11,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
      28,    29,    30,     0,     0,    31,     0,    32,    33,    34,
       0,   228,    28,    29,    30,     0,     0,    31,     0,    32,
      33,    34,   303,   249,    28,    29,    30,     0,     0,    31,
       9,    32,    33,    34,     0,   280,     0,     0,     0,     0,
      12,    13,    14,    15,    93,     4,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,    13,    14,    15,   131,     0,     0,   270,
     222,     0,     0,     0,   166,    70,     4,     0,     0,     5,
       6,     7,     8,     0,     0,     0,    28,    29,    30,    10,
      11,    31,     0,    32,    33,    34,    70,     4,     0,     0,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,    28,    29,    30,
       0,     0,    31,   191,    32,    33,    34,    70,     4,     0,
       0,     5,     6,     7,     8,     0,     0,     0,    28,    29,
      30,    10,    11,    31,   265,    32,    33,    34,    70,     4,
       0,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,     0,    28,
      29,    30,     0,     0,    31,   298,    32,    33,    34,    70,
       4,     0,     0,     5,     6,     7,     8,     0,     0,     0,
      28,    29,    30,    10,    11,    31,   300,    32,    33,    34,
      70,     4,     0,     0,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,    31,   320,    32,    33,
      34,    70,     4,     0,     0,     5,     6,     7,     8,     0,
       0,     0,    28,    29,    30,    10,    11,    71,     0,    32,
      33,    34,    70,     4,     0,     0,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,    73,     0,
      32,    33,    34,   -57,   -57,   -57,   -57,   -57,     0,   -57,
     -57,   -57,     0,     0,    28,    29,    30,     0,     0,    31,
       0,    32,    33,    34,     0,     0,     0,     0,     0,   -57,
     -57,   -57,    69,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,     0,   -57,     0,   -57,     0,
       0,   -57
};

static const yytype_int16 yycheck[] =
{
       1,     1,    31,   136,   132,    21,   167,    35,     4,     1,
      15,    31,    23,    51,    97,    97,   206,    51,    19,   243,
      13,   203,    56,    50,   105,    25,    40,    40,    42,    10,
      11,    31,     4,     4,   166,    42,    41,    48,     4,     4,
      21,   122,    71,    35,    57,   126,    42,    12,   131,   231,
      43,    71,    48,    51,    31,    51,    51,    22,    23,    24,
      25,   251,     4,    55,    56,    57,    95,    96,    69,    50,
      61,    71,   204,    73,   102,    95,    96,    77,    78,    79,
     208,   213,   165,    83,   308,    51,    87,    59,    59,    17,
     117,   118,   119,    58,    71,   223,    51,     4,    51,    52,
     232,     4,   103,    56,     4,    61,    48,     4,   108,    51,
     102,   272,    12,    14,   143,   198,    44,    45,    95,    96,
     201,    16,   254,    23,    24,    25,   107,   127,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   272,
     223,   223,   270,   170,    51,    48,    40,    20,    51,    56,
     166,    39,    40,    56,   131,   236,   156,   158,    52,     4,
      60,   293,   243,    40,   292,    40,   143,    12,    19,    40,
      21,    40,   173,    61,     4,    40,   205,   206,    23,    24,
      25,    52,    12,     4,    61,   166,    61,   270,   204,   170,
       4,    12,    61,    23,    24,    25,    61,   213,    12,    39,
      51,    22,    23,    24,    25,    56,    40,    58,    22,    23,
      24,    25,    40,   214,   215,   216,   232,   217,   218,   235,
     220,   198,   251,   204,    40,     4,    60,   308,   205,   206,
      60,    52,   213,    61,    51,    46,    47,    40,   254,    56,
      40,     4,     5,    39,    60,     8,     9,    10,    11,    59,
      40,   232,    52,    40,   235,    18,    19,    60,    40,    40,
      40,     4,    52,    40,   265,    52,    40,   267,   268,    12,
      52,    52,    52,   254,   251,    52,    42,   293,    52,    22,
      23,    24,    25,    46,    47,    48,   115,   116,    51,    40,
      53,    54,    55,   294,    40,    51,   297,   298,    61,   300,
      56,    52,   302,    29,    42,    48,    52,    61,    51,    52,
      52,     4,   293,    56,    48,     4,   317,    51,   319,   320,
       0,    40,    56,    12,     4,     5,    43,   328,     8,     9,
      10,    11,    12,    22,    23,    24,    25,    59,    18,    19,
      52,    43,    22,    23,    24,    25,    26,    27,    51,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    52,    39,
      48,    49,    50,   111,   112,   113,    46,    47,    48,    52,
      40,    51,     4,    53,    54,    55,    52,    52,    57,    59,
      12,    61,     4,     5,    57,    40,     8,     9,    10,    11,
      12,    23,    24,    25,    42,    28,    18,    19,    52,    57,
      22,    23,    24,    25,    26,    27,     4,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    61,    58,    58,   109,
     107,   205,   114,   275,    46,    47,    48,   200,   110,    51,
     292,    53,    54,    55,   147,   211,    71,    59,    60,    61,
       4,     5,   102,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    51,    -1,    53,
      54,    55,    -1,    -1,    -1,    59,    60,    61,     4,     5,
      -1,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    51,    -1,    53,    54,    55,
      -1,    -1,    -1,    59,    60,    61,     4,     5,    -1,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    51,    -1,    53,    54,    55,    -1,    -1,
      -1,    59,    60,    61,     4,     5,    -1,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    51,    -1,    53,    54,    55,    -1,    -1,    -1,    59,
      -1,    61,     4,     5,    -1,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,     4,     5,    18,    19,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,     4,     5,    18,    19,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    46,    47,    48,    -1,    -1,    51,
      -1,    53,    54,    55,    -1,    -1,    46,    47,    48,    61,
      -1,    51,    -1,    53,    54,    55,    -1,    -1,    46,    47,
      48,    61,    -1,    51,    -1,    53,    54,    55,    -1,    -1,
       4,     5,    -1,    61,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,     4,     5,    -1,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    51,    -1,    53,
      54,    55,    -1,    -1,    -1,    59,    60,    -1,    46,    47,
      48,    -1,    -1,    51,    -1,    53,    54,    55,     4,     5,
      -1,    59,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
       4,     5,    18,    19,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,     4,     5,    18,    19,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,
      46,    47,    48,    -1,    -1,    51,    -1,    53,    54,    55,
      -1,    57,    46,    47,    48,    -1,    -1,    51,    -1,    53,
      54,    55,     4,    57,    46,    47,    48,    -1,    -1,    51,
      12,    53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,     4,     5,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    48,    -1,    -1,    51,
      52,    -1,    -1,    -1,    56,     4,     5,    -1,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    46,    47,    48,    18,
      19,    51,    -1,    53,    54,    55,     4,     5,    -1,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,     4,     5,    -1,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    46,    47,
      48,    18,    19,    51,    52,    53,    54,    55,     4,     5,
      -1,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,     4,
       5,    -1,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      46,    47,    48,    18,    19,    51,    52,    53,    54,    55,
       4,     5,    -1,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    51,    52,    53,    54,
      55,     4,     5,    -1,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    46,    47,    48,    18,    19,    51,    -1,    53,
      54,    55,     4,     5,    -1,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    51,    -1,
      53,    54,    55,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    -1,    -1,    46,    47,    48,    -1,    -1,    51,
      -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    -1,
      -1,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,     4,     5,     8,     9,    10,    11,    12,
      18,    19,    22,    23,    24,    25,    26,    27,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    39,    46,    47,
      48,    51,    53,    54,    55,    59,    61,    64,    65,    66,
      67,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    81,    82,    83,    88,    89,    90,    91,    92,
     106,   110,   114,   115,   116,   119,   120,   121,   122,    42,
       4,    51,    77,    51,    77,     4,    59,    51,    51,    51,
       4,    65,   114,    51,    67,    77,   123,    42,    61,    61,
      61,    65,     4,     4,    65,    89,    90,    95,   111,    60,
      82,   114,   117,   118,    39,    40,    61,    15,    41,    16,
      14,    17,    44,    45,    20,    46,    47,    48,    49,    50,
      13,    43,    68,    76,    19,    21,    51,    56,    58,    39,
       4,    48,    51,    84,    85,    98,    99,   101,     4,    83,
      83,    83,     4,    59,    39,   114,   111,    59,     4,   107,
     108,   109,    65,    65,    65,    29,    61,    65,    42,   114,
      61,    61,    52,    95,    95,    51,    56,    99,   112,   113,
      52,    60,    82,   118,    60,   114,    66,    70,    65,    71,
      72,    73,    73,    73,    74,    75,    75,    76,    76,    76,
      66,    52,    66,    80,    65,     4,    90,    99,   100,    98,
      40,    43,   101,    51,    56,    59,    93,    94,    95,    52,
     107,    40,    60,    43,    52,    52,    52,    51,    61,    65,
      61,   114,    52,    83,   102,   103,   104,   112,    57,   123,
     113,    51,    56,    76,    60,    42,    40,    52,    57,    90,
      99,    52,    85,    59,    66,    86,     4,   102,   105,    57,
     123,    93,    60,    94,    42,    96,    97,    98,    60,   108,
     123,   114,   114,   114,    65,    52,    65,    61,    61,    65,
      51,    98,    99,   112,    52,    40,    52,    57,    52,   102,
      57,   123,    67,    66,    86,    87,    52,    40,    52,    57,
      60,   123,    40,    42,    28,    52,   114,    52,    52,    65,
      52,    65,    61,     4,    58,   104,    52,    57,    40,    60,
       4,    97,   123,   114,    61,   114,   114,    52,   114,    52,
      52,    65,    58,    60,    86,   114,   114,   114,    52,    58,
     114
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
#line 66 "../src/tp_4.y"
    {nroLinea++;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "../src/tp_4.y"
    {printf("Se encontro una declaracion\n");nroLinea++;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "../src/tp_4.y"
    {printf("Se encontro una expresion\n");nroLinea++;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "../src/tp_4.y"
    {printf("Se encontro una sentencia\n");nroLinea++;;}
    break;



/* Line 1455 of yacc.c  */
#line 1908 "tp_4.tab.c"
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
#line 315 "../src/tp_4.y"


int yyerror (char *s)  
{
  printf ("%s\n", s);
}


int main (int argc, char const* argv[])
{
  yyparse();
}
