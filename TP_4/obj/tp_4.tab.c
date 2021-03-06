
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
  extern FILE* yyin;
  int yylex();
  int yyerror (char *s);
  int yywrap(){
    return (1);
  }

  int nroLinea = 1;


/* Line 189 of yacc.c  */
#line 88 "tp_4.tab.c"

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
     CONSTANTE_CARACTER = 264,
     TIPO_DE_DATO = 265,
     OP_ASIGANCION = 266,
     OP_IGUALDAD = 267,
     OP_OR = 268,
     OP_AND = 269,
     OP_RELACIONAL = 270,
     SIZEOF = 271,
     OP_INCREMENTO_DECREMENTO = 272,
     OP_CORRIMIENTO = 273,
     OP_ACCESO = 274,
     ESPEC_DE_CLASE = 275,
     CALIFICADOR_DE_TIPO = 276,
     STRUCT_O_UNION = 277,
     ESPECIFICADOR_ENUM = 278,
     IF = 279,
     SWITCH = 280,
     ELSE = 281,
     WHILE = 282,
     DO = 283,
     FOR = 284,
     CASE = 285,
     DEFAULT = 286,
     CONTINUE = 287,
     BREAK = 288,
     RETURN = 289,
     GOTO = 290,
     ERROR = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "../src/tp_4.y"

  long int entero;
  char* cadena;
  double real;



