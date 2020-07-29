/*
 Lib2.h
 */
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char * var;
    int apariciones;
    NodoListaCant * sig;
} NodoListaCant;

typedef struct  {
    char * var;
    struct NodoListaOtros * sig;
} NodoListaOtros;


Nodo * crearNodoCant(char * var)
{
    NodoCant * nuevoNodo = (NodoCant *) malloc (sizeof (NodoCant));
    nuevoNodo->var = valor;
    nuevoNodo->apariciones = 1;
    nuevoNodo->sig = NULL;  
}

void agregarAListaCant(char * var, NodoListaCant * lista){
    NodoListaCant * nodo = crearNodoCant(var);
    if (lista->head == NULL) {
        lista->head = nodo;
    } else {
        NodoListaCant * puntero = lista->head;
        while (puntero->sig) {
            puntero = puntero->sig;
        }
        puntero->sig = nodo;
    }
}

Nodo * crearNodoOtros(char * var){
    NodoInts * nuevoNodo = (NodoInts *) malloc (sizeof (NodoCant));
    nuevoNodo->var = valor;
    nuevoNodo->sig = NULL;  
}

void agregarAListaOtros(char * var, NodoListaCant * lista){
    NodoListaCant * nodo = crearNodoCant(var);
    if (lista->head == NULL) {
        lista->head = nodo;
    } else {
        NodoListaCant * puntero = lista->head;
        while (puntero->sig) {
            puntero = puntero->sig;
        }
        puntero->sig = nodo;
    }
}

