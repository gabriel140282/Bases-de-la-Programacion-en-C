cmake_minimum_required(VERSION 3.29)
project(Bases_de_la_Programacion_en_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio 1)
include_directories(Ejercicio2)
include_directories(Ejercicio3)
include_directories(Ejercicio4)
include_directories(Ejercicio5)
include_directories(Ejercicio6)
include_directories(Ejercicio 7)
include_directories(Ejercicio8)


add_executable(Bases_de_la_Programacion_en_C
    Ejercicio 1/Perfil.cpp
        Ejercicio 1/Perfil.h
        Ejercicio2/instrucciones-prueba.cpp
        Ejercicio2/instrucciones-prueba.h
        Ejercicio3/Bucles.cpp
        Ejercicio3/Bucles.h
        Ejercicio4/Arrays.cpp
        Ejercicio4/Arrays.h
        Ejercicio5/Funciones.cpp
        Ejercicio5/Funciones.h
        Ejercicio6/punteros.cpp
        Ejercicio6/punteros.h
        Ejercicio 7/funcion.cpp
        Ejercicio 7/funcion.h
        Ejercicio8/constantes.cpp
        Ejercicio8/constantes.h)

