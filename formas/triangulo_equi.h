//
// Created by pruden on 24/06/25.
//

#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "forma.h"

typedef struct {
    Forma base;
    float base_t;
    float altura;
} Triangulo_Equilatero;

Triangulo_Equilatero *crear_triangulo_equilatero(float base_t, float altura);

#endif //TRIANGULO_H
