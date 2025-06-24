##  Orientación a objetos y polimorfismo en C

Este proyecto implementa una simulación de orientación a objetos en lenguaje C, permitiendo gestionar una lista de objetos con la siguiente estructura:

- Formas (Clase padre)
  - Circunferencias
  - Triángulos equiláteros
  - Cuadrados
  - Pentágonos

Como bien indica el proyecto, el objetivo es la POO, por ende no me he molestado en comprobar la integridad de los datos agregados.

## 🧠 Estructura del proyecto

El programa utiliza punteros a funciones para simular polimorfismo y herencia. Todas las figuras heredan de una estructura base `Forma`.

## ⚙️ Compilación

Este proyecto usa CMake. Para compilarlo:

```bash
mkdir build
cd build
cmake ..
make
./Formas
