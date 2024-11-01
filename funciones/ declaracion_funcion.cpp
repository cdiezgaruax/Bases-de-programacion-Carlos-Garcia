#include <iostream>
#include "declaracion_funcion.h"


int suma(int a, int b) {
    return a + b;
}
void declaracion_funcion() {
    int resultado = suma(5, 3);
    std::cout << "La suma de 5 y 3 es " << resultado << "\n";
}
