%option noyywrap

%{

#include <stdio.h>

int acum = 0;
%}

%%

[0-7]+ {acum=acum-1;printf("%s por regla 1\n", yytext);}
[a-z]+ {acum+=1;printf("%s por regla 2\n", yytext);}
[0-9]{2,4} {acum=acum+atoi(yytext);printf("%s por regla 3\n", yytext);}
[A-Ga-g] {acum+=2;printf("%s por regla 4\n", yytext);}
. {printf("%s no se reconocio\n", yytext);}

%%

int main()
{
    yylex();
    printf("%d es el acumulador\n", acum);
}