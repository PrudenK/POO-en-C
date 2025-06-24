//
// Created by pruden on 23/06/25.
//

#include "forma.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void imprimir_forma(const Forma *self) {
    printf("Forma: %s con %d lados\n", self->nombre, self->nLados);
}

float area_forma(const Forma *self) {
    printf("No se puede calcular el área de una forma geńerica");
    return 0.0f;
}

float perimetro_forma(const Forma *self) {
    printf("No se puede calcular el perímetro de una forma geńerica");
    return 0.0f;
}

static const MetodosForma metodos_forma ={
    .imprimir = imprimir_forma,
    .area = area_forma,
    .perimetro = perimetro_forma
};

Forma *crear_forma(const char *nombre, int nLados) { // Constructor
    Forma *f = malloc(sizeof(Forma));
    f->metodos = &metodos_forma;
    strcpy(f->nombre, nombre);
    f->nLados = nLados;
    return f;
}