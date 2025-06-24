//
// Created by pruden on 24/06/25.
//

#ifndef CUADRADO_H
#define CUADRADO_H
#include "forma.h"

typedef struct {
    Forma base;
    float lado;
} Cuadrado;

Cuadrado *crear_cuadrado(float lado);

#endif //CUADRADO_H
