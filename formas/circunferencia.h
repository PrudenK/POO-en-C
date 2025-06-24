//
// Created by pruden on 24/06/25.
//

#ifndef CIRCULO_H
#define CIRCULO_H
#include "forma.h"

typedef struct {
    Forma base;
    float radio;
} Circunferencia;

Circunferencia *crear_circunferencia(float radio);

#endif //CIRCULO_H
