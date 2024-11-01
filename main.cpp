#include <iostream>
#include <string>
#include "variables/utilidad_variables.h"
#include "instruciones/instrucciones_prueba.h"
#include "bucle/bucle_for.h"
#include "array/uso_arrays.h"
#include "funciones/declaracion_funcion.h"

int main() {
    int choice;

    std::cout << "Seleccione el ejercicio a ejecutar:\n";
    std::cout << "1. Utilidad de las variables\n";
    std::cout << "2. Instrucciones de prueba\n";
    std::cout << "3. Bucle for\n";
    std::cout << "4. Uso de arrays\n";
    std::cout << "5. Declaracion de una funcion\n";
    std::cout << "Ingrese su eleccion: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            utilidad_variables();
            break;
        case 2:
            instrucciones_prueba();
            break;
        case 3:
            bucle_for();
            break;
        case 4:
            uso_arrays();
            break;
        case 5:
            declaracion_funcion();
            break;
        default:
            std::cout << "Opcion no valida.\n";
            break;
    }

    return 0;
}