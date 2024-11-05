
#include "Ambitodevariable.h"
#include <iostream>

// Variable global
int globalVar = 10;

void mostrarGlobal() {
    std::cout << "Variable global: " << globalVar << std::endl;
}

void funcionLocal() {
    // Variable local
    int localVar = 20;
    std::cout << "Variable local: " << localVar << std::endl;
}

