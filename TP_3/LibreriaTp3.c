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

void imprimirLista1(Lista1 *list , FILE* f)
{
    struct Nodo1* aux = *list;
        while(aux !=  NULL )
        {
            fprintf(f ,"El identificador %s se repitio %d veces\n", aux->identificador, aux->repeticiones);
            aux = aux->sig;
        }
}

void borrarLista1(Lista1 * list)
{
    struct Nodo1* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
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
            printf("El literal cadena |%s| tiene longitud %d\n", aux->literalCadena, aux->longitudDeLiteralCadena);
            aux = aux->sig;
        }
}

void imprimirLista2(Lista2 *list , FILE* f)
{
    struct Nodo2* aux = *list;
        while(aux !=  NULL )
        {
            fprintf(f,"El literal cadena |%s| tiene longitud %d\n", aux->literalCadena, aux->longitudDeLiteralCadena);
            aux = aux->sig;
        }
}

void borrarLista2(Lista2 * list)
{
    struct Nodo2* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
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

void imprimirLista3(Lista3 *lista , FILE* f)
{
    struct Nodo3* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f ,"La constante octal es |%s| su valor decimal es |%d|\n", aux->constanteOctal, aux->valorDecimal);
            aux = aux->sig;
        }
}

void borrarLista3(Lista3 * list)
{
    struct Nodo3* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
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

void imprimirLista4(Lista4 *lista, FILE* f)
{
    struct Nodo4* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f, "La constante hexa es |%s| su valor decimal es |%d|\n", aux->constanteHexa, aux->valorDecimal);
            aux = aux->sig;
        }
}

void borrarLista4(Lista4 * list)
{
    struct Nodo4* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
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

struct Nodo5 * crearNodo5(char *constanteDecimal)
{
    struct Nodo5 * nuevo = (struct Nodo5 *)malloc(sizeof(struct Nodo5));
    int numero = atoi(constanteDecimal);
    nuevo->constanteDecimal = numero;
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista5(Lista5 *lista, char *constanteDecimal)
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

void imprimirLista5(Lista5 *lista, FILE* f)
{
    struct Nodo5* aux = *lista;
    int acum = 0;
        while(aux !=  NULL )
        {
            fprintf(f,"La constante decimal es |%d|\n", aux->constanteDecimal);
            acum = acum + aux->constanteDecimal;
            aux = aux->sig;
        }
        fprintf(f,"La suma total de las constantes es |%d| \n", acum);
}

void borrarLista5(Lista5 * list)
{
    struct Nodo5* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
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

struct Nodo6 * crearNodo6(char *constanteReal)
{
    struct Nodo6 *nuevo = (struct Nodo6 *)malloc(sizeof(struct Nodo6));
    float numero = atof(constanteReal);
    nuevo->constanteReal = numero;
    nuevo->parteEntera = (int)numero;
    nuevo->mantisa = numero - ((int)numero);
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista6 (Lista6 *lista , char *constanteReal)
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

void imprimirLista6(Lista6 *lista , FILE* f)
{
    struct Nodo6* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f , "La constante decimal es |%f| , su parte real es |%d| y su mantisa es |%f| \n", aux->constanteReal , aux->parteEntera , aux->mantisa);
            aux = aux->sig;
        }   
}

void borrarLista6(Lista6 * list)
{
    struct Nodo6* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
}
// ------------------------------------------------------
// Lista de constantes caracter 

struct Nodo7 
{
    char constanteCaracter[1+1];
    struct Nodo7 * sig;
};

typedef struct Nodo7 * Lista7;

struct Nodo7 * crearNodo7(char *constanteCaracter)
{
    struct Nodo7 *nuevo = (struct Nodo7 *)malloc(sizeof(struct Nodo7));
    strcpy(nuevo->constanteCaracter , constanteCaracter);
    nuevo->sig = NULL;
    return nuevo;
}

int estaEnLista7(Lista7 *lista , char *constanteCaracter)
{
    struct Nodo7* aux = *lista;
    int ok = 0;
    while(aux != NULL && !ok)
    {
        if (strcmp(aux->constanteCaracter ,constanteCaracter) == 0) 
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

void insertarEnLista7(Lista7 *lista , char *constanteCaracter)
{
    if (estaEnLista7(lista , constanteCaracter) == 0)
    {
        struct Nodo7 * nuevo = crearNodo7(constanteCaracter);

        if(*lista == NULL )
        {
            nuevo->sig =*lista;
            *lista = nuevo;
        }
        else
        {
            struct Nodo7 * aux = *lista;
            while(aux->sig != NULL)
            {
                aux = aux->sig;
            }
            aux->sig = nuevo;
        }
    } 
}

void mostrarLista7(Lista7 *list)
{
    int cont = 1;
    struct Nodo7* aux = *list;
        while(aux !=  NULL )
        {
            printf("%d . %s\n", cont, aux->constanteCaracter);
            cont++;
            aux = aux->sig;
        }
}

void imprimirLista7(Lista7 *list , FILE* f)
{
    int cont = 1;
    struct Nodo7* aux = *list;
        while(aux !=  NULL )
        {
            fprintf(f ,"%d . %s\n", cont, aux->constanteCaracter);
            cont++;
            aux = aux->sig;
        }
}

void borrarLista7(Lista7 * list)
{
    struct Nodo7* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
}
// --------------------------------------------------------------------------------
// Lista de operedores y cacracteres de puntuacion

struct Nodo8 
{
    char operador_caracterPutnc[1+1];
    int repeticiones;
    struct Nodo8 * sig;
};

typedef struct Nodo8 * Lista8;

struct Nodo8 * crearNodo8(char *caracter)
{
    struct Nodo8 * nuevo = (struct Nodo8 *)malloc(sizeof(struct Nodo8));
    strcpy(nuevo->operador_caracterPutnc, caracter);
    nuevo->repeticiones = 1;
    nuevo->sig = NULL;
    return nuevo;
}

int estaEnLista8(Lista8 *lista , char *caracter)
{
    struct Nodo8* aux = *lista;
    int ok = 0;
    while(aux != NULL && !ok)
    {
        if (strcmp(aux->operador_caracterPutnc ,caracter) == 0) 
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

void insertarEnLista8(Lista8 *lista , char *caracter)
{
    if (estaEnLista8(lista , caracter) == 0)
    {
        struct Nodo8 * nuevo = crearNodo8(caracter);

        if(*lista == NULL )
        {
            nuevo->sig =*lista;
            *lista = nuevo;
        }
        else
        {
            struct Nodo8 * aux = *lista;
            while(aux->sig != NULL)
            {
                aux = aux->sig;
            }
            aux->sig = nuevo;
        }      

    }
    else
    {
        struct Nodo8* aux = *lista;
        while(strcmp(aux->operador_caracterPutnc, caracter) != 0)
        {
            aux = aux->sig;
        }
        aux->repeticiones++;
    }
}

void mostrarLista8(Lista8 *lista)
{
    struct Nodo8* aux = *lista;
        while(aux !=  NULL )
        {
            printf("El caracter de puntuacion/operador |%s| se repite |%d| veces\n", aux->operador_caracterPutnc , aux->repeticiones);
            aux = aux->sig;
        }   
}

void imprimirLista8(Lista8 *lista , FILE* f)
{
    struct Nodo8* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f ,"El caracter de puntuacion/operador |%s| se repite |%d| veces\n", aux->operador_caracterPutnc , aux->repeticiones);
            aux = aux->sig;
        }   
}

void borrarLista8(Lista8 * list)
{
    struct Nodo8* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
}
// -------------------------------------------------------------------------------------------------
// Lista de comentarios 

struct Nodo9
{
    char comentario[300+1];
    char tipo[14+1];
    struct Nodo9 * sig;
};

typedef struct Nodo9 * Lista9;

struct Nodo9 * crearNodo9(char *comentario)
{
    struct Nodo9 * nuevo = (struct Nodo9 *)malloc(sizeof(struct Nodo9));
    strcpy(nuevo->comentario, comentario);
    if(comentario[1] == '*' && comentario[0] == '/')
    {
        strcpy(nuevo->tipo, "multiple linea");
    }
    else
    {
        strcpy(nuevo->tipo , "simple");
    }
    nuevo->sig = NULL;
    return nuevo;
}

void insertarEnLista9(Lista9 *lista, char *comentario)
{
    struct Nodo9 * nuevo = crearNodo9(comentario);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
        
    }
    else
    {
        struct Nodo9 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
        
    }
}

void mostrarLista9(Lista9 *lista)
{
    struct Nodo9* aux = *lista;
        while(aux !=  NULL )
        {
            printf("El comentario |%s| es |%s|\n", aux->comentario , aux->tipo);
            aux = aux->sig;
        } 
}

void imprimirLista9(Lista9 *lista , FILE* f)
{
    struct Nodo9* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f,"El comentario |%s| es |%s|\n", aux->comentario , aux->tipo);
            aux = aux->sig;
        } 
}

void borrarLista9(Lista9 * list)
{
    struct Nodo9* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
}
// -------------------------------------------------------------------------------------------------
// Lista de caracteres no reconocidos

struct Nodo10
{
    char noReconocido[200+1];
    int nroDeLinea;
    struct Nodo10 *sig;
};

typedef struct Nodo10 * Lista10;

struct Nodo10 * crearNodo10(char *noReconocido , int nroDeLinea)
{
    struct Nodo10 * nuevo = (struct Nodo10 *)malloc(sizeof(struct Nodo10));
    strcpy(nuevo->noReconocido , noReconocido);
    nuevo->nroDeLinea = nroDeLinea;
    nuevo->sig = NULL;
    return nuevo;    
}

void insertarEnLista10(Lista10 *lista , char *noReconocido , int nroDeLinea)
{
    struct Nodo10 * nuevo = crearNodo10(noReconocido , nroDeLinea);

    if(*lista == NULL )
    {
        nuevo->sig =*lista;
        *lista = nuevo;
        
    }
    else
    {
        struct Nodo10 * aux = *lista;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
        
    }   
}

void mostrarLista10(Lista10 *lista)
{
    struct Nodo10* aux = *lista;
        while(aux !=  NULL )
        {
            printf("Esto no es reconocible |%s| en la linea |%d| \n", aux->noReconocido , aux->nroDeLinea);
            aux = aux->sig;
        }    
}

void imprimirLista10(Lista10 *lista , FILE* f)
{
    struct Nodo10* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f,"Esto no es reconocible |%s| en la linea |%d| \n", aux->noReconocido , aux->nroDeLinea);
            aux = aux->sig;
        }    
}

void borrarLista10(Lista10 * list)
{
    struct Nodo10* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
}

// -----------------------------------------------------------------------------------------
// Lista de palabras reservadas

struct Nodo11 
{
    char cadena[50];
    struct Nodo11 * sig;
};

typedef struct Nodo11* Lista11;

struct Nodo11* crearNodo11(char *palabraReservada)
{
    struct Nodo11 *nuevo = (struct Nodo11 *)malloc(sizeof(struct Nodo11));
    strcpy(nuevo->cadena , palabraReservada);
    nuevo->sig = NULL;
    return nuevo;
}

void imprimirLista11(Lista11 *lista , FILE* f)
{
    struct Nodo11* aux = *lista;
        while(aux !=  NULL )
        {
            fprintf(f,"Esto es una palabra reservada : |%s| \n", aux->cadena);
            aux = aux->sig;
        }    
}

int estaEnLista11(Lista11 *lista , char *palabraReservada)
{
    struct Nodo11* aux = *lista;
    int ok = 0;
    while(aux != NULL && !ok)
    {
        if (strcmp(aux->cadena ,palabraReservada) == 0) 
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

void insertarEnLista11 (Lista11 *lista , char *palabraReservada)
{
    if ( estaEnLista11(lista , palabraReservada) == 0)
    {
        struct Nodo11 *nuevo = crearNodo11(palabraReservada);

        if(*lista == NULL )
        {
            nuevo->sig =*lista;
            *lista = nuevo;
        }
        else
        {
            struct Nodo11 * aux = *lista;
            while(aux->sig != NULL)
            {
                aux = aux->sig;
            }
            aux->sig = nuevo;
        }
    }
}

void borrarLista11(Lista11 * list)
{
    struct Nodo11* current ;
    while( *list != NULL)
    {
        current = *list;
        *list = (*list)->sig;
        free(current);
    }
}

void mostrarLista11(Lista11 *lista)
{
    struct Nodo11* aux = *lista;
        while(aux !=  NULL )
        {
            printf("Esto es una palabra reservada |%s| \n", aux->cadena);
            aux = aux->sig;
        }    
}
// -----------------------------------------------------------------------------------------
// Listas
Lista1 listaIdentificadores = NULL;
Lista2 listaLiteralesCadenas = NULL;
Lista11 listaPalabrasReservadas = NULL;
Lista5 listaConstDecimales = NULL;
Lista3 listaConstOctales = NULL;
Lista4 listaConstHexadecimales = NULL;
Lista6 listaConstReales = NULL;
Lista7 listaConstCaracter = NULL;
Lista8 listaOperadoresDeC = NULL;
Lista8 listaCaracteresDePuntuacion = NULL;
Lista9 listaComentarios = NULL;
Lista10 listaNoReconocidos = NULL;

void generarReporte(FILE* reporte)
{
    fprintf(reporte , "La lista de Identificadores es : \n");
    imprimirLista1(&listaIdentificadores,reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Literales cadena es : \n");
    imprimirLista2(&listaLiteralesCadenas , reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Palabras Reservadas es : \n");
    imprimirLista11(&listaPalabrasReservadas , reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Constantes Octales es : \n");
    imprimirLista3(&listaConstOctales , reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Constantes Hexadecimales es : \n");
    imprimirLista4(&listaConstHexadecimales , reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Constantes Decimales es : \n");
    imprimirLista5(&listaConstDecimales, reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Constantes Reales es : \n");
    imprimirLista6(&listaConstReales, reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Constantes Caracter es : \n");
    imprimirLista7(&listaConstCaracter, reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Operadores/Caracteres de Puntuacion es : \n");
    imprimirLista8(&listaCaracteresDePuntuacion , reporte);

    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Comentarios es : \n");
    imprimirLista9(&listaComentarios , reporte);
    
    fprintf(reporte , "------------------------------------\n");

    fprintf(reporte , "La lista de Cadenas/Caracteres No Reconocidos es : \n");
    imprimirLista10(&listaNoReconocidos, reporte);
}