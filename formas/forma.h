//
// Created by pruden on 23/06/25.
//

#ifndef FORMA_H
#define FORMA_H
typedef struct Forma Forma;

typedef struct {
    void (*imprimir)(const Forma *self);
    float (*area)(const Forma *self);
    float (*perimetro)(const Forma *self);
} MetodosForma;

struct Forma {
    const MetodosForma *metodos;
    char nombre[100];
    int nLados;
};

Forma *crear_forma(const char *nombre, int nLados);
#endif //FORMA_H
