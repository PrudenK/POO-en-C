//
// Created by pruden on 24/06/25.
//

#include "triangulo_equi.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LADOS 3

void imprimir_triangulo_equi(Forma *self) {
    const Triangulo_Equilatero *t_e = (const Triangulo_Equilatero *)self;
    printf("Triangulo Equilatero de lado %.2f y altura %.2f \n", t_e->base_t, t_e->altura);

    printf(".________________________________.\n");
    printf("|                *               |\n");
    printf("|               * *              |\n");
    printf("|              *   *             |\n");
    printf("|             *     *            |\n");
    printf("|            *       *           |\n");
    printf("|           ***********          |\n");
    printf("|________________________________|\n");

    printf("\n");
}

float area_triangulo_equi(Forma *self) {
    const Triangulo_Equilatero *t_e = (const Triangulo_Equilatero *)self;
    return t_e->base_t * t_e->altura / 2;
}

float perimetro_triangulo_equi(Forma *self) {
    const Triangulo_Equilatero *t_e = (const Triangulo_Equilatero *)self;
    return t_e->base_t * NUM_LADOS;
}

static const MetodosForma metodos_triangulo_equi = {
    .imprimir = imprimir_triangulo_equi,
    .area = area_triangulo_equi,
    .perimetro = perimetro_triangulo_equi
};

Triangulo_Equilatero *crear_triangulo_equilatero(float base_t, float altura) {
    Triangulo_Equilatero *t_e = malloc(sizeof(Triangulo_Equilatero));
    t_e->base_t = base_t;
    t_e->altura = altura;
    strcpy(t_e->base.nombre, "Triángulo equilatero");
    t_e->base.nLados = NUM_LADOS;
    t_e->base.metodos = &metodos_triangulo_equi;
    return t_e;
}


