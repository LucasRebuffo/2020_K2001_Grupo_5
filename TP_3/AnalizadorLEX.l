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

{palabrasReservadas}          {insertarEnLista11(&listaPalabrasReservadas , yytext);}
{identificadores}             {insertarEnLista1(&listaIdentificadores , yytext);}
{literalCadena}               {insertarEnLista2(&listaLiteralesCadenas , yytext);}
{constDecimales}              {insertarEnLista5(&listaConstDecimales , yytext);}
{constOctales}                {insertarEnLista3(&listaConstOctales , yytext);}
{constHexadecimales}          {insertarEnLista4(&listaConstHexadecimales , yytext);}
{constReales}                 {insertarEnLista6(&listaConstReales , yytext);}
{constCaracter}               {insertarEnLista7(&listaConstCaracter , yytext);}
{operadoresDeC}               {insertarEnLista8(&listaOperadoresDeC , yytext);}
{caracteresDePuntuacion}      {insertarEnLista8(&listaCaracteresDePuntuacion , yytext);}
{comentariosMultiple}         {insertarEnLista9(&listaComentarios , yytext);}
{comentariosSimple}           {insertarEnLista9(&listaComentarios , yytext);}
{saltoDeLinea}                {numeroDeLinea++ ;}  
{otros}                       {insertarEnLista10(&listaNoReconocidos , yytext , numeroDeLinea);}

%%

int main() 
{
    yyin = fopen("entrada.txt", "r"); 
    yyout = fopen("salida.txt", "w");
    FILE* reporte = fopen("Reporte.txt", "w");
    yylex();

    generarReporte(reporte);

    fclose(yyin);
    fclose(yyout);
    fclose(reporte);

    return 0;
}
