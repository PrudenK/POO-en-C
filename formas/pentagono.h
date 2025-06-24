//
// Created by pruden on 24/06/25.
//

#ifndef PENTAGONO_H
#define PENTAGONO_H
#include "forma.h"

typedef struct {
    Forma base;
    float lado;
    float apotema;
} Pentagono;

Pentagono *crear_pentagono(float lado, float apotema);

#endif //PENTAGONO_H
