#ifndef _LIBRERIATP3_H_
#define _LIBRERIATP3_H_


typedef struct Nodo* Lista;
void insertarInicio(Lista * list , char* cadena);
void insertarFinal(Lista* lista , char* cadena);
void mostrar(Lista *list);
void borrarLista (Lista * list);
int hexadecimalToDecimal(char * hexVal);
int octalToDecimal (char* octalVal);
int sacarParteEntera(float numero);
float sacarMantisa(float numero);
void buscarLista(Lista *lista, char* valor);
void insertaOrdenado(Lista *lista, char *x);

#include "LibreriaTp3.c"
#endif