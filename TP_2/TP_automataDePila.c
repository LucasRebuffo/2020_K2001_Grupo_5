#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

#define inicial 0
#define estado1 1
#define estado2 2
#define rechazo 3
#define pilaVacia '$'
#define pilaNoVacia 'R'


int buscarEnTabla (struct Stack* pila , int estado , int caracter , int tabla [][3][5])
{
    int res;


   if ((peek(pila)) == pilaVacia)
        {
            if(caracter == '0')
            {
                res = tabla[0][estado][0];
                pop(pila);
                push(pila, pilaVacia);
            }
            else if (caracter >= '1' && caracter <= '9')
            {
                res = tabla[0][estado][1];
                pop(pila);
                push(pila, pilaVacia);
            }
            else if (caracter=='+' | caracter=='-' | caracter=='*' | caracter=='/')
            {
                res = tabla[0][estado][2];
                pop(pila);
                push(pila, pilaVacia);
            }
            else if (caracter=='(')
            {
               res = tabla[0][estado][3];
               pop(pila);
               push(pila, pilaVacia);
               push(pila , pilaNoVacia);

            }
            else if (caracter==')')
            {
              res = tabla[0][estado][4];
              pop(pila);

            }
            else
            {
                res = rechazo;
            }
   
        }
    else
        {
          if(caracter == '0')
            {
                res = tabla[1][estado][0];
                pop(pila);
                push(pila, pilaNoVacia);
            }
            else if (caracter >= '1' && caracter <= '9')
            {
                res = tabla[1][estado][1];
                pop(pila);
                push(pila, pilaNoVacia);
            }
            else if (caracter=='+' | caracter=='-' | caracter=='*' | caracter=='/')
            {
                res = tabla[1][estado][2];
                pop(pila);
                push(pila, pilaNoVacia);
            }
            else if (caracter=='(')
            {
               res = tabla[1][estado][3];
               pop(pila);
               push(pila, pilaNoVacia);
               push(pila , pilaNoVacia);

            }
            else if (caracter==')')
            {
              res = tabla[1][estado][4];
              pop(pila);

            }
            else
            {
                res = rechazo;
            }
        }
    
    return res;
}

int main()
{
   struct Stack* pila = createStack(20);
   int tabla [2][3][5] = {
                          {{rechazo,estado1,rechazo,inicial,rechazo},{estado1,estado1,inicial,rechazo,rechazo},{rechazo,rechazo,inicial,rechazo,rechazo}},
                          {{rechazo,estado1,rechazo,inicial,rechazo},{estado1,estado1,inicial,rechazo,estado2},{rechazo,rechazo,inicial,rechazo,estado2}}
                         };
   int estado = inicial;
   char buffer [100+1];
   push(pila, pilaVacia);

   printf("Ingrese una expresion aritmetica.\n");
   
   scanf("%s" , buffer);

while(buffer != "terminar")
{
   for (int i = 0; buffer[i] != '\0'; i++)
   {
       estado = buscarEnTabla(pila , estado , buffer[i], tabla);

       if(estado == rechazo)
       {
           break;
       }      
   }

    if((estado == estado1 && pop(pila) == pilaVacia) | (estado == estado2 && pop(pila) == pilaVacia) )
    {
        printf ("%s es una expresion valida\n" , buffer);
    }
    else
    {
        printf("%s no es una expresion valida\n" , buffer);
    }

    pila = createStack(20);
    push(pila, pilaVacia);
    printf("Ingrese una expresion aritmetica.\n");
    scanf("%s" , buffer);
}
   return 0;                    
}
