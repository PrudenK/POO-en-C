//
// Created by pruden on 23/06/25.
//

#include <stdio.h>
#include <stdlib.h>

#include "formas/forma.h"
#include "opciones_menu/opciones_menu_principal.h"

#define NUM_PIEZAS 2

int main() {
    Forma **lista_forams = malloc(sizeof(Forma *) * NUM_PIEZAS);
    int num_figuras = 0;

    while (1) {
        imprimir_menu_principal();
        char opcion;
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                if (num_figuras == NUM_PIEZAS) {
                    printf("¡YA NO CABEN MÁS PIEZAS! CAPACIDAD MAX %d\n", NUM_PIEZAS);
                }else crear_figura(&num_figuras, lista_forams);
                break;
            case '2':
                listar_figuras(num_figuras, lista_forams);
                break;
            case '3':
                borrar_figura(&num_figuras, lista_forams);
                break;
            case '4':
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }

        if (opcion == '4') {
            printf("Prgograma terminado\n");
            break;
        }
    }

    return 0;
}

