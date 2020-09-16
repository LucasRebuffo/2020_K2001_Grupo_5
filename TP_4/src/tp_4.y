%{
  #include <stdio.h>
  #include <math.h>  
  #include <string.h>



%}

%union {
  long int entero;
  char* cadena;
  double real;
  
}

%token <cadena> PALABRA_RESERVADA
%token <cadena> IDENTIFICADOR
%token <cadena> LITERAL_CADENA
%token <cadena> COMENTARIO_MULTIPLE
%token <cadena> COMENTARIO_SIMPLE
%token <entero> CONSTANTE_DECIMAL
%token <entero> CONSTANTE_OCTAL
%token <entero> CONSTANTE_HEXA
%token <real>  CONSTANTE_REAL

 
%%



%%



int main (int argc, char const* argv[])
{

}