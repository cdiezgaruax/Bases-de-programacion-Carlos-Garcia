cmake_minimum_required(VERSION 3.29)
project(Bases_de_programacion_Carlos_Garcia)

set(CMAKE_CXX_STANDARD 14)

# Añadir ejecutables para cada ejercicio
add_executable(Bases_de_programacion_Carlos_Garcia
    main.cpp
        array/uso_arrays.cpp
        array/uso_arrays.h
        bucle/bucle_for.cpp
        "funciones/ declaracion_funcion.cpp"
        funciones/declaracion_funcion.h
        instruciones/instrucciones_prueba.cpp
        variables/utilidad_variables.cpp

)