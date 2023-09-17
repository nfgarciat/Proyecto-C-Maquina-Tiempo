cmake_minimum_required(VERSION 3.26)
project(lista_enlazada)

set(CMAKE_CXX_STANDARD 14)

include_directories("lista enlazada")

add_executable(lista_enlazada
        "lista enlazada/ListaDoblementeEnlazada.cpp"
        "lista enlazada/ListaDoblementeEnlazada.h"
        "lista enlazada/main.cpp"
        "lista enlazada/Nodo.cpp"
        "lista enlazada/Nodo.h")
