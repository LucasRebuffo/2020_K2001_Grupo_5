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
palabrasReservadas            auto|break|case|char|const|continue|default|do|else|enum|extern|for|goto|if|long|register|return|short|signed|static|struct|switch|typedef|union|unsigned|void|volatile|while
identificadores               [_a-zA-Z][_a-zA-Z0-9]*
caracteresDePuntuacion        [,\.;:\?\(\)\[\]\{\}]
operadoresDeC                 [=!&\*\+\-/|%><\?]
comentariosMultiple           \/\*(\*+[^\*\/]|[^\*])*\*+\/
comentariosSimple              "//".*  
tipoDeDato 					  "int"|"double"|"float"|"char"
operadorDeAsignacion          "+="|"*="|"-="|"/="|"%="|"<<="|">>="|"&="|"^="|"|="
saltoDeLinea                  \n
otros                         .


%%

{palabrasReservadas}          {strdup(yylval.cadena, yytext); return PALABRA_RESERVADA;}
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
"sizeof"					  {strdup(yylval.cadena, yytext); return SIZEOF;}
{tipoDeDato}				  {strdup(yylval.cadena, yytext); return TIPO_DE_DATO;}
{comentariosMultiple}         {strdup(yylval.cadena, yytext); return COMENTARIO_MULTIPLE;}
{comentariosSimple}           {strdup(yylval.cadena, yytext); return COMENTARIO_SIMPLE;}
{saltoDeLinea}                {numeroDeLinea++ ;}  
{otros}                       {printf("%s NO RECONOCIDO EN EL ANALISIS LEXICO\n", yytext);}



%%
