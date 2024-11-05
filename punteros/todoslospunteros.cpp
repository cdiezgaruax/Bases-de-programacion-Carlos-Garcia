#include <iostream>
#include "todoslospunteros.h"
// Punteros de variables
void punterosDeVariables() {
    int var = 10;
    int* ptr = &var;
    std::cout << "Valor de la variable: " << var << std::endl;
    std::cout << "Valor del puntero: " << *ptr << std::endl;
}

// Punteros y arrays
void punterosYArrays() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Valor del array en la posición " << i << ": " << *(ptr + i) << std::endl;
    }
}

// Asignación de memoria
void asignacionDeMemoria() {
    int* ptr = new int;
    *ptr = 20;
    std::cout << "Valor asignado dinámicamente: " << *ptr << std::endl;
    delete ptr;
}

// Aritmética de los punteros
void aritmeticaDePunteros() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    std::cout << "Valor inicial del puntero: " << *ptr << std::endl;
    ptr++;
    std::cout << "Valor después de incrementar el puntero: " << *ptr << std::endl;
}

// Punteros de punteros
void punterosDePunteros() {
    int var = 30;
    int* ptr = &var;
    int** ptr2 = &ptr;
    std::cout << "Valor de la variable: " << var << std::endl;
    std::cout << "Valor del puntero: " << *ptr << std::endl;
    std::cout << "Valor del puntero de puntero: " << **ptr2 << std::endl;
}

// Punteros de funciones
void funcionEjemplo() {
    std::cout << "Función llamada a través de un puntero a función." << std::endl;
}

void punterosDeFunciones() {
    void (*ptr)() = funcionEjemplo;
    ptr();
}

int main() {
    int choice;

    std::cout << "Seleccione el ejercicio de punteros a ejecutar:\n";
    std::cout << "1. Punteros de variables\n";
    std::cout << "2. Punteros y arrays\n";
    std::cout << "3. Asignación de memoria\n";
    std::cout << "4. Aritmética de los punteros\n";
    std::cout << "5. Punteros de punteros\n";
    std::cout << "6. Punteros de funciones\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            punterosDeVariables();
            break;
        case 2:
            punterosYArrays();
            break;
        case 3:
            asignacionDeMemoria();
            break;
        case 4:
            aritmeticaDePunteros();
            break;
        case 5:
            punterosDePunteros();
            break;
        case 6:
            punterosDeFunciones();
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }

    return 0;
}