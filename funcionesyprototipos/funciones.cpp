#include <iostream>
#include <cstdarg>

// Declaración de una función que devuelve la suma de dos números
int suma(int a, int b) {
    return a + b;
}

// Función que devuelve un valor
int funcion(int a, int b) {
    return a + b;
}

// Procedimiento que no devuelve un valor
void procedimiento(int a, int b) {
    std::cout << "La suma es: " << a + b << std::endl;
}

// Varias funciones para demostrar la llamada de funciones
void funcion1() {
    std::cout << "Funcion 1" << std::endl;
}

void funcion2() {
    std::cout << "Funcion 2" << std::endl;
}

void funcion3() {
    std::cout << "Funcion 3" << std::endl;
}

// Gestión de las variables locales
void gestionVariables() {
    int localVar = 10;
    std::cout << "Variable local: " << localVar << std::endl;
}

// Definición de funciones homónimas (polimorfismo)
void polimorfismo(int a) {
    std::cout << "Entero: " << a << std::endl;
}

void polimorfismo(double a) {
    std::cout << "Doble: " << a << std::endl;
}

void polimorfismo(int a, int b) {
    std::cout << "Enteros: " << a << " y " << b << std::endl;
}

// Función con número variable de argumentos
int sumaVariable(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Función con valores predeterminados
int sumaPredeterminada(int a, int b = 5) {
    return a + b;
}

// Función inline
inline int sumaInline(int a, int b) {
    return a + b;
}

// Función externa de tipo C
extern "C" int sumaExterna(int a, int b) {
    return a + b;
}

// Función recursiva
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    // Declaración de una función
    std::cout << "Suma: " << suma(3, 4) << std::endl;

    // Funciones y procedimientos
    std::cout << "Funcion: " << funcion(3, 4) << std::endl;
    procedimiento(3, 4);

    // Llamada de las funciones
    funcion1();
    funcion2();
    funcion3();

    // Gestión de las variables locales
    gestionVariables();

    // Definición de funciones homónimas (polimorfismo)
    polimorfismo(5);
    polimorfismo(3.14);
    polimorfismo(2, 3);

    // Funciones con número variable de argumentos
    std::cout << "Suma variable: " << sumaVariable(3, 1, 2, 3) << std::endl;

    // Asignación de valores por defecto a los argumentos
    std::cout << "Suma predeterminada: " << sumaPredeterminada(3) << std::endl;

    // Funciones en línea
    std::cout << "Suma inline: " << sumaInline(3, 4) << std::endl;

    // Funciones externas de tipo C
    std::cout << "Suma externa: " << sumaExterna(3, 4) << std::endl;

    // Funciones recursivas
    std::cout << "Factorial: " << factorial(5) << std::endl;

    return 0;
}