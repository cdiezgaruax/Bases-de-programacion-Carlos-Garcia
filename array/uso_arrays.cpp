#include <iostream>
#include "uso_arrays.h"

void uso_arrays() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << numeros[i] << "\n";
    }
}