%option noyywrap

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "tp_5.tab.h"

    enum {ENTERO,REAL,CARACTER};
    char* cadenaErronea = NULL; // Guarda todos los caracteres que entran por el comodin en una cadena para despues mostrarla
    unsigned errorFlag = 0; // Es una variable (flag) que se usa (en finalDeError) para detectar si hay un error e imprimirlo
    extern unsigned cantLineas = 1; // Guarda la cantidad de saltos de linea

    int printError(char*, int); // Imprime la cadena con caracteres que no entraron por ninguna regla

    // Si es un caracter erroneo o cadena erronea (en el caso de que lea mas de un caracter por el comodin) lo añade a la cadena de caracteres erroneos
    void esError(char* charErroneo){
        if(cadenaErronea == NULL)
            cadenaErronea = strdup(charErroneo);
        else
        {
            char * ptr = malloc(strlen(charErroneo) + strlen(cadenaErronea) + 1);
            strcpy(ptr, cadenaErronea);
            strcat(ptr, charErroneo);
            cadenaErronea = strdup(ptr);
        }
        errorFlag = 1;
    } 

    // Muestra la cadena erronea, si es que hay, entre cada regla
    void finalDeError(){
        if (errorFlag)
        {
            printError(cadenaErronea, cantLineas);
            cadenaErronea = NULL;
        }
        errorFlag = 0;
    }

    // Cuenta la cantidad de saltos de línea
    int cantidadSaltosDeLinea(char* data){
        int cant = 0;
        int i = 0;
        while(data[i] != '\0')
        {
            if(data[i] == '\n')
                cant++;
            i++;
        }

        return cant;
    }
%}

CARACT_SIMPLES "+"|"-"|"*"|"/"|"^"|"("|")"|","|";"|"="|"<"|">"|"%"|"&"|"|"|"~"|"!"|"?"|":"|"["|"]"|"{"|"}"|"."

DECIMAL        [0-9]
OCTAL          [0-7]
HEXA           [a-fA-F0-9]
LETRA          [a-zA-Z]

CONST_DECIMAL  [1-9]{DECIMAL}*
CONST_OCTAL    0{OCTAL}*
CONST_HEXA     0[xX]{HEXA}+
CONST_REAL     {DECIMAL}+"."{DECIMAL}+([eE](\+|\-)?{DECIMAL}+)?
CONST_CHAR     \'.\'
LITERAL_CADENA \".+\"

TIPOS_DATO    "void"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned"
CLASE_ALM     "typedef"|"static"|"auto"|"register"|"extern"
CALIF_TIPO    "const"|"volatile"
STRUCT_UNION  "struct"|"union"

IDENTIFICADOR ({LETRA}|_)({LETRA}|{DECIMAL}|_)*

COMENTARIO_LINEA "//".*
COMENTARIO_BLOQUE "/*"([^*]|\*+[^/])*\*+\/

INCLUDE "#include"(" ")+(\".+\"|<.+>)
DEFINE "#define"(" ")+[^" "|"\n"]+(" ")*.*

ESPACIOS       " "|"\t"
COMODIN        .

%%

{CONST_DECIMAL}    {yylval.mystruct.valorEntero = atoi(yytext); yylval.mystruct.tipo = ENTERO;  finalDeError(); return NUM_ENTERO;}
{CONST_HEXA}       {yylval.mystruct.valorEntero = strtoll(yytext, NULL, 16); yylval.mystruct.tipo = ENTERO; finalDeError(); return NUM_ENTERO;}
{CONST_OCTAL}      {yylval.mystruct.valorEntero = strtoll(yytext, NULL, 8); yylval.mystruct.tipo = ENTERO; finalDeError(); return NUM_ENTERO;}
{CONST_REAL}       {yylval.mystruct.valorReal   = atof(yytext); yylval.mystruct.tipo = REAL; finalDeError(); return NUM_REAL;}
{CARACT_SIMPLES}   {finalDeError(); return yytext[0];}
"continue"         {yylval.valorString = strdup(yytext); finalDeError(); return CONTINUE;}
"break"            {yylval.valorString = strdup(yytext); finalDeError(); return BREAK;}
{INCLUDE}          {finalDeError();}
{DEFINE}           {finalDeError();}
"if"               {yylval.valorString = strdup(yytext); finalDeError(); return IF;}
"else"             {yylval.valorString = strdup(yytext); finalDeError(); return ELSE;}
"switch"           {yylval.valorString = strdup(yytext); finalDeError(); return SWITCH;}
"while"            {yylval.valorString = strdup(yytext); finalDeError(); return WHILE;}
"do"               {yylval.valorString = strdup(yytext); finalDeError(); return DO;}
"for"              {yylval.valorString = strdup(yytext); finalDeError(); return FOR;}
"case"             {yylval.valorString = strdup(yytext); finalDeError(); return CASE;}
"default"          {yylval.valorString = strdup(yytext); finalDeError(); return DEFAULT;}
"return"           {yylval.valorString = strdup(yytext); finalDeError(); return RETURN;}
"goto"             {yylval.valorString = strdup(yytext); finalDeError(); return GOTO;}
{TIPOS_DATO}       {yylval.valorString = strdup(yytext); finalDeError(); return TIPO_DATO;}
{CLASE_ALM}        {yylval.valorString = strdup(yytext); finalDeError(); return CLASE_ALM;}
{CALIF_TIPO}       {yylval.valorString = strdup(yytext); finalDeError(); return CALIF_TIPO;}
{STRUCT_UNION}     {yylval.valorString = strdup(yytext); finalDeError(); return STRUCT_UNION;}
"sizeof"           {yylval.valorString = strdup(yytext); finalDeError(); return SIZEOF;}
"enum"             {yylval.valorString = strdup(yytext); finalDeError(); return ENUM;}
{IDENTIFICADOR}    {yylval.valorString = strdup(yytext); finalDeError(); return ID;}
{COMENTARIO_LINEA} {finalDeError();}
{COMENTARIO_BLOQUE} {cantLineas += cantidadSaltosDeLinea(yytext); finalDeError();}
"\n"               {cantLineas++;}
{ESPACIOS}+        {finalDeError();}



{CONST_CHAR}       {yylval.mystruct.valorCaracter = strdup(yytext); yylval.mystruct.tipo = CARACTER; finalDeError(); return CHAR;}
{LITERAL_CADENA}   {yylval.mystruct.valorCaracter = strdup(yytext); yylval.mystruct.tipo = CARACTER; finalDeError(); return STRING;}

"*="               {finalDeError(); return ASIG_MULT;} // No necesita un campo de la variable ylval porque para cada token (categoría) solo se va a tener un unico valor (el string). No es lo mismo que apsa con la categoria identificador por ejemplo
"/="               {finalDeError(); return ASIG_DIV;}
"%="               {finalDeError(); return ASIG_MOD;}
"+="               {finalDeError(); return ASIG_SUMA;}
"-="               {finalDeError(); return ASIG_RESTA;}
"<<="              {finalDeError(); return ASIG_DESP_IZQ;}
">>="              {finalDeError(); return ASIG_DESP_DER;}
"&="               {finalDeError(); return ASIG_AND_BIN;}
"^="               {finalDeError(); return ASIG_XOR_BIN;}
"|="               {finalDeError(); return ASIG_OR_BIN;}
"++"               {finalDeError(); return OP_INC;}
"--"               {finalDeError(); return OP_DEC;}
"=="               {finalDeError(); return OP_IGUALDAD;}
"!="               {finalDeError(); return OP_DESIGUALDAD;}
"&&"               {finalDeError(); return OP_AND;}
"||"               {finalDeError(); return OP_OR;}
"<="               {finalDeError(); return OP_MENOR_IGUAL;}
">="               {finalDeError(); return OP_MAYOR_IGUAL;}
"<<"               {finalDeError(); return OP_DESP_IZQ;}
">>"               {finalDeError(); return OP_DESP_DER;}
"->"               {finalDeError(); return OP_MIEMBRO_PUNT;}

{COMODIN}          {esError(yytext);}
%%