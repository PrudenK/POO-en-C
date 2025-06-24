//
// Created by pruden on 24/06/25.
//

#include "circunferencia.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.141592653589793


void imprimir_circunferencia(Forma *self) {
    const Circunferencia *c = (const Circunferencia *)self;
    printf("Circunferencia de radio = %.2f\n", c->radio);


    printf(".____________________________.\n");
    printf("|           ******           |\n");
    printf("|        **       **         |\n");
    printf("|       *           *        |\n");
    printf("|       *           *        |\n");
    printf("|        **       **         |\n");
    printf("|           ******           |\n");
    printf("|____________________________|\n");


    printf("\n");
}

float area_circunferencia(Forma *self) {
    const Circunferencia *c = (const Circunferencia *)self;
    return c->radio * c->radio * PI;
}

float perimetro_circunferencia(Forma *self) {
    const Circunferencia *c = (const Circunferencia *)self;
    return c->radio * PI *2;
}

static const MetodosForma metodos_circunferencia = {
    .imprimir = imprimir_circunferencia,
    .area = area_circunferencia,
    .perimetro = perimetro_circunferencia
};

Circunferencia *crear_circunferencia(float radio) {
    Circunferencia *c = malloc(sizeof(Circunferencia));
    c->radio = radio;
    strcpy(c->base.nombre, "Circunferencia");
    c->base.nLados = 0;
    c->base.metodos = &metodos_circunferencia;
    return c;
}