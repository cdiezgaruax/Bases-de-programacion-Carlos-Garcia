#include <iostream>
#include <string>
#include "variables/sintaxis/sintaxis.h"
#include "variables/tipos_de_datos/datos.h"
#include "variables/Ambito_de_las_variables/Ambitodevariable.h"
#include "variables/utilidad_de_variable/utilidad_variables.h"
#include "instruciones/instruciones_prueba/1.cpp"
#include "instruciones/operadores/2.cpp"
#include "bucle/for/bucle_for.h"
#include "array/uso_arrays.h"
#include "bucle/while/buclewhile.h"
#include "bucle/do/bucledo.h"
#include "bucle/desalto/Desalto.h"
#include "funcionesyprototipos/funciones.h"
#include "punteros/todoslospunteros.h"

int main() {
    int choice;

    std::cout << "Seleccione el ejercicio a ejecutar:\n";
    std::cout << "1. Variables\n";
    std::cout << "2. Instrucciones de prueba y operadores\n";
    std::cout << "3. Bucles\n";
    std::cout << "4. Uso de arrays\n";
    std::cout << "5. Declaracion de una funcion\n";
    std::cout << "6. Punteros\n";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            int subChoice;
            std::cout << "Seleccione el sub-ejercicio de utilidad de las variables:\n";
            std::cout << "1. Utilidad de las variables\n";
            std::cout << "2. Sintaxis de declaración\n";
            std::cout << "3. Tipos de datos\n";
            std::cout << "4. Ambito de las variables\n";

            std::cin >> subChoice;

            switch (subChoice) {
                case 1:
                    utilidad_variables();
                    break;
                case 2:
                    sintaxis();
                    break;
                case 3:
                    datos();
                    break;
                case 4:
                    mostrarGlobal();
                    funcionLocal();
                    break;
                default:
                    std::cout << "Opcion no valida.\n";
                    break;
            }
            break;
        }
        case 2: {
            int subChoice;
            std::cout << "Seleccione el sub-ejercicio de instrucciones de prueba y operadores:\n";
            std::cout << "1. Instrucciones de prueba\n";
            std::cout << "2. Operadores\n";

            std::cin >> subChoice;

            switch (subChoice) {
                case 1:
                    instrucciones_prueba();
                    break;
                case 2:
                    operadores();
                    break;
                default:
                    std::cout << "Opción no válida.\n";
                    break;
            }
            break;
        }
        case 3: {
            int subChoice;
            std::cout << "Seleccione el sub-ejercicio de instrucciones de bucle:\n";
            std::cout << "1. Bucle for\n";
            std::cout << "2. Bucle while\n";
            std::cout << "3. Bucle do\n";
            std::cout << "4. Instrucciones de salto\n";

            std::cin >> subChoice;

            switch (subChoice) {
                case 1:
                    bucle_for();
                    break;
                case 2:
                    bucle_while();
                    break;
                case 3:
                    bucle_do();
                    break;
                case 4:
                    desalto();
                    break;
                default:
                    std::cout << "Opción no válida.\n";
                    break;
            }
            break;
        }
        case 4:
            uso_arrays();
            break;
        case 5: {
            int subChoice;
            std::cout << "Seleccione el sub-ejercicio de funciones:\n";
            std::cout << "1. Suma de dos números\n";
            std::cout << "2. Funciones y procedimientos\n";
            std::cout << "3. Llamada de funciones\n";
            std::cout << "4. Gestión de variables locales\n";
            std::cout << "5. Polimorfismo\n";
            std::cout << "6. Número variable de argumentos\n";
            std::cout << "7. Valores predeterminados\n";
            std::cout << "8. Funciones inline\n";
            std::cout << "9. Funciones externas\n";
            std::cout << "10. Funciones recursivas\n";

            std::cin >> subChoice;

            switch (subChoice) {
                case 1:
                    std::cout << "Suma: " << suma(3, 4) << std::endl;
                    break;
                case 2:
                    std::cout << "Funcion: " << funcion(3, 4) << std::endl;
                    procedimiento(3, 4);
                    break;
                case 3:
                    funcion1();
                    funcion2();
                    funcion3();
                    break;
                case 4:
                    gestionVariables();
                    break;
                case 5:
                    polimorfismo(5);
                    polimorfismo(3.14);
                    polimorfismo(2, 3);
                    break;
                case 6:
                    std::cout << "Suma variable: " << sumaVariable(3, 1, 2, 3) << std::endl;
                    break;
                case 7:
                    std::cout << "Suma predeterminada: " << sumaPredeterminada(3) << std::endl;
                    break;
                case 8:
                    std::cout << "Suma inline: " << sumaInline(3, 4) << std::endl;
                    break;
                case 9:
                    std::cout << "Suma externa: " << sumaExterna(3, 4) << std::endl;
                    break;
                case 10:
                    std::cout << "Factorial: " << factorial(5) << std::endl;
                    break;
                default:
                    std::cout << "Opción no válida.\n";
                    break;
            }
            break;
        }
        case 6: {
            int subChoice;
            std::cout << "Seleccione el sub-ejercicio de punteros:\n";
            std::cout << "1. Punteros de variables\n";
            std::cout << "2. Punteros y arrays\n";
            std::cout << "3. Asignación de memoria\n";
            std::cout << "4. Aritmética de los punteros\n";
            std::cout << "5. Punteros de punteros\n";
            std::cout << "6. Punteros de funciones\n";

            std::cin >> subChoice;

            switch (subChoice) {
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
            break;
        }
        default:
            std::cout << "Opción no válida.\n";
            break;
    }

    return 0;
}