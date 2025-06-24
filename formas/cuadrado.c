//
// Created by pruden on 24/06/25.
//

#include "cuadrado.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LADOS 4

void imprimir_cuadrado(Forma *self) {
    const Cuadrado *c = (const Cuadrado *)self;
    printf("Cuadrado con lado = %.2f\n", c->lado);


    printf(".________________________________.\n");
    printf("|            *********           |\n");
    printf("|            *       *           |\n");
    printf("|            *       *           |\n");
    printf("|            *********           |\n");
    printf("|________________________________|\n");

    printf("\n");
}

float area_cuadrado(Forma *self) {
    const Cuadrado *c = (const Cuadrado *)self;
    return c->lado * c->lado;
}

float perimetro_cuadrado(Forma *self) {
    const Cuadrado *c = (const Cuadrado *)self;
    return NUM_LADOS * c->lado;
}

static const MetodosForma metodos_cuadrado = {
    .imprimir = imprimir_cuadrado,
    .area = area_cuadrado,
    .perimetro = perimetro_cuadrado
};

Cuadrado *crear_cuadrado(float lado) {
    Cuadrado *c = malloc(sizeof(Cuadrado));
    c->lado = lado;
    strcpy(c->base.nombre, "Cuadrado");
    c->base.nLados = NUM_LADOS;
    c->base.metodos = &metodos_cuadrado;
    return c;
}
