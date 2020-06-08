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


   if (peek(pila) == pilaVacia)
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

int main(int argc, char const *argv[])
{
    struct Stack* pila = createStack(20);
   int tabla [2][3][5] = {
                          {{rechazo,estado1,rechazo,inicial,rechazo},{estado1,estado1,inicial,rechazo,rechazo},{rechazo,rechazo,inicial,rechazo,rechazo}},
                          {{rechazo,estado1,rechazo,inicial,rechazo},{estado1,estado1,inicial,rechazo,estado2},{rechazo,rechazo,inicial,rechazo,estado2}}
                         };
   int estado = inicial;
   char buffer [100+1];
   push(pila, pilaVacia);

   estado = buscarEnTabla(pila , estado , '2', tabla);

   printf("%d\n", estado);
   printf("%c\n", peek(pila));

    estado = buscarEnTabla(pila , estado , '+', tabla);

   printf("%d\n", estado);
   printf("%c\n", peek(pila));


   system("pause");
    return 0;
}
