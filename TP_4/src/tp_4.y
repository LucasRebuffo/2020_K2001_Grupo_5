%{
  #include <stdio.h>
  #include <math.h>  
  #include <string.h>
  int yylex();
  int yyerror (char *s);
  int yywrap(){
    return (1);
  }

  int nroLinea = 1;
%}

%union {
  long int entero;
  char* cadena;
  double real;
}

%token <cadena> IDENTIFICADOR
%token <cadena> LITERAL_CADENA
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

line:     '\n' {nroLinea++}
        | declaracion '\n' {printf("Se encontro una declaracion en linea %d\n",nroLinea);}
        | expresion '\n'{ printf("Se encontro una expresionen linea %d\n",nroLinea);}
        | sentencia '\n'{ printf("Se encontro una sentenciaen linea %d\n",nroLinea);}
;

expresion:    expAsignacion
            | expresion ',' expAsignacion
;
expAsignacion:    expCondicional
                | expUnaria operAsigancion expAsignacion
;
expCondicional:   expOr
                | expOr '?' expresion ':' expCondicional
;
operAsigancion:   OP_ASIGANCION
                | '='
;
expOr:    expAnd
        | expOr OP_OR expAnd
;
expAnd:   expIgualdad
        | expAnd OP_AND expIgualdad
;
expIgualdad:    expRelacional
              | expIgualdad OP_IGUALDAD expRelacional
;
expRelacional:    expCorrimiento
                | expRelacional OP_RELACIONAL expCorrimiento
                | expRelacional '<' expCorrimiento
                | expRelacional '>' expCorrimiento
;
expCorrimiento:   expAditiva
                | expCorrimiento OP_CORRIMIENTO expAditiva
;
expAditiva:   expMultiplicativa
            | expAditiva '+' expMultiplicativa
            | expAditiva '-' expMultiplicativa
;
expMultiplicativa:    expDeConversion
                    | expMultiplicativa '*' expDeConversion
                    | expMultiplicativa '/' expDeConversion
                    | expMultiplicativa '%' expDeConversion
;
expDeConversion:    expUnaria
                  | '(' nombreDeTipo ')' expDeConversion 
;
expUnaria:    expPostfijo
            | OP_INCREMENTO_DECREMENTO expUnaria
            | operUnario expDeConversion
            | SIZEOF expUnaria
            | SIZEOF '(' nombreDeTipo ')'
;
operUnario:   '&'
            | '*'
            | '-'
            | '!'
            | '+'
            | '~'
;
expPostfijo:    expPrimaria
              | expPostfijo '[' expresion ']'
              | expPostfijo '(' listaArgumentosOP ')'
              | expPostfijo '.' IDENTIFICADOR
              | expPostfijo OP_INCREMENTO_DECREMENTO
              | expPostfijo OP_ACCESO
;
listaArgumentosOP:  listaArgumentos
                  | /* Vacio*/
;
listaArgumentos:    expAsignacion
                  | listaArgumentos ',' expAsignacion
;
expPrimaria:    IDENTIFICADOR
              | CONSTANTE_DECIMAL
              | CONSTANTE_HEXA
              | CONSTANTE_OCTAL
              | CONSTANTE_REAL
              | LITERAL_CADENA
              | '(' expresion ')'
;

declaracion:   especificadoresDeDeclaracion listaDeDeclaradoresOP
;
listaDeDeclaradoresOP:  listaDeDeclaradores
                      | /* Vacio */
;
especificadoresDeDeclaracion:   especificadorDeClaseDeAlmacenamiento especificadoresDeDeclaracionOP
                              | especificadorDeTipo especificadoresDeDeclaracionOP
                              | calificadorDeTipo especificadoresDeDeclaracionOP             
;
especificadoresDeDeclaracionOP:   especificadoresDeDeclaracion
                                | /* Vacio */
;
listaDeDeclaradores:    declarador
                      | listaDeDeclaradores ',' declarador
;
declarador:   decla
            | decla '=' inicializador
;
inicializador:    expAsignacion
                | '{' listaDeInicializadores '}'
                | '{' listaDeInicializadores ',' '}'
;
listaDeInicializadores:   inicializador
                        | listaDeInicializadores ',' inicializador
;
especificadorDeClaseDeAlmacenamiento:   ESPEC_DE_CLASE
;
especificadorDeTipo:    TIPO_DE_DATO
                      | especificadorDeStructOUnion
                      | especificadorDeEnum
                      | nombreDeTypedef
;                                                                                          
calificadorDeTipo:    CALIFICADOR_DE_TIPO
;
especificadorDeStructOUnion:   structOUnion identificadorOP '{' listaDeDeclaracionesStruct '}'
                             | structOUnion IDENTIFICADOR 
;
identificadorOP:  IDENTIFICADOR
                | /* Vacio */
;
structOUnion:   STRUCT_O_UNION
;
listaDeDeclaracionesStruct:   declaracionStruct
                            | listaDeDeclaracionesStruct declaracionStruct
;
declaracionStruct:    listaDeCalificadores declaradoresStruct
;
listaDeCalificadores:  especificadorDeTipo listaDeCalificadoresOP
                     | calificadorDeTipo listaDeCalificadoresOP
