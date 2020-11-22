#include <stdlib.h>
#include <stdio.h> 

#ifndef TABLA_H
#define TABLA_H

// PARA DIFERENCIAR LAS VARIABLES DE LAS FUNCIONES
enum {VAR, FUNC};

// ESTRUCTURA PARA GUARDAR LOS PARAMETROS DE LAS FUNCIONES
typedef struct Funcion{
    char*  tipoDatoParam; //int f (int a, float b, char c) para este ejemplo la lista guardaria ["int"] -> ["float"] -> ["char"]
    struct Funcion* sig;
} Funcion; // Es un nodo de la lista de funcion

// ESTRUCTURA QUE PERMITE GUARDAR EL VALOR DE LAS VARIABLES 
typedef union TipoValor {
    int      valEnt; 
    double   valReal;
    char*    valChar;
    Funcion* func; // func -----> [] (esta lista esta conformada por nodos de tipo Funcion)
} TipoValor;

// ESTRUCTURA DEL NODO QUE GENERA LA TABLA DE SIMBOLOS
typedef struct Simbolo{ // Es un nodo de la lista de Simbolos de la TS
    char* nombre; // Identificador
    char* tipoDato; // Tipo de dato propiamente dicho (si es una variable, el tipo de la variable, y si es una funcion el tipo de dato que retorna dicha funcion)
    int   tipoID; // Tiene que ver con el enum del principio enum {VAR, FUNC}; (para las variables es 1 y para las funciones es 2). En el .l se enumeraban los tipos de datos y aca se enumeran los tipos de identificadores (variables o funcioens)
    TipoValor valor; // Es el valor propiamente dicho; valor semantico(si es una variable puede ser entero, real, caracter o string) o si es una funcion va a ser una lista con los nombres de los parametros

    struct Simbolo* sig;  
} Simbolo;


Simbolo* crearSimbolo(char*, char*, int); // CREA UNA FILA DE LA TABLA DE SIMBOLOS
void     insertarSimbolo(Simbolo*); // AGREGA LA FILA A LA TABLA
Funcion* crearParametro(char*); // CREA UN PARAMETRO DE UNA FUNCIÓN
void     insertarParametro(Funcion**, Funcion*); // INSERTA UN PARAMETRO DENTRO DE UNA FUNCIÓN
Simbolo* devolverSimbolo(char*); // OBTIENE A PARTIR DEL ID UN ELEMNTO DE LA TABLA DE SIMBOLOS
void     mostrarTabla(FILE*); // MUESTRA LA TABLA COMPLETA
void     mostrarParametros(FILE*, Funcion*); // MUESTRA UNO A UNO LOS PARAMETROS DE UNA FUNCIÓN
char*    toUpper(char*); // LLEVA UNA CADENA DE CARACTERES A MAYÚSCULAS

// LA PROPIA TABLA DE SIMBOLOS
extern Simbolo* tablaSimbolos;

#endif