/* Line 214 of yacc.c  */
#line 168 "tp_4.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "tp_4.tab.c"

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
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    48,    51,     2,
      49,    50,    46,    44,    38,    45,    56,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    59,
      42,    41,    43,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,    53,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    14,    16,    20,
      22,    26,    28,    34,    36,    38,    40,    44,    46,    50,
      52,    56,    58,    62,    66,    70,    72,    76,    78,    82,
      86,    88,    92,    96,   100,   102,   107,   109,   112,   115,
     118,   123,   125,   127,   129,   131,   133,   135,   137,   142,
     147,   151,   154,   157,   158,   160,   162,   166,   168,   170,
     172,   174,   176,   178,   180,   184,   186,   190,   192,   194,
     196,   198,   200,   202,   204,   206,   211,   218,   220,   223,
     226,   227,   229,   230,   232,   234,   237,   239,   242,   249,
     252,   253,   259,   265,   273,   283,   284,   286,   291,   295,
     299,   302,   305,   309,   313,   314,   316,   320,   326,   328,
     332,   333,   336,   338,   340,   344,   346,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    -1,    61,    62,    -1,    37,    -1,    81,
      37,    -1,     1,    -1,    64,    -1,    63,    38,    64,    -1,
      65,    -1,    75,    66,    64,    -1,    67,    -1,    67,    39,
      63,    40,    65,    -1,    11,    -1,    41,    -1,    68,    -1,
      67,    13,    68,    -1,    69,    -1,    68,    14,    69,    -1,
      70,    -1,    69,    12,    70,    -1,    71,    -1,    70,    15,
      71,    -1,    70,    42,    71,    -1,    70,    43,    71,    -1,
      72,    -1,    71,    18,    72,    -1,    73,    -1,    72,    44,
      73,    -1,    72,    45,    73,    -1,    74,    -1,    73,    46,
      74,    -1,    73,    47,    74,    -1,    73,    48,    74,    -1,
      75,    -1,    49,    10,    50,    74,    -1,    77,    -1,    17,
      75,    -1,    76,    74,    -1,    16,    75,    -1,    16,    49,
      10,    50,    -1,    51,    -1,    46,    -1,    45,    -1,    52,
      -1,    44,    -1,    53,    -1,    80,    -1,    77,    54,    63,
      55,    -1,    77,    49,    78,    50,    -1,    77,    56,     3,
      -1,    77,    17,    -1,    77,    19,    -1,    -1,    79,    -1,
      64,    -1,    79,    38,    64,    -1,     3,    -1,     5,    -1,
       7,    -1,     6,    -1,     8,    -1,     4,    -1,     9,    -1,
      49,    63,    50,    -1,    84,    -1,    57,    85,    58,    -1,
      90,    -1,    92,    -1,    93,    -1,    95,    -1,    96,    -1,
      98,    -1,    82,    -1,    83,    -1,    98,    57,    87,    58,
      -1,    10,     3,    49,    99,    50,    59,    -1,    59,    -1,
      63,    59,    -1,    86,    87,    -1,    -1,    88,    -1,    -1,
      89,    -1,    98,    -1,    88,    98,    -1,    81,    -1,    89,
      81,    -1,    24,    49,    63,    50,    81,    91,    -1,    26,
      81,    -1,    -1,    25,    49,    63,    50,    81,    -1,    27,
      49,    63,    50,    81,    -1,    28,    81,    27,    49,    63,
      50,    59,    -1,    29,    49,    94,    59,    94,    59,    94,
      50,    81,    -1,    -1,    63,    -1,    30,    97,    40,    81,
      -1,    31,    40,    81,    -1,     3,    40,    81,    -1,    32,
      59,    -1,    33,    59,    -1,    34,    94,    59,    -1,    35,
       3,    59,    -1,    -1,    65,    -1,    10,   101,    59,    -1,
      10,     3,    49,    99,    50,    -1,   100,    -1,   100,    38,
      99,    -1,    -1,    10,     3,    -1,     3,    -1,   102,    -1,
     102,    38,   101,    -1,     3,    -1,     3,    41,    63,    -1,
       3,    49,    99,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    64,    65,    66,    71,    72,    74,
      75,    77,    78,    80,    81,    83,    84,    86,    87,    89,
      90,    92,    93,    94,    95,    97,    98,   100,   101,   102,
     104,   105,   106,   107,   109,   110,   112,   113,   114,   115,
     116,   118,   119,   120,   121,   122,   123,   125,   126,   127,
     128,   129,   130,   132,   133,   135,   136,   138,   139,   140,
     141,   142,   143,   144,   145,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   166,   168,   170,   171,   173,
     175,   176,   178,   179,   181,   182,   184,   185,   187,   189,
     190,   192,   194,   195,   196,   198,   199,   201,   202,   203,
     205,   206,   207,   208,   210,   211,   213,   214,   216,   217,
     219,   220,   221,   223,   224,   226,   227,   228
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "LITERAL_CADENA",
  "CONSTANTE_DECIMAL", "CONSTANTE_OCTAL", "CONSTANTE_HEXA",
  "CONSTANTE_REAL", "CONSTANTE_CARACTER", "TIPO_DE_DATO", "OP_ASIGANCION",
  "OP_IGUALDAD", "OP_OR", "OP_AND", "OP_RELACIONAL", "SIZEOF",
  "OP_INCREMENTO_DECREMENTO", "OP_CORRIMIENTO", "OP_ACCESO",
  "ESPEC_DE_CLASE", "CALIFICADOR_DE_TIPO", "STRUCT_O_UNION",
  "ESPECIFICADOR_ENUM", "IF", "SWITCH", "ELSE", "WHILE", "DO", "FOR",
  "CASE", "DEFAULT", "CONTINUE", "BREAK", "RETURN", "GOTO", "ERROR",
  "'\\n'", "','", "'?'", "':'", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'('", "')'", "'&'", "'!'", "'~'", "'['", "']'", "'.'",
  "'{'", "'}'", "';'", "$accept", "input", "line", "expresion",
  "expAsignacion", "expCondicional", "operAsignacion", "expOr", "expAnd",
  "expIgualdad", "expRelacional", "expCorrimiento", "expAditiva",
  "expMultiplicativa", "expDeConversion", "expUnaria", "operUnario",
  "expPostfijo", "listaArgumentosOP", "listaArgumentos", "expPrimaria",
  "sentencia", "definicionFuncion", "declaracionDeFuncion",
  "sentenciaExpresion", "sentenciaCompuesta", "listaDeDeclaracionesOP",
  "listaDeSentenciasOP", "listaDeDeclaraciones", "listaDeSentencias",
  "sentenciaDeSeleccionIF", "sentenciaElse", "sentenciaDeSeleccionSWITCH",
  "sentenciaDeIteracion", "expresionOP", "sentenciaEtiquetada",
  "sentenciaDeSalto", "expresionConstante", "sentenciaDeDeclaracion",
  "listaParametros", "parametro", "listaIdentificadores", "identificadorA", 0
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
     285,   286,   287,   288,   289,   290,   291,    10,    44,    63,
      58,    61,    60,    62,    43,    45,    42,    47,    37,    40,
      41,    38,    33,   126,    91,    93,    46,   123,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    72,    72,    72,
      73,    73,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    83,    84,    84,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    91,
      91,    92,    93,    93,    93,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     1,
       3,     1,     5,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     4,     1,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       3,     2,     2,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     1,     2,     2,
       0,     1,     0,     1,     1,     2,     1,     2,     6,     2,
       0,     5,     5,     7,     9,     0,     1,     4,     3,     3,
       2,     2,     3,     3,     0,     1,     3,     5,     1,     3,
       0,     2,     1,     1,     3,     1,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     6,    57,    62,    58,    60,    59,    61,
      63,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,    95,     0,     4,    45,    43,    42,     0,
      41,    44,    46,    80,    77,     3,     0,     7,     9,    11,
      15,    17,    19,    21,    25,    27,    30,    34,     0,    36,
      47,     0,    73,    74,    65,    67,    68,    69,    70,    71,
      72,     0,   115,     0,   113,    57,     0,    39,     0,    37,
       0,     0,     0,     0,    95,   105,    34,     0,     0,   100,
     101,    96,     0,     0,     0,     0,     0,     0,    82,    81,
      84,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,     0,    38,
      51,    52,    53,     0,     0,     5,    82,    99,     0,   110,
     106,     0,     0,     0,     0,     0,     0,     0,     0,    98,
     102,   103,     0,    64,   115,    66,    86,    79,    83,    85,
       8,    16,     0,    18,    20,    22,    23,    24,    26,    28,
      29,    31,    32,    33,    10,    55,     0,    54,     0,    50,
       0,   116,   112,     0,     0,   108,   115,   114,    40,     0,
       0,     0,     0,    95,    97,    35,   110,    87,     0,    49,
       0,    48,    75,   111,   107,   110,   110,    90,    91,    92,
       0,     0,     0,    12,    56,    76,   109,     0,     0,    88,
       0,    95,   107,   117,    89,    93,     0,     0,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    35,    36,    37,    38,   108,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   156,   157,
      50,   136,    52,    53,    54,    87,    88,   137,    89,   138,
      55,   199,    56,    57,    82,    58,    59,    77,    60,   164,
     165,    63,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
    -130,   185,  -130,  -130,   -19,  -130,  -130,  -130,  -130,  -130,
    -130,    20,   314,   330,    -7,     9,    16,   242,    46,   381,
      15,    10,    38,   381,    35,  -130,  -130,  -130,  -130,    77,
    -130,  -130,  -130,    69,  -130,  -130,   -29,  -130,  -130,    -2,
      84,    88,   -11,   101,    30,    67,  -130,    -6,   381,    17,
    -130,    83,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
      68,   242,    18,    65,    93,  -130,   299,  -130,   381,  -130,
     381,   381,   381,   105,   381,  -130,  -130,    94,   242,  -130,
    -130,    95,    76,    80,    86,   -24,   138,    85,   242,    69,
    -130,   381,  -130,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,  -130,  -130,   381,  -130,
    -130,  -130,   381,   381,   139,  -130,   242,  -130,   381,    12,
    -130,   141,    96,   -21,   -10,     1,    98,    89,   242,  -130,
    -130,  -130,   381,  -130,    27,  -130,  -130,  -130,   242,  -130,
    -130,    84,     5,    88,   -11,   101,   101,   101,    30,    67,
      67,  -130,  -130,  -130,  -130,  -130,    99,   107,   -28,  -130,
      97,    95,  -130,   149,   103,   116,    29,  -130,  -130,   242,
     242,   242,   381,   381,  -130,  -130,    12,  -130,   381,  -130,
     381,  -130,  -130,  -130,   -26,    12,    12,   130,  -130,  -130,
       3,   100,   108,  -130,  -130,  -130,  -130,   110,   242,  -130,
     104,   381,   119,  -130,  -130,  -130,   112,   242,  -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   -22,   -88,   -17,  -130,  -130,    71,    70,
      75,    19,    66,   -13,   -42,     6,  -130,  -130,  -130,  -130,
    -130,    -1,  -130,  -130,  -130,  -130,  -130,    51,  -130,  -130,
    -130,  -130,  -130,  -130,   -61,  -130,  -130,  -130,   -25,  -129,
    -130,    52,  -130
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -118
static const yytype_int16 yytable[] =
{
      51,    81,    75,   140,    97,   106,   109,    85,    90,    91,
      91,    93,  -117,   127,    91,   162,    73,    91,    67,    69,
     154,    61,   163,    62,   155,    76,   133,   181,    91,   169,
      92,    98,    99,   195,   110,   107,   111,    94,    83,    91,
     170,    91,    70,    91,    85,   178,    85,   192,   123,   124,
     125,   171,    81,   200,    76,    78,   196,   197,    71,   118,
     117,   151,   152,   153,   139,    72,   112,   119,   118,    79,
     118,   113,   142,   114,   101,   102,   176,   129,   186,    86,
      65,     5,     6,     7,     8,     9,    10,    84,   149,   150,
     175,   158,   194,    12,    13,    74,   161,    80,    95,    76,
      96,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,   191,   103,   104,   105,   145,   146,   147,   100,
     115,    26,    27,    28,   120,   116,    29,   174,    30,    31,
      32,   121,   126,    91,   128,   130,   132,   177,    76,   131,
     206,   134,   159,   135,   166,   180,   168,   172,   173,   179,
     190,    81,   183,   184,   185,   182,   198,  -117,   202,   201,
     203,   193,   207,   205,   141,   143,   148,   160,   187,   188,
     189,   144,     0,   167,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    76,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,   204,     0,     0,
       0,    12,    13,     0,     0,     0,   208,     0,     0,    14,
      15,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,     0,     0,    29,     0,    30,    31,    32,     0,
       0,     0,    33,     0,    34,     4,     5,     6,     7,     8,
       9,    10,    11,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,    14,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,     0,
       0,    29,     0,    30,    31,    32,     0,     0,     0,    33,
       0,    34,    65,     5,     6,     7,     8,     9,    10,   122,
       0,     0,     0,     0,     0,    12,    13,    65,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      12,    13,     0,    65,     5,     6,     7,     8,     9,    10,
       0,     0,     0,    26,    27,    28,    12,    13,    29,     0,
      30,    31,    32,     0,     0,     0,     0,     0,    26,    27,
      28,     0,     0,    66,     0,    30,    31,    32,     0,     0,
       0,     0,     0,     0,    26,    27,    28,     0,     0,    68,
       0,    30,    31,    32,    65,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,    28,     0,     0,
      29,     0,    30,    31,    32
};

static const yytype_int16 yycheck[] =
{
       1,    23,    19,    91,    15,    11,    48,    29,    33,    38,
      38,    13,    38,    74,    38,     3,    17,    38,    12,    13,
     108,    40,    10,     3,   112,    19,    50,    55,    38,    50,
      59,    42,    43,    59,    17,    41,    19,    39,     3,    38,
      50,    38,    49,    38,    66,    40,    68,   176,    70,    71,
      72,    50,    74,    50,    48,    40,   185,   186,    49,    41,
      61,   103,   104,   105,    89,    49,    49,    49,    41,    59,
      41,    54,    94,    56,    44,    45,    49,    78,    49,    10,
       3,     4,     5,     6,     7,     8,     9,    10,   101,   102,
     132,   113,   180,    16,    17,    49,   118,    59,    14,    93,
      12,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   173,    46,    47,    48,    97,    98,    99,    18,
      37,    44,    45,    46,    59,    57,    49,   128,    51,    52,
      53,    38,    27,    38,    40,    59,    50,   138,   132,    59,
     201,     3,     3,    58,     3,    38,    50,    49,    59,    50,
     172,   173,     3,    50,    38,    58,    26,    38,    50,    59,
      50,   178,    50,    59,    93,    95,   100,   116,   169,   170,
     171,    96,    -1,   121,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,   178,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,   198,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,   207,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    57,    -1,    59,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    57,
      -1,    59,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    44,    45,    46,    16,    17,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      -1,    51,    52,    53,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      49,    -1,    51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    16,    17,    24,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    37,    44,    45,    46,    49,
      51,    52,    53,    57,    59,    62,    63,    64,    65,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      80,    81,    82,    83,    84,    90,    92,    93,    95,    96,
      98,    40,     3,   101,   102,     3,    49,    75,    49,    75,
      49,    49,    49,    81,    49,    65,    75,    97,    40,    59,
      59,    63,    94,     3,    10,    63,    10,    85,    86,    88,
      98,    38,    59,    13,    39,    14,    12,    15,    42,    43,
      18,    44,    45,    46,    47,    48,    11,    41,    66,    74,
      17,    19,    49,    54,    56,    37,    57,    81,    41,    49,
      59,    38,    10,    63,    63,    63,    27,    94,    40,    81,
      59,    59,    50,    50,     3,    58,    81,    87,    89,    98,
      64,    68,    63,    69,    70,    71,    71,    71,    72,    73,
      73,    74,    74,    74,    64,    64,    78,    79,    63,     3,
      87,    63,     3,    10,    99,   100,     3,   101,    50,    50,
      50,    50,    49,    59,    81,    74,    49,    81,    40,    50,
      38,    55,    58,     3,    50,    38,    49,    81,    81,    81,
      63,    94,    99,    65,    64,    59,    99,    99,    26,    91,
      50,    59,    50,    50,    81,    59,    94,    50,    81
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
#line 64 "../src/tp_4.y"
    {nroLinea++;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 "../src/tp_4.y"
    {nroLinea++;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "../src/tp_4.y"
    {printf("Hubo un error sintactico en linea %d \n", nroLinea);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 154 "../src/tp_4.y"
    {printf("Se encontro una sentencia de expresion en linea %d \n", nroLinea); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 156 "../src/tp_4.y"
    {printf("Se encontro una sentencia de seleccion en linea %d \n", nroLinea);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 157 "../src/tp_4.y"
    {printf("Se encontro una sentencia de seleccion en linea %d \n", nroLinea);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 158 "../src/tp_4.y"
    {printf("Se encontro una sentencia de de iteracion en linea %d \n", nroLinea);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 159 "../src/tp_4.y"
    {printf("Se encontro una sentencia etiquetada en linea %d \n", nroLinea);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 160 "../src/tp_4.y"
    {printf("Se encontro una sentencia de salto en linea %d \n", nroLinea);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 161 "../src/tp_4.y"
    {printf("Se encontro una sentencia de declaracion en linea %d \n", nroLinea);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 162 "../src/tp_4.y"
    {printf("Se encontro una definicion de funcion en linea %d \n", nroLinea);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 163 "../src/tp_4.y"
    {printf("Se encontro una declaracion de funcion en linea %d \n", nroLinea);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 168 "../src/tp_4.y"
    {printf("Se declaro la funcion %s\n" , (yyvsp[(2) - (6)].cadena));}
    break;



/* Line 1455 of yacc.c  */
#line 1710 "tp_4.tab.c"
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
#line 232 "../src/tp_4.y"


int yyerror (char *s)  
{
  printf ("%s\n", s);
}


int main (int argc, char const* argv[])
{
  #ifdef BISON_DEBUG
            yydebug = 1;
  #endif

  int flag;
 
  yyin=fopen("archivoFuente.txt","r");
 
  flag=yyparse();
 
  fclose(yyin);
   
  return flag;
}