;
listaDeCalificadoresOP: listaDeCalificadores  
                      | /* Vacio */
;
declaradoresStruct:   declaStruct
                    | declaradoresStruct ',' declaStruct
;
declaStruct:    decla
              | ':' expresionConstante
              | decla ':' expresionConstante
;
decla:    declaradorDirecto
        | puntero declaradorDirecto                                                           
;
puntero:   '*' listaDeCalificadoresTipoOP
         | '*' listaDeCalificadoresTipoOP puntero  
;
listaDeCalificadoresTipoOP:  listaDeCalificadoresTipo
                           | /* Vacio */ 
;
listaDeCalificadoresTipo:   calificadorDeTipo
                          | listaDeCalificadoresTipo calificadorDeTipo
;
declaradorDirecto:    IDENTIFICADOR
                    | '(' decla ')'
                    | declaradorDirecto '[' expresionConstanteOP ']'
                    | declaradorDirecto '(' listaTiposParametros ')'
                    | declaradorDirecto '(' listaDeIdentifiacadoresOP ')'
;
expresionConstanteOP: expresionConstante
                    | /* Vacio */
;
listaDeIdentifiacadoresOP:  listaDeIdentifiacadores
                          | /* Vacio */
;
listaTiposParametros:   listaDeParametros
                      | listaDeParametros ',' '.''.''.'                                            
;
listaDeParametros:    declaracionDeParametro
                    | listaDeParametros ',' declaracionDeParametro
;
declaracionDeParametro:   especificadoresDeDeclaracion decla  
                        | especificadoresDeDeclaracion declaradorAbstractoOP
;
declaradorAbstractoOP:   declaradorAbstracto
                       | /* Vacio */ 
;
listaDeIdentifiacadores:    IDENTIFICADOR
                          | listaDeIdentifiacadores ',' IDENTIFICADOR
;
especificadorDeEnum:    ESPECIFICADOR_ENUM identificadorOP '{' listaDeEnumeradores '}'
                      | ESPECIFICADOR_ENUM IDENTIFICADOR                                                                     
;
listaDeEnumeradores:    enumerador 
                      | listaDeEnumeradores ',' enumerador
;
enumerador:   constanteDeEnumeracion
            | constanteDeEnumeracion '=' expresionConstante
;
constanteDeEnumeracion:   IDENTIFICADOR
;
nombreDeTypedef:    IDENTIFICADOR
;
nombreDeTipo:    listaDeCalificadores declaradorAbstractoOP
;
declaradorAbstractoOP:  declaradorAbstracto
                      | /* Vacio */
;
declaradorAbstracto:    puntero
                      | declaradorAbstractoDirecto
                      | puntero declaradorAbstractoDirecto
;
declaradorAbstractoDirecto:   '(' declaradorAbstracto ')'
                            | declaradorAbstractoDirectoOP '[' expresionConstanteOP ']'
                            | declaradorAbstractoDirectoOP '(' listaTiposParametrosOP ')'                                                   
;
declaradorAbstractoDirectoOP:   declaradorAbstractoDirecto
                              | /* Vacio */
;
expresionConstanteOP:   expresionConstante
                      | /* Vacio */
;
listaTiposParametrosOP:  listaTiposParametros
                       | /* Vacio */ 
;

sentencia:    sentenciaExpresion
            | sentenciaCompuesta
            | sentenciaDeSeleccion
            | sentenciaDeIteracion
            | sentenciaEtiquetada
            | sentenciaDeSalto 
;
sentenciaExpresion:   ';'
                    | expresion ';'
;
sentenciaCompuesta:  '{' listaDeDeclaracionesOP listaDeSentenciasOP '}'
;
listaDeDeclaracionesOP: listaDeDeclaraciones
                      | /* Vacio */
;
listaDeSentenciasOP:  listaDeSentencias
                    | /* Vacio */
;
listaDeDeclaraciones:  declaracion
                     | listaDeDeclaraciones declaracion
;
listaDeSentencias:    sentencia
                    | listaDeSentencias sentencia
;
sentenciaDeSeleccion:   IF '(' expresion ')' sentencia
                      | IF '(' expresion ')' sentencia ELSE sentencia 
                      | SWITCH '(' expresion ')' sentencia                                  
;
sentenciaDeIteracion:   WHILE '(' expresion ')' sentencia
                      | DO sentencia WHILE '(' expresion ')' ';'
                      | FOR '(' expresionOP ';' expresionOP ';' expresionOP ')' sentencia 
;
expresionOP:  expresion
            | /* Vacio */
;
sentenciaEtiquetada:    CASE expresionConstante ':' sentencia
                      | DEFAULT ':' sentencia
                      | IDENTIFICADOR ':' sentencia
;
sentenciaDeSalto:   CONTINUE ';'
                  | BREAK ';'
                  | RETURN expresionOP ';'
                  | GOTO IDENTIFICADOR ';'
;

expresionConstante:   expCondicional
;


%%

int yyerror (char *s)  
{
  printf ("%s\n", s);
}


int main (int argc, char const* argv[])
{
  #ifdef BISON_DEBUG
        yydebug = 1;
#endif
  yyparse();
}