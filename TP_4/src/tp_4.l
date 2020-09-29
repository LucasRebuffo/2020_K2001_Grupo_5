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
palabrasReservadas            break|case|continue|default|do|else|for|goto|if|return|switch|while
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

{tipoDeDato}				  {yylval.cadena=strdup(yytext); return TIPO_DE_DATO;}
{especificadorDeClase}        {yylval.cadena=strdup(yytext); return ESPEC_DE_CLASE;}
{calificadorDeTipo}           {yylval.cadena=strdup(yytext); return CALIFICADOR_DE_TIPO;}
{especificadorEnum}           {yylval.cadena=strdup(yytext); return ESPECIFICADOR_ENUM;}
if					          {yylval.cadena=strdup(yytext); return IF;}
else				          {yylval.cadena=strdup(yytext); return ELSE;}
switch			              {yylval.cadena=strdup(yytext); return SWITCH;}
while				          {yylval.cadena=strdup(yytext); return WHILE;}
for					          {yylval.cadena=strdup(yytext); return FOR;}
do					          {yylval.cadena=strdup(yytext); return DO;}
case				          {yylval.cadena=strdup(yytext); return CASE;}
default				          {yylval.cadena=strdup(yytext); return DEFAULT;}
continue			          {yylval.cadena=strdup(yytext); return CONTINUE;}
break				          {yylval.cadena=strdup(yytext); return BREAK;}
return				          {yylval.cadena=strdup(yytext); return RETURN;}
goto				          {yylval.cadena=strdup(yytext); return GOTO;}
{structOUnion}           	  {yylval.cadena=strdup(yytext); return STRUCT_O_UNION;}
"sizeof"					  {yylval.cadena=strdup(yytext); return SIZEOF;}
{identificadores}             {yylval.cadena=strdup(yytext); return IDENTIFICADOR;}
{literalCadena}               {yylval.cadena=strdup(yytext); return LITERAL_CADENA;}
{constDecimales}              {yylval.entero = atoi(yytext); return CONSTANTE_DECIMAL;}
{constOctales}                {yylval.entero = strtoll(yytext,NULL,8); return CONSTANTE_OCTAL;}
{constHexadecimales}          {yylval.entero = strtol(yytext,NULL,16); return CONSTANTE_HEXA;}
{constReales}                 {yylval.real = atof(yytext); return CONSTANTE_DECIMAL;}
{constCaracter}               {return yytext[0];}
{operadoresDeC}               {return yytext[0];}
{caracteresDePuntuacion}      {return yytext[0];}
"=="|"!="					  {yylval.cadena=strdup(yytext); return OP_IGUALDAD;}
{operadorDeAsignacion}		  {yylval.cadena=strdup(yytext); return OP_ASIGANCION;}
"||"						  {yylval.cadena=strdup(yytext); return OP_OR;}
"&&"						  {yylval.cadena=strdup(yytext); return OP_AND;}
">="|"<="					  {yylval.cadena=strdup(yytext); return OP_RELACIONAL;}
"++"|"--"					  {yylval.cadena=strdup(yytext); return OP_INCREMENTO_DECREMENTO;}
">>"|"<<"					  {yylval.cadena=strdup(yytext); return OP_CORRIMIENTO;}
"->"						  {yylval.cadena=strdup(yytext); return OP_ACCESO;}	
{comentariosMultiple}         {yylval.cadena=strdup(yytext); return COMENTARIO_MULTIPLE;}
{comentariosSimple}           {yylval.cadena=strdup(yytext); return COMENTARIO_SIMPLE;}
{saltoDeLinea}                {}  
{otros}                       {printf("%s NO RECONOCIDO EN EL ANALISIS LEXICO\n", yytext);}



%%
