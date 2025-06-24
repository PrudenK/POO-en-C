//
// Created by pruden on 24/06/25.
//

#ifndef OPCIONES_MENU_PRINCIPAL_H
#define OPCIONES_MENU_PRINCIPAL_H
#include "forma.h"

void imprimir_menu_principal();
void menu_figuras();
void crear_figura(int *num_figuras, Forma *lista_forams[]);
void borrar_figura(int *num_figuras, Forma *lista_forams[]);
void listar_figuras(int num_figuras, Forma *lista_forams[]);
#endif //OPCIONES_MENU_PRINCIPAL_H
