#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LibreriaTp3.h"

struct Nodo 
{
    char cadena[100];
    struct Nodo * next;
};

typedef struct Nodo* Lista;


void insertarInicio(Lista * list , char* cadena)
{
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    strcpy(nuevo->cadena , cadena);
    nuevo->next =*list; 
    *list = nuevo;

    printf ( "Se agrego la cadena %s a las lista \n", nuevo->cadena);
}

void insertarFinal(Lista* lista , char* cadena)
{
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    strcpy(nuevo->cadena , cadena);
    nuevo->next = NULL;
    if(*lista == NULL )
    {
        nuevo->next =*lista;
        *lista = nuevo;
        printf ( "Se agrego la cadena %s a la lista \n", nuevo->cadena);
    }
    else
    {
        struct Nodo * aux = *lista;
        while(aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = nuevo;
        printf ( "Se agrego la cadena %s a la lista \n", nuevo->cadena);
    }
}

void mostrar(Lista *list)
{
    struct Nodo* aux = *list;
        while(aux !=  NULL )
        {
            printf("%s\n", aux->cadena);
            aux = aux->next;
        }
}

void mostrarEnumerado(Lista *list)
{
    int cont = 1;
    struct Nodo* aux = *list;
        while(aux !=  NULL )
        {
            printf("%d . %s\n", cont, aux->cadena);
            cont++;
            aux = aux->next;
        }
}

void borrarLista (Lista * list)
{
    struct Nodo* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->next;
        free(current);
    }
}

int hexadecimalToDecimal(char * hexVal) 
{    
    int len = strlen(hexVal); 
      
    // Initializing base value to 1, i.e 16^0 
    int base = 1; 
      
    int dec_val = 0; 
      
    // Extracting characters as digits from last character 
    for (int i=len-1; i>=2; i--) 
    {    
        // if character lies in '0'-'9', converting  
        // it to integral 0-9 by subtracting 48 from 
        // ASCII value. 
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
                  
            // incrementing base by power 
            base = base * 16; 
        } 
  
        // if character lies in 'A'-'F' , converting  
        // it to integral 10 - 15 by subtracting 55  
        // from ASCII value 
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
          
            // incrementing base by power 
            base = base*16; 
        } 
    } 
      
    return dec_val; 
} 

int octalToDecimal (char* octalVal)
{
    int len = strlen(octalVal);

    int base = 1;

    int dec_val = 0;

    for (int i=len-1; i>=1; i--) 
    {
         dec_val += (octalVal[i] - 48)*base; 
                  
            
        base = base * 8; 
    }
    return dec_val;
}


char * sacarParteEntera(char nro[])
{
    char delimitador[] = ".";
    char * retorno = strtok(nro, delimitador); 
    return retorno;
}

char * sacarMantisa(char nro[])
{
    char delimitador[] = ".";
    char * retorno = strtok(nro, delimitador); 
    retorno = strtok(NULL, delimitador);
    return retorno;
}