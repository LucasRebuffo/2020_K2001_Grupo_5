%{
	#include <stdlib.h>  
	#include "tp_4.tab.h"
	#include <string.h>
%}

constDecimales                [1-9][0-9]*
constOctales                  0[0-7]*
constHexadecimales            0[xX][0-9a-fA-F]+
constReales                   ([0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?)|([0-9]+\.([eE][\+\-]?[0-9]+)?)|([0-9]([eE][\+\-]?[0-9]+)?)
constCaracter                 \'(.|\n)\'
literalCadena                 \"[ -~]*\"
palabrasReservadas            break|case|continue|default|do|else|for|goto|if|return|struct|switch|union|while
identificadores               [_a-zA-Z][_a-zA-Z0-9]*
caracteresDePuntuacion        [,\.;:\?\(\)\[\]\{\}]
operadoresDeC                 [=!&\*\+\-/|%><\?]
comentariosMultiple           \/\*(\*+[^\*\/]|[^\*])*\*+\/
comentariosSimple              "//".*  
tipoDeDato 					  "int"|"double"|"float"|"char"|"void"|"short"|"long"|"signed"|"unsigned"
operadorDeAsignacion          "+="|"*="|"-="|"/="|"%="|"<<="|">>="|"&="|"^="|"|="
especificadorDeClase		  "typedef"|"static"|"auto"|"register"|"extern"	
calificadorDeTipo			  "const"|"volatile"
structOUnion				  "struct"|"union"
especificadorEnum			  "enum"	
saltoDeLinea                  \n
otros                         .


%%

{tipoDeDato}				  {strdup(yylval.cadena, yytext); return TIPO_DE_DATO;}
{especificadorDeClase}        {strdup(yylval.cadena, yytext); return ESPEC_DE_CLASE;}
{calificadorDeTipo}           {strdup(yylval.cadena, yytext); return CALIFICADOR_DE_TIPO;}
{especificadorEnum}           {strdup(yylval.cadena, yytext); return ESPECIFICADOR_ENUM;}
{structOUnion}           	  {strdup(yylval.cadena, yytext); return STRUCT_O_UNION;}
"sizeof"					  {strdup(yylval.cadena, yytext); return SIZEOF;}
{identificadores}             {strdup(yylval.cadena, yytext); return IDENTIFICADOR;}
{literalCadena}               {strdup(yylval.cadena, yytext); return LITERAL_CADENA;}
{constDecimales}              {yylval.entero = atoi(yytext); return CONSTANTE_DECIMAL;}
{constOctales}                {yylval.entero = strtoll(yytext,NULL,8); return CONSTANTE_OCTAL;}
{constHexadecimales}          {yylval.entero = strtol(yytext,NULL,16); return CONSTANTE_HEXA;}
{constReales}                 {yylval.real = atof(yytext); return CONSTANTE_DECIMAL;}
{constCaracter}               {return yytext[0];}
{operadoresDeC}               {return yytext[0];}
{caracteresDePuntuacion}      {return yytext[0];}
"=="|"!="					  {strdup(yylval.cadena, yytext); return OP_IGUALDAD;}
{operadorDeAsignacion}		  {strdup(yylval.cadena, yytext); return OP_ASIGANCION;}
"||"						  {strdup(yylval.cadena, yytext); return OP_OR;}
"&&"						  {strdup(yylval.cadena, yytext); return OP_AND;}
">="|"<="					  {strdup(yylval.cadena, yytext); return OP_RELACIONAL;}
"++"|"--"					  {strdup(yylval.cadena, yytext); return OP_INCREMENTO_DECREMENTO;}
">>"|"<<"					  {strdup(yylval.cadena, yytext); return OP_CORRIMIENTO;}
"->"						  {strdup(yylval.cadena, yytext); return OP_ACCESO;}	
{comentariosMultiple}         {strdup(yylval.cadena, yytext); return COMENTARIO_MULTIPLE;}
{comentariosSimple}           {strdup(yylval.cadena, yytext); return COMENTARIO_SIMPLE;}
{saltoDeLinea}                {numeroDeLinea++ ;}  
{otros}                       {printf("%s NO RECONOCIDO EN EL ANALISIS LEXICO\n", yytext);}



%%
