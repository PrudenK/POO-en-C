cmake_minimum_required(VERSION 3.31)
project(Formas C)

set(CMAKE_C_STANDARD 11)

# Añade el directorio de headers
include_directories(formas)

# Crea el ejecutable
add_executable(Formas
        main.c
        formas/forma.c
        formas/forma.h
        formas/pentagono.c
        formas/pentagono.h
        formas/cuadrado.c
        formas/cuadrado.h
        formas/triangulo_equi.c
        formas/triangulo_equi.h
        formas/circunferencia.c
        formas/circunferencia.h
        opciones_menu/opciones_menu_principal.c
        opciones_menu/opciones_menu_principal.h
)
