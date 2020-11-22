#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#include "tabla.h"

// Crea un nuevo nodo en la TS, completa el nombre del identificador, el tipo de identificador y el tipo de dato del identificador. Inicializa los campos de la union

Simbolo* crearSimbolo(char* tipoDato, char* nombreID, int tipoID){
    Simbolo* nuevoNodo = (Simbolo*) malloc (sizeof(Simbolo));

    nuevoNodo -> nombre   = strdup(nombreID); // Asigna el nombre del identificador (nombre de la variable o funcion)
    nuevoNodo -> tipoDato = strdup(tipoDato); // Asigna el tipo de dato del identificador (tipo de varibale o tipo de retorno de la funcion)
    nuevoNodo -> tipoID   = tipoID; // Asigna del tipo de identificador, es decir, si es varibale o funcion (identificado con 1 o 2 por la estructura enum)

    switch(tipoID){
        default:
            break;
        case VAR:
                if(! strcmp(tipoDato, "int") || ! strcmp(tipoDato, "unsigned") || ! strcmp(tipoDato, "long")) 
                    nuevoNodo -> valor.valEnt = 0;
                else if(! strcmp(tipoDato, "float") || ! strcmp(tipoDato, "double"))
                    nuevoNodo -> valor.valReal = 0;
                else if(! strcmp(tipoDato, "char"))
                    nuevoNodo -> valor.valChar = "NULL";
            break;
        case FUNC:
            nuevoNodo -> valor.func = NULL;
            break;
    }

    nuevoNodo -> sig = NULL;

    return nuevoNodo;
}

// Busca un simbolo y si no lo encuentra lo agrega a la TS ordenadamente (en orden ascendente) por NOMBRE de simbolo (nombre de identificador)
void insertarSimbolo(Simbolo* nuevoSimbolo){
    
    Simbolo* nuevoNodo = devolverSimbolo(nuevoSimbolo -> nombre);// Se busca el simbolo por nombre y si se lo encuentra lo almacenamos en nuevoNodo

    if(! nuevoNodo){ // if (no se encontro)

        nuevoNodo = nuevoSimbolo;

        Simbolo* aux1 = tablaSimbolos;
        Simbolo* aux2;

        while(aux1 != NULL && strcmp(toUpper(nuevoNodo -> nombre), toUpper(aux1 -> nombre)) > 0){// Si el simbolo a insertar esta primero que el simbolo que esta en la tabla
            aux2 = aux1;
            aux1 = aux1 -> sig;
        }

        if(tablaSimbolos == aux1) // Si la tabla de simbolos estaba vacia
            tablaSimbolos = nuevoNodo;
        else // Inserta ente dos nodos si la tabla no estaba vacia y ademas el simbolo no estaba en la tabla
            aux2 -> sig = nuevoNodo;
        nuevoNodo -> sig = aux1;
    }    
}

// Crea la lista de parametros (el primer nodo) de la lsita de tipos de parametros de la funcion que se este analizando
Funcion* crearParametro(char* parametro){
    Funcion* nuevoParam = (Funcion*) malloc (sizeof(Funcion));
    nuevoParam -> tipoDatoParam = strdup(parametro);
    nuevoParam -> sig = NULL;

    puts("Creo parametro.");

    return nuevoParam;
}

// Inserta un nuevo tipo de dato (modelado con un string; por ejemplo "float") a la lista de tipos de datos de la funcion
void insertarParametro(Funcion** listaParametros, Funcion* parametro){
    Funcion* aux = parametro;

    if(*listaParametros == NULL)
        *listaParametros = aux;
    else
    {
        Funcion* temp = *listaParametros;
        while(temp->sig != NULL)
            temp = temp->sig;
        
        aux->sig = temp->sig;
        temp->sig = aux;
    }  
}

//Funcion que dado el nombre del identificador del simbolo a buscar, devuelve el simbolo correspondiente
Simbolo* devolverSimbolo(char* nombreID){
    Simbolo* aux = tablaSimbolos;

    while (aux != NULL){
        if (! strcmp(nombreID, aux -> nombre))
            return aux;
        aux = aux -> sig;
    }
    return aux;

}

// Confio en que graba en el archivo de salida la TS
void mostrarTabla(FILE* archivoSalida){

    fprintf(archivoSalida, "\n");

    fprintf(archivoSalida, " ----------------------Tabla de Simbolos --------------------------- \n");
   
    fprintf(archivoSalida, "\n");

    for(Simbolo* aux = tablaSimbolos; aux != NULL; aux = aux -> sig){
        
        fprintf(archivoSalida, "IDENTIFICADOR: %s ", aux -> nombre);
        
        switch(aux -> tipoID){
            case VAR: 
                    fprintf(archivoSalida, " -> TIPO: %s\n", aux->tipoDato);
                break;
            case FUNC:
                    mostrarParametros(archivoSalida, aux -> valor.func);
                break;
            default:
                break;
        }
    }
}

// Graba en el archivo de salida todos los parametros de una funcion
void mostrarParametros(FILE* archivoSalida, Funcion* listaParametros){
    fprintf(archivoSalida, " -> Parametro/s: ");
    for(Funcion* aux = listaParametros; aux != NULL; aux = aux -> sig){
        
        if(aux -> sig == NULL) // [!] Condicional para saber si es el ultimo valor de la lista de parametros 
            fprintf(archivoSalida, "%s", aux -> tipoDatoParam);
        else        
            fprintf(archivoSalida, "%s, ", aux -> tipoDatoParam);
    }
    fprintf(archivoSalida, "\n");
}

// Funcion renombrada que se usa para comparar los nombres de los identificadores 
char* toUpper(char* nombreID){
    char* temporal = strdup(nombreID);
    return strupr(temporal);
}

