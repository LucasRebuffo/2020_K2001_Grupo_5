#include <stdlib.h>
#include <stdio.h> 

#ifndef TABLA_H
#define TABLA_H

// PARA DIFERENCIAR LAS VARIABLES DE LAS FUNCIONES
enum {VAR, FUNC};

// ESTRUCTURA PARA GUARDAR LOS PARAMETROS DE LAS FUNCIONES
typedef struct Funcion{
    char*  tipoDatoParam;
    struct Funcion* sig;
} Funcion;

// ESTRUCTURA QUE PERMITE GUARDAR EL VALOR DE LAS VARIABLES 
typedef union TipoValor {
    int      valEnt; 
    double   valReal;
    char*    valChar;
    Funcion* func;
} TipoValor;

// ESTRUCTURA DEL NODO QUE GENERA LA TABLA DE SIMBOLOS
typedef struct Simbolo{
    char* nombre;
    char* tipoDato;
    int   tipoID;
    TipoValor valor;

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