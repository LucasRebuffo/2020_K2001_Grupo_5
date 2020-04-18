#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INICIAL 0
#define ESTADO1 1
#define ESTADO2 2
#define ESTADO3 3
#define ESTADO4 4
#define ESTADO5 5
#define ERROR 6


char *concatenar(char *cadena, char caracter)
{
   int i;

   /* Encontrar el fin de cadena */
   for (i = 0; cadena[i] != '\0'; i++)
      ;

   /* Añadimos el caracter */
   cadena[i++] = caracter;

   /* Añadimos el caracter de fin de cadena */
   cadena[i] = '\0';

   return cadena;
}

int main()
{
   int estado = INICIAL;

   int actualChar = 0 ;

   char buffer[100+1];

   FILE* f = fopen( "entrada.txt" , "rb" );  // abro archivo a para leer

   if(f == NULL)
   {
       perror("Error en la apertura de archivo");
       return 1;

   }

   while( actualChar != EOF )  //lee hasta que sea final de archivo
   {
      actualChar = getc( f );  // tomo primer caracter del archivo

      while( actualChar != ',' || feof(f) ) // itero hasta que salga ',' o se termine el archivo
      {
         concatenar( buffer , actualChar ); //concateno letra al final de buffer

         switch (estado)  // me fijo el estado actual y lo llevo al estado siguiente
         {
         case INICIAL:
            if (actualChar == '0')
            {
               estado = ESTADO2;
            }
            else if (actualChar >= '1' && actualChar <= '9')
            {
               estado = ESTADO1;
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ESTADO1:
            if (actualChar >= '0' && actualChar <= '9')
            {
               estado = ESTADO1;
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ESTADO2:
            if (actualChar >= '0' && actualChar <= '7')
            {
               estado = ESTADO3;
            }
            else if (actualChar == 'x'  || actualChar == 'X')
            {
               estado = ESTADO4;
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ESTADO3:
            if(actualChar >= '0' && actualChar <= '7')
            {
                estado = ESTADO3;
            }
            else
            {
                estado =ERROR;
            }

         case ESTADO4:
            if ((actualChar >= '0' && actualChar <= '9') || (actualChar >= 'a' && actualChar <= 'f') || (actualChar >= 'A' && actualChar <= 'F'))
            {
               estado = ESTADO5;
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ESTADO5:
            if ( (actualChar >= '0' && actualChar <= '9') ||(actualChar >= 'a' && actualChar <= 'f') || (actualChar >= 'A' && actualChar <= 'F'))
            {
               estado = ESTADO5;
            }
            else
            {
               estado = ERROR;
            }
            break;

         case ERROR:

            break;
         }

         actualChar = getc( f );
      }

       //imprimo los resultados y vacio el buffer
         if(estado == ERROR)
         {
            printf ("%s  no es una palabra válida" , buffer);
            strcpy(buffer , "");
         }
         else if (estado == ESTADO1)
         {
            printf ("%s  es un numero decimal" , buffer);
            strcpy(buffer , "");
         }
         else if (estado == ESTADO3)
         {
            printf ("%s  es un numero octal" , buffer);
            strcpy(buffer , "");
         }
          else if (estado == ESTADO4)
         {
            printf ("%s  es un numero hexadecimal" , buffer);
            strcpy(buffer , "");
         }

        system("pause");

         //vuelvo al estado inicial
         estado = INICIAL;



   }

   fclose(f); //cierro el archivo


   return 0;
}
