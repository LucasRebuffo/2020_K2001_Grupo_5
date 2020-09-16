%option noyywrap

%{

#include <stdio.h>

int A = 0;
int D = 0;
int H = 0;
int O = 0;
%}

%%

0[xX][0-9a-fA-F]+/[1-9][0-9]* {H = H+  1;printf("%s por regla 1\n", yytext);}
[1-9][0-9]*/[a-zA-Z_][0-9a-zA-Z_]* {D = D + 1;printf("%s por regla 2\n", yytext);}
[a-zA-Z_][0-9a-zA-Z_]*/0[0-7]* {O=O+1 ;printf("%s por regla 3\n", yytext);}
[a-z]+ {A =A+1 ;printf("%s por regla 4\n", yytext);}
[0-9]{3}  {printf(" %s por regla 5\n", yytext);}
"+"|"-"|"*" {printf("Muchos éxitos");printf(" %s por regla 6\n", yytext);}
. {printf("%s no se reconocio\n", yytext);} 

%%

int main()
{
    yylex();
    printf("%d es el A\n", A);
    printf("%d es el H\n",H);
    printf("%d es el O\n",O);
    printf("%d es el D\n",D);
}
