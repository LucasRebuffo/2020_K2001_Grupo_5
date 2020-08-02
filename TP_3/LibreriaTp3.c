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

void buscarLista(Lista *lista, char* valor)
{
    struct Nodo* aux = *lista;
    int ok = 0;
    while(aux != NULL && !ok)
    {
        if (strcmp(aux->cadena ,valor) == 0) 
        {
        ok = 1;
        } 
        else 
        {
        aux=aux->next;
        }
    }

    if(ok == 1)
    {
        printf("Se encontro la cadena %s\n", aux->cadena);
    }
    else
    {
        printf("No se encontro la cadena\n");
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
        else if (hexVal[i]>='A' && hexVal[i]<='F' ) 
        { 
            dec_val += (hexVal[i] - 55)*base; 
          
            // incrementing base by power 
            base = base*16; 
        } 
        else if (hexVal[i]>='a' && hexVal[i]<='f')
        {
             dec_val += (hexVal[i] - 87)*base; 
          
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

int sacarParteEntera(float real)
{
    float parteEntera;
    modff(real, &parteEntera);
    int retorno = (int)parteEntera;
    return retorno;
}

float sacarMantisa(float real)
{
    float parteDeciamal = modff(real,NULL);
    return parteDeciamal;
}

void insertaOrdenado(Lista *lista, char *x) 
{
  struct Nodo *nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
  strcpy(nuevo->cadena, x);
  nuevo->next = NULL;

  if(*lista == NULL || strcmp(nuevo->cadena , (*lista)->cadena) < 0 )
  {
      nuevo->next = *lista;
      *lista = nuevo;
  }
  else
  {
      struct Nodo *aux = *lista;
      while(aux->next != NULL && strcmp(aux->next->cadena , nuevo->cadena) < 0)
      {
          aux = aux->next;
      }
      if(aux->next != NULL)
      {
          nuevo->next = aux->next;
      }
      aux->next = nuevo;
  }
}

// -------------------------------------------------------------------------------------
// Para la lista de indentificadores 
struct Nodo1
{
    char identificador[50+1];
    int repeticiones;
    struct Nodo1 *sig;
}Nodo1;

typedef struct Nodo1* Lista1;

struct Nodo1 * crearNodo1(char *identificador)
{
    struct Nodo1 *nuevo = (struct Nodo1*)malloc(sizeof(struct Nodo1));
    strcpy(nuevo->identificador,identificador);
    nuevo->repeticiones = 1;
    nuevo->sig = NULL;
    return nuevo;
}

int estaEnLista1(Lista1 *lista, char *identificador)
{
    struct Nodo1* aux = *lista;
    int ok = 0;
    while(aux != NULL && !ok)
    {
        if (strcmp(aux->identificador ,identificador) == 0) 
        {
        ok = 1;
        } 
        else 
        {
        aux=aux->sig;
        }
    }

    return ok;
}

void insertarEnLista1(Lista1 * lista, char *identificador)
{
    if (estaEnLista1(lista , identificador) == 0)
    {
        struct Nodo1 * nuevo = crearNodo1(identificador);

        if(*lista == NULL || strcmp(nuevo->identificador , (*lista)->identificador) < 0 )
        {
            nuevo->sig = *lista;
            *lista = nuevo;
        }
        else
        {
            struct Nodo1 *aux = *lista;
            while(aux->sig != NULL && strcmp(aux->sig->identificador , nuevo->identificador) < 0)
            {
            aux = aux->sig;
            }
            if(aux->sig != NULL)
            {
            nuevo->sig = aux->sig;
            }
            aux->sig = nuevo;
        }

    }
    else
    {
        struct Nodo1* aux = *lista;
        while(strcmp(aux->identificador, identificador) != 0)
        {
            aux = aux->sig;
        }
        aux->repeticiones++;
    }
    
}

void mostrarLista1(Lista1 *list)
{
    struct Nodo1* aux = *list;
        while(aux !=  NULL )
        {
            printf("El identificador %s se repitio %d veces\n", aux->identificador, aux->repeticiones);
            aux = aux->sig;
        }
}

// ---------------------------------------------------------------------------
// Para la lista de literales cadena

struct Nodo2 
{
    char literalCadena[200+1];
    int longitudDeLiteralCadena;
    struct Nodo2 * sig;
};

typedef struct Nodo2 * Lista2;

struct Nodo2 * crearNodo2(char * literalCadena)
{
    struct Nodo2 *nuevo = (struct Nodo2*)malloc(sizeof(struct Nodo2));
    strcpy(nuevo->literalCadena, literalCadena);
    nuevo->longitudDeLiteralCadena = strlen(literalCadena)-1;
    nuevo->sig = NULL;
    return nuevo; 
}

void insertarEnLista2(Lista2 * lista , char *literalCadena)
{
    struct Nodo2 * nuevo = crearNodo2(literalCadena);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
    }
    else
    {
        struct Nodo2 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void mostrarLista2(Lista2 *list)
{
    struct Nodo2* aux = *list;
        while(aux !=  NULL )
        {
            printf("El literal cadena %s tiene longitud %d\n", aux->literalCadena, aux->longitudDeLiteralCadena);
            aux = aux->sig;
        }
}

// --------------------------------------------------------------------------------------------------
//  Lista de constantes octales 

struct Nodo3 
{
    char constanteOctal[100+1];
    int valorDecimal;
    struct Nodo3* sig;
};

typedef struct Nodo3 * Lista3;

struct Nodo3 * crearNodo3(char *constanteOctal)
{
    struct Nodo3 * nuevo = (struct Nodo3 *) malloc(sizeof(struct Nodo3));
    strcpy(nuevo->constanteOctal , constanteOctal);
    nuevo->valorDecimal = octalToDecimal(constanteOctal);
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista3(Lista3 *lista , char *constanteOctal)
{
    struct Nodo3 *nuevo = crearNodo3(constanteOctal);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
    }
    else
    {
        struct Nodo3 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void mostrarLista3(Lista3 *lista)
{
    struct Nodo3* aux = *lista;
        while(aux !=  NULL )
        {
            printf("La constante octal es |%s| su valor decimal es |%d|\n", aux->constanteOctal, aux->valorDecimal);
            aux = aux->sig;
        }
}

// ------------------------------------------------------------------------------
// Lista de constantes hexadecimales

struct Nodo4 
{
    char constanteHexa[100+1];
    int valorDecimal;
    struct Nodo4* sig;
};

typedef struct Nodo4 * Lista4;

struct Nodo4 * crearNodo4(char *constanteHexa)
{
    struct Nodo4 * nuevo = (struct Nodo4 *)malloc(sizeof(struct Nodo4));
    strcpy(nuevo->constanteHexa, constanteHexa);
    nuevo->valorDecimal = hexadecimalToDecimal(constanteHexa);
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista4(Lista4 *lista,char *constanteHexa)
{
    struct Nodo4 * nuevo = crearNodo4(constanteHexa);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
    }
    else
    {
        struct Nodo4 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void mostrarLista4(Lista4 *lista)
{
    struct Nodo4* aux = *lista;
        while(aux !=  NULL )
        {
            printf("La constante hexa es |%s| su valor decimal es |%d|\n", aux->constanteHexa, aux->valorDecimal);
            aux = aux->sig;
        }
}

// ---------------------------------------------------------------------
// Lista de constantes decimales

struct Nodo5
{
    int constanteDecimal;
    struct Nodo5 * sig;
};

typedef struct Nodo5 * Lista5;

struct Nodo5 * crearNodo5(int constanteDecimal)
{
    struct Nodo5 * nuevo = (struct Nodo5 *)malloc(sizeof(struct Nodo5));
    nuevo->constanteDecimal = constanteDecimal;
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista5(Lista5 *lista, int constanteDecimal)
{
    struct Nodo5 * nuevo = crearNodo5(constanteDecimal);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
    }
    else
    {
        struct Nodo5 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void mostrarLista5(Lista5 *lista)
{
    struct Nodo5* aux = *lista;
    int acum = 0;
        while(aux !=  NULL )
        {
            printf("La constante decimal es |%d|\n", aux->constanteDecimal);
            acum = acum + aux->constanteDecimal;
            aux = aux->sig;
        }
        printf("La suma total de las constantes es |%d| \n", acum);
}

// -------------------------------------------------------------------
// Lista de constantes reales

struct Nodo6
{
    float constanteReal;
    int parteEntera;
    float mantisa;
    struct Nodo6 * sig;
};

typedef struct Nodo6 * Lista6;

struct Nodo6 * crearNodo6(double constanteReal)
{
    struct Nodo6 *nuevo = (struct Nodo6 *)malloc(sizeof(struct Nodo6));
    nuevo->constanteReal = constanteReal;
    nuevo->parteEntera = sacarParteEntera(constanteReal);
    nuevo->mantisa = sacarMantisa(constanteReal);
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista6 (Lista6 *lista , double constanteReal)
{
    struct Nodo6 * nuevo = crearNodo6(constanteReal);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
    }
    else
    {
        struct Nodo6 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void mostrarLista6(Lista6 *lista)
{
    struct Nodo6* aux = *lista;
        while(aux !=  NULL )
        {
            printf("La constante decimal es |%f| , su parte real es |%d| y su mantisa es |%f| \n", aux->constanteReal , aux->parteEntera , aux->mantisa);
            aux = aux->sig;
        }   
}

// ------------------------------------------------------
// Lista de constantes caracter 

