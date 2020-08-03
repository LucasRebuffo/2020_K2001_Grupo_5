%option noyywrap

%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

int numeroDeLinea = 1;

//([0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?)|([0-9]+\.([eE][\+\-]?[0-9]+)?)|([0-9]([eE][\+\-]?[0-9]+)?)
%}


DECIMAL [0-9]
constDecimales                [1-9][0-9]*
constOctales                  0[0-7]*
constHexadecimales            0[xX][0-9a-fA-F]+
constReales                   ([0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?)|([0-9]+\.([eE][\+\-]?[0-9]+)?)|([0-9]([eE][\+\-]?[0-9]+)?)
constCaracter                 \'(.|\n)\'
literalCadena                 \"[ -~]*\"
palabrasReservadas            auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
identificadores               [_a-zA-Z][_a-zA-Z0-9]*
caracteresDePuntuacion        [,\.;:\?\(\)\[\]\{\}]
operadoresDeC                 [=!&\*\+\-/|%><\?]
comentariosMultiple           \/\*(\*+[^\*\/]|[^\*])*\*+\/
comentariosSimple              "//".*  
saltoDeLinea                  \n
otros                         [.]*

%%

{palabrasReservadas}          {insertarEnlista3(&listaPalabrasReservadas , yytext);}
{identificadores}             {insertarEnlista1(&listaIdentificadores , yytext);}
{literalCadena}               {insertarEnlista2(&listaLiteralesCadenas , yytext);}
{constDecimales}              {insertarEnlista4(&listaConstantesDecimales , yytext);}
{constOctales}                {insertarEnlista3(&listaConstantesOctales , yytext);}
{constHexadecimales}          {fprintf(yyout, "Se encontro una constante hexa |%s|\n",yytext);}
{constReales}                 {fprintf(yyout, "Se encontro una constante real |%s|\n",yytext);}
{constCaracter}               {fprintf(yyout, "Se encontro una constante caracter |%s|\n",yytext);}
{operadoresDeC}               {fprintf(yyout, "Se encontro un operador |%s|\n",yytext);}
{caracteresDePuntuacion}      {fprintf(yyout, "Se encontro un caracter de puntuacion |%s|\n",yytext);}
{comentariosMultiple}         {fprintf(yyout, "Se encontro un comentario |%s|\n",yytext);}
{comentariosSimple}           {fprintf(yyout, "Se encontro un comentario |%s|\n",yytext);}
{saltoDeLinea}                {numeroDeLinea++ ; fprintf(yyout, "Pasamos a la linea %d\n",numeroDeLinea);}  
{otros}                       {fprintf(yyout, "Se encontro una cadena no reconocida |%s|\n",yytext);}

%%

int main() 
{
    yyin = fopen("entrada.txt", "r"); 
    yyout = fopen("salida.txt", "w");
    FILE* reporte = fopen("Reporte.txt", "w")
    yylex();

    generarReporte(reporte);

    fclose(yyin);
    fclose(yyout);
    fclose(reporte);

    return 0;
}
