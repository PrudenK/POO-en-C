//
// Created by pruden on 24/06/25.
//

#include "pentagono.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LADOS 5

void imprimir_pentagono(const Forma *self) {
    const Pentagono *p = (const Pentagono *)self;
    printf("Pentágono con lado = %.2f, apotema = %.2f\n\n", p->lado, p->apotema);


    printf(".___________________________________________.\n");
    printf("|                      *                    |\n");
    printf("|                    *   *                  |\n");
    printf("|                  *       *                |\n");
    printf("|                *           *              |\n");
    printf("|              *               *            |\n");
    printf("|            *                   *          |\n");
    printf("|           *                     *         |\n");
    printf("|            *                   *          |\n");
    printf("|             *                 *           |\n");
    printf("|              *               *            |\n");
    printf("|               *             *             |\n");
    printf("|                *           *              |\n");
    printf("|                 *         *               |\n");
    printf("|                  *********                |\n");
    printf("|___________________________________________|\n");

    printf("\n");
}

float area_pentagono(const Forma *self) {
    const Pentagono *p = (const Pentagono *)self;
    return (NUM_LADOS * p->lado * p->apotema) / 2;
}

float permitro_pentagono(const Forma *self) {
    const Pentagono *p = (const Pentagono *)self;
    return p->lado * NUM_LADOS;
}

static const MetodosForma metodos_pentagono = {
    .imprimir = imprimir_pentagono,
    .area = area_pentagono,
    .perimetro = permitro_pentagono,
};

Pentagono *crear_pentagono(float lado, float apotema) {
    Pentagono *p = malloc(sizeof(Pentagono));
    p->base.metodos = &metodos_pentagono;
    strcpy(p->base.nombre, "Pentágono");
    p->base.nLados = NUM_LADOS;
    p->lado = lado;
    p->apotema = apotema;
    return p;
}