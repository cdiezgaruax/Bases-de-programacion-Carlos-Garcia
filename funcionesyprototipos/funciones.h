#ifndef FUNCIONES_H
#define FUNCIONES_H

// Declaración de una función que devuelve la suma de dos números
int suma(int a, int b);

// Función que devuelve un valor
int funcion(int a, int b);

// Procedimiento que no devuelve un valor
void procedimiento(int a, int b);

// Varias funciones para demostrar la llamada de funciones
void funcion1();
void funcion2();
void funcion3();

// Gestión de las variables locales
void gestionVariables();

// Definición de funciones homónimas (polimorfismo)
void polimorfismo(int a);
void polimorfismo(double a);
void polimorfismo(int a, int b);

// Función con número variable de argumentos
int sumaVariable(int count, ...);

// Función con valores predeterminados
int sumaPredeterminada(int a, int b = 5);

// Función inline
inline int sumaInline(int a, int b) {
    return a + b;
}

// Función externa de tipo C
extern "C" int sumaExterna(int a, int b);

// Función recursiva
int factorial(int n);

#endif // FUNCIONES_H


#endif //FUNCIONES_H
