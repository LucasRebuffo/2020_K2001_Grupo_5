/*
 Lib.h
 */


struct ListaCant {
    char * var;
    int apariciones;
    struct ListaCant * sig;
};

struct ListaLong {
    char * var;
    struct ListaLong * sig;
};

struct ListaOrden {
    char * var;
    struct ListaOrden * sig;
};

struct ListaInts {
    int var;
    struct ListaInts * sig;
};

struct ListaFloats {
    float var;
    struct ListaFloats * sig;
};

struct ListaLinea {
    char * var;
    struct ListaLinea * sig;
};

struct ListaNoRecon {
    char * var;
    struct ListaNoRecon * sig;
};

