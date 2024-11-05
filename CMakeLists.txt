cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Bases_de_programacion_Carlos_Garcia)

# Add the executable
add_executable(Bases_de_programacion_Carlos_Garcia
    main.cpp
        "variables/Ambito_de_las_variables/Ambitodevariable.cpp"
        "variables/Ambito_de_las_variables/Ambitodevariable.h"
        "variables/sintaxis/sintaxis.cpp"
        "variables/sintaxis/sintaxis.h"
        "variables/tipos_de_datos/datos.cpp"
        "variables/tipos_de_datos/datos.h"
        "variables/utilidad_de_variable/utilidad_variables.cpp"

        "instruciones/instruciones_prueba/1.cpp"
        "instruciones/operadores/2.cpp"

        "bucle/for/bucle_for.cpp"
        "bucle/for/bucle_for.h"
        "bucle/do/bucledo.cpp"
        "bucle/do/bucledo.h"
        "bucle/desalto/Desalto.cpp"
        "bucle/desalto/Desalto.h"
        "bucle/while/buclewhile.cpp"
        "bucle/while/buclewhile.h"


        "array/uso_arrays.cpp"
        "array/uso_arrays.h"

        "funcionesyprototipos/funciones.cpp"
        "funcionesyprototipos/funciones.h"
)