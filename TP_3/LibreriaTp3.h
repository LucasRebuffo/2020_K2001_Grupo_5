#ifndef _LIBRERIATP3_H_
#define _LIBRERIATP3_H_


typedef struct Nodo* Lista;
void insertar(Lista * list , char* cadena);
void mostrar(Lista list);
void borrarLista (Lista * list);
int hexadecimalToDecimal(char * hexVal);

#include "LibreriaTp3.c"
#endif