#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#include "tabla.h"

Simbolo* crearSimbolo(char* tipoDato, char* nombreID, int tipoID){
    Simbolo* nuevoNodo = (Simbolo*) malloc (sizeof(Simbolo));

    nuevoNodo -> nombre   = strdup(nombreID);
    nuevoNodo -> tipoDato = strdup(tipoDato);
    nuevoNodo -> tipoID   = tipoID;

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

void insertarSimbolo(Simbolo* nuevoSimbolo){
    
    Simbolo* nuevoNodo = devolverSimbolo(nuevoSimbolo -> nombre);

    if(! nuevoNodo){ 

        nuevoNodo = nuevoSimbolo;

        Simbolo* aux1 = tablaSimbolos;
        Simbolo* aux2;

        while(aux1 != NULL && strcmp(toUpper(nuevoNodo -> nombre), toUpper(aux1 -> nombre)) > 0){
            aux2 = aux1;
            aux1 = aux1 -> sig;
        }

        if(tablaSimbolos == aux1)
            tablaSimbolos = nuevoNodo;
        else
            aux2 -> sig = nuevoNodo;
        nuevoNodo -> sig = aux1;
    }    
}

Funcion* crearParametro(char* parametro){
    Funcion* nuevoParam = (Funcion*) malloc (sizeof(Funcion));
    nuevoParam -> tipoDatoParam = strdup(parametro);
    nuevoParam -> sig = NULL;

    puts("Creo parametro.");

    return nuevoParam;
}

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

Simbolo* devolverSimbolo(char* nombreID){
    Simbolo* aux = tablaSimbolos;

    while (aux != NULL){
        if (! strcmp(nombreID, aux -> nombre))
            return aux;
        aux = aux -> sig;
    }
    return aux;

}

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


char* toUpper(char* nombreID){
    char* temporal = strdup(nombreID);
    return strupr(temporal);
}

