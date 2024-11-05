#include <iostream>
#include "datos.h"

void datos() {
    int entero = 42;
    double decimal = 3.14;
    char caracter = 'A';
    bool booleano = true;

    std::cout << "Entero: " << entero << "\n";
    std::cout << "Double: " << decimal << "\n";
    std::cout << "Char: " << caracter << "\n";
    std::cout << "Bool: " << std::boolalpha << booleano << "\n";
}