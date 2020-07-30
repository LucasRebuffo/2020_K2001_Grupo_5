#ifndef _LIBRERIATP3_H_
#define _LIBRERIATP3_H_


typedef struct Nodo* Lista;
void insertarInicio(Lista * list , char* cadena);
void insertarFinal(Lista* lista , char* cadena);
void mostrar(Lista *list);
void borrarLista (Lista * list);
int hexadecimalToDecimal(char * hexVal);
int octalToDecimal (char* octalVal);
char * sacarParteEntera(char nro[]);
char * sacarMantisa(char nro[]);

#include "LibreriaTp3.c"
#endif