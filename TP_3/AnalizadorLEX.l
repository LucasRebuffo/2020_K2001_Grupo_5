%option noyywrap

%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

Lista listaIdentificadores = NULL;
Lista listaLiteralesCadenas = NULL;
Lista listaPalabrasReservadas = NULL;
Lista listaConstDecimales = NULL;
Lista listaConstOctales = NULL;
Lista listaConstHexadecimales = NULL;
Lista listaConstReales = NULL;
Lista listaOperadoresDeC = NULL;
Lista listaCaracteresDePuntuacion = NULL;
Lista listaComentarios = NULL;
Lista listaNoReconocidos = NULL;

int numeroDeLinea = 0;
%}

constDecimales                [1-9][0-9]*
constOctales                  0[0-7]*
constHexadecimales            0[xX][0-9a-fA-F]+
constReales                   [0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)?
constCaracter                 '[ -~]'|'\\[abefnrtv\\\'\"\?]'
literalCadena                 \"[ -~]*\"
palabrasReservadas            auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
identificadores               [_a-zA-Z][_a-zA-Z0-9]*
caracteresDePuntuacion        [,\.;:\?\(\)\[\]\{\}]
operadoresDeC                 [=!&\*\+\-/|%><\?]
comentarios                   \/\*(\*+[^\*\/]|[^\*])*\*+\/
saltoDeLinea                  \n
otros                         .

%%

{identificadores}             {printf("Se encontro un identificador");}
{literalCadena}               {printf("Se encontro un literal cadena");}
{palabrasReservadas}          {printf("Se encontro una palabra reservada");}
{constDecimales}              {printf("Se encontro una constante decimal");}
{constOctales}                {printf("Se encontro una constante octal");}
{constHexadecimales}          {printf("Se encontro una constante hexa");}
{constReales}                 {printf("Se encontro una constante real");}
{operadoresDeC}               {printf("Se encontro un operador");}
{caracteresDePuntuacion}      {printf("Se encontro un caracter de puntuacion");}
{comentarios}                 {printf("Se encontro un comentario");}
{saltoDeLinea}                {numeroDeLinea++ ; printf("Pasamos a la linea %d",numeroDeLinea);}  
{otros}                       {printf("Se encontro una cadena no reconocida");}

%%

int main() 
{
    yyin = fopen("entrada.txt", "r"); 
    yyout = fopen("salida.txt", "w");
    yylex();

return 0;
}
