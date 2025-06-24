//
// Created by pruden on 24/06/25.
//

#include "opciones_menu_principal.h"

#include <stdio.h>
#include <stdlib.h>

#include "circunferencia.h"
#include "cuadrado.h"
#include "forma.h"
#include "pentagono.h"
#include "triangulo_equi.h"

void imprimir_menu_principal() {
    printf("\n*****¿Qué quieres hacer?*****\n");
    printf("1.- Crear figura\n");
    printf("2.- Ver figuras\n");
    printf("3.- Eliminar figura\n");
    printf("4.- Salir\n");
}

void menu_figuras() {
    printf("\n-----¿Elige una figura?-----\n");
    printf("1.- Círculo\n");
    printf("2.- Triángulo equilatero\n");
    printf("3.- Cuadrado\n");
    printf("4.- Pentágono\n");
}

void crear_figura(int *num_figuras, Forma *lista_forams[]) {
    menu_figuras();
    char figura;
    scanf(" %c", &figura);

    switch (figura) {
        case '1':
            float radio;
            printf("\nIntroduce el radio de la cirfunferencia: \n");
            scanf(" %f", &radio);

            Forma *c = (Forma *)crear_circunferencia(radio);
            lista_forams[*num_figuras] = c;
            (*num_figuras)++;
            break;
        case '2':
            float altura, base_t;

            printf("\nIntroduce la altura del triángulo equilatero: \n");
            scanf(" %f", &altura);

            printf("\nIntroduce la base del triángulo equilatero: \n");
            scanf(" %f", &base_t);

            Forma *t_e = (Forma *)crear_triangulo_equilatero(base_t, altura);
            lista_forams[*num_figuras] = t_e;
            (*num_figuras)++;
            break;
        case '3':
            float lado;

            printf("\nIntroduce el lado del cuadrado: \n");
            scanf(" %f", &lado);

            Forma *cu = (Forma *)crear_cuadrado(lado);
            lista_forams[*num_figuras] = cu;
            (*num_figuras)++;
            break;
        case '4':
            float lado_p, apotema;

            printf("\nIntroduce el lado del pentágono: \n");
            scanf(" %f", &lado_p);

            printf("\nIntroduce el apotema del pentágono: \n");
            scanf(" %f", &apotema);

            Forma *p = (Forma *)crear_pentagono(lado_p, apotema);
            lista_forams[*num_figuras] = p;
            (*num_figuras)++;
            break;
        default:
            printf("Opcion incorrecta\n");
            break;
    }
}

void borrar_figura(int *num_figuras, Forma *lista_forams[]) {
    if (*num_figuras > 0) {
        printf("Las figuras que contiene tu listas: \n");

        for (int i = 0; i<*num_figuras; i++) {
            printf("Figura %d: %s\n", i+1, lista_forams[i]->nombre);
        }

        int indice = 0;

        printf("\nIntroduce el indice de la figura que quieres eliminar: \n");
        scanf(" %d", &indice);

        if (indice >= 1 && indice <= *num_figuras) {
            free(lista_forams[indice - 1]);
            for (int j = indice - 1; j < *num_figuras - 1; j++) {
                lista_forams[j] = lista_forams[j + 1];
            }
            (*num_figuras)--;
            printf("Figura eliminada correctamente.\n");
        }else {
            printf("Indice incorrecto\n");
        }
    }else {
        printf("No hay nada que borrar\n");
    }
}

void listar_figuras(int num_figuras, Forma *lista_forams[]) {
    if (num_figuras > 0) {
        for (int i = 0; i<num_figuras; i++) {
            lista_forams[i]->metodos->imprimir(lista_forams[i]);
        }
    }else {
        printf("No hay figuras para mostrar\n");
    }
}
