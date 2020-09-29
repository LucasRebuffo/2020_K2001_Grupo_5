%{
  #include <stdio.h>
  #include <math.h>  
  #include <string.h>
  int yylex();
  int yyerror (char *s);
  int yywrap(){
    return (1);
  }

  int nroLinea = 1
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
%token <cadena> TIPO_DE_DATO
%token <cadena> OP_ASIGANCION
%token <cadena> OP_IGUALDAD
%token <cadena> OP_OR
%token <cadena> OP_AND
%token <cadena> OP_RELACIONAL
%token <cadena> SIZEOF
%token <cadena> TIPO_DE_DATO
%token <cadena> OP_INCREMENTO_DECREMENTO
%token <cadena> OP_CORRIMIENTO
%token <cadena> OP_ACCESO
%token <cadena> ESPEC_DE_CLASE
%token <cadena> CALIFICADOR_DE_TIPO
%token <cadena> STRUCT_O_UNION
%token <cadena> ESPECIFICADOR_ENUM
%token <cadena> IF
%token <cadena> SWITCH
%token <cadena> ELSE
%token <cadena> WHILE
%token <cadena> DO
%token <cadena> FOR
%token <cadena> CASE
%token <cadena> DEFAULT
%token <cadena> CONTINUE
%token <cadena> BREAK
%token <cadena> RETURN
%token <cadena> GOTO
%token <entero> ERROR
 
%%

input:    /* vacio */
        | input line
;

line:     '\n'
        | declaracion '\n'
        | experesion '\n'
        | sentencia '\n'
;

expresion:  expAsignacion
            |expresion ',' expAsigancion
;
expAsignacion:  expCondicional
                |expUnaria operAsigancion expAsignacion
;
expCondicional: expOr
                |expOr '?' expresion ':' expCondicional
;
operAsigancion: OP_ASIGANCION
                |'='
;
expOr:  expAnd
        |expOr OP_OR expAnd
;
expAnd: expIgualdad
        |expAnd OP_AND expIgualdad
;
expIgualdad:  expRelacional
              |expIgualdad OP_IGUALDAD expRelacional
;
expRelacional:  expCorrimiento
                |expRelacional OP_RELACIONAL expCorrimiento
                |expRelacional '<' expCorrimiento
                |expRelacional '>' expCorrimiento
;
expCorrimiento:  expAditiva
                |expCorrimiento OP_CORRIMIENTO expAditiva
;
expAditiva: expMultiplicativa
            |expAditiva '+' expMultiplicativa
            |expAditiva '-' expMultiplicativa
;
expMultiplicativa:  expDeConversion
                    |expMultiplicativa '*' expDeConversion
                    |expMultiplicativa '/' expDeConversion
                    |expMultiplicativa '%' expDeConversion
;
expDeConversion:  expUnaria
                  |'(' nombreDeTipo ')' expDeConversion 
;
expUnaria:  expPostfijo
            |OP_INCREMENTO_DECREMENTO expUnaria
            |operUnario expDeConversion
            |SIZEOF expUnaria
            |SIZEOF '(' nombreDeTipo ')'
;
operUnario: '&'
            |'*'
            |'-'
            |'!'
            |'+'
            |'~'
;
expPostfijo:  expPrimaria
              |expPostfijo '[' experesion ']'
              |expPostfijo '(' listaArgumentos ')'
              |expPostfijo '(' ')'
              |expPostfijo '.' IDENTIFICADOR
              |expPostfijo OP_INCREMENTO_DECREMENTO
              |expPostfijo OP_ACCESO
;
listaArgumentos: expAsigancion
                |listaArgumentos ',' expAsigancion
;
expPrimaria:  IDENTIFICADOR
              |CONSTANTE_DECIMAL
              |CONSTANTE_HEXA
              |CONSTANTE_OCTAL
              |CONSTANTE_REAL
              |LITERAL_CADENA
              |'(' expresion ')'
;

declaracion:  especificadoresDeDeclaracion 
              |especificadoresDeDeclaracion listaDeDeclaradores
;
especificadoresDeDeclaracion: especificadorDeClaseDeAlmacenamiento 
                              |especificadorDeClaseDeAlmacenamiento especificadoresDeDeclaracion
                              |especificadorDeTipo 
                              |especificadorDeTipo especificadoresDeDeclaracion
                              |calificadorDeTipo 
                              |calificadorDeTipo especificadoresDeDeclaracion              
;
listaDeDeclaradores:  declarador
                      |listaDeDeclaradores ',' declarador
;
declarador: decla
            |decla '=' inicializador
;
inicializador:  expAsigancion
                |'{' listaDeInicializadores '}'
                |'{' listaDeInicializadores ',' '}'
;
listaDeInicializadores: inicializador
                        |listaDeInicializadores ',' inicializador
;
especificadorDeClaseDeAlmacenamiento: ESPEC_DE_CLASE
;
especificadorDeTipo:  TIPO_DE_DATO
                      |especificadorDeStructOUnion
                      |especificadorDeEnum
                      |nombreDeTypedef
;                                                                                          
calificadorDeTipo:  CALIFICADOR_DE_TIPO
;
especificadorDeStructOUnion:  structOUnion '{' listaDeDeclaracionesStruct '}'
                             |structOUnion IDENTIFICADOR '{' listaDeDeclaracionesStruct '}'
                             |structOUnion IDENTIFICADOR 
;
structOUnion: STRUCT_O_UNION
;
listaDeDeclaracionesStruct: declaracionStruct
                          |listaDeDeclaracionesStruct declaracionStruct
;
declaracionStruct:  listaDeCalificadores declaradoresStruct
;
listaDeCalificadores: especificadorDeTipo 
                     |especificadorDeTipo listaDeCalificadores
                     |calificadorDeTipo 
                     |calificadorDeTipo listaDeCalificadores
;
declaradoresStruct: declaStruct
                    |declaradoresStruct ',' declaStruct
;
declaStruct:   decla
              |':' expresionConstante
              |decla ':' expresionConstante
;
decla:   declaradorDirecto
        |puntero declaradorDirecto                                                           
;
puntero:  '*' listaDeCalificadoresTipo
         |'*'
         |'*' puntero
         |'*' listaDeCalificadoresTipo puntero  
;
listaDeCalificadoresTipo: calificadorDeTipo
                          |listaDeCalificadoresTipo calificadorDeTipo
;
declaradorDirecto:  IDENTIFICADOR
                  |'(' decla ')'
                  |declaradorDirecto '[' ']'
                  |declaradorDirecto '[' expresionConstante ']'
                  |declaradorDirecto '(' listaTiposParametros ')'
                  |declaradorDirecto '(' listaDeIdentifiacadores ')'
;
listaTiposParametros: listaDeParametros
                      |listaDeParametros ',' '.''.''.'                                            
;
listaDeParametros:  declaracionDeParametro
                    |listaDeParametros ',' declaracionDeParametro
;
declaracionDeParametro: especificadoresDeDeclaracion decla 
                        |especificadoresDeDeclaracion 
                        |especificadoresDeDeclaracion declaradorAbstracto
;
listaDeIdentifiacadores:  IDENTIFICADOR
                          |listaDeIdentifiacadores ',' IDENTIFICADOR
;
especificadorDeEnum:  ESPECIFICADOR_ENUM '{' listaDeEnumeradores '}'
                      |ESPECIFICADOR_ENUM IDENTIFICADOR '{' listaDeEnumeradores '}'
                      |ESPECIFICADOR_ENUM IDENTIFICADOR                                                                     
;
listaDeEnumeradores:  enumerador 
                      |listaDeEnumeradores ',' enumerador
;
enumerador: constanteDeEnumeracion
            |constanteDeEnumeracion '=' expresionConstante
;
constanteDeEnumeracion: IDENTIFICADOR
;
nombreDeTypedef:  IDENTIFICADOR
;
nombreDeTipo: listaDeCalificadores
              |listaDeCalificadores declaradorAbstracto
;
declaradorAbstracto:  puntero
                      |declaradorAbstractoDirecto
                      |puntero declaradorAbstractoDirecto
;
declaradorAbstractoDirecto: '(' declaradorAbstracto ')'
                            |'[' ']'
                            |declaradorAbstractoDirecto '[' ']'
                            |'[' expresionConstante ']'
                            |declaradorAbstractoDirecto '[' expresionConstante ']'
                            |'(' ')'
                            |declaradorAbstractoDirecto '(' ')' 
                            |'(' listaTiposParametros ')'
                            |declaradorAbstractoDirecto '(' listaTiposParametros ')'                                                   
;

sentencia:  sentenciaExpresion
            |sentenciaCompuesta
            |sentenciaDeSeleccion
            |sentenciaDeIteracion
            |sentenciaEtiquetada
            |sentenciaDeSalto 
;
sentenciaExpresion: ';'
                    |expresion ';'
;
sentenciaCompuesta: '{' '}'
                    |'{' listaDeDeclaraciones '}'
                    |'{' listaDeSentencias '}'
                    |'{' listaDeDeclaraciones listaDeSentencias '}'
;
listaDeDeclaraciones: declaracion
                     |listaDeDeclaraciones declaracion
;
listaDeSentencias:  sentencia
                    |listaDeSentencias sentencia
;
sentenciaDeSeleccion: IF '(' experesion ')' sentencia
                      |IF '(' experesion ')' sentencia ELSE sentencia 
                      |SWITCH '(' experesion ')' sentencia
                      |WHILE '(' experesion ')' sentencia
                      |DO sentencia WHILE '(' experesion ')' ';'
                      |FOR '(' ';' ';' ')' sentencia
                      |FOR '(' expresion ';' ';' ')' sentencia
                      |FOR '(' ';' expresion ';' ')' sentencia
                      |FOR '(' ';' ';' expresion ')' sentencia
                      |FOR '(' expresion ';' expresion ';' ')' sentencia
                      |FOR '(' expresion ';' ';' expresion ')' sentencia
                      |FOR '(' ';' expresion ';' expresion ')' sentencia 
                      |FOR '(' expresion ';' expresion ';' expresion ')' sentencia                     
;
sentenciaEtiquetada:  CASE expresionConstante ':' sentencia
                      |DEFAULT ':' sentencia
                      |IDENTIFICADOR ':' sentencia
;
sentenciaDeSalto: CONTINUE ';'
                  |BREAK ';'
                  |RETURN ';'
                  |RETURN expresion ';'
                  |GOTO IDENTIFICADOR ';'
;

expresionConstante: expCondicional
;


%%



int main (int argc, char const* argv[])
{

}