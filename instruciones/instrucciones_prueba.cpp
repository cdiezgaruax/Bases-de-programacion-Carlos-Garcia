#include <iostream>
#include "instrucciones_prueba.h"

void instrucciones_prueba() {
    int edad;

    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Eres mayor de edad.\n";
    } else {
        std::cout << "Eres menor de edad.\n";
    }
}