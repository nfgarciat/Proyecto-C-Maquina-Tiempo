//
// Created by Sebastian Nacy Ramirez y Franchesca Garcia T
//

#ifndef LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#define LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#include <string>
using namespace std;
#include <iostream>
#include "Nodo.h"

class ListaDoblementeEnlazada {
public: Nodo *head;
    ListaDoblementeEnlazada();                      //constructor
    // Insert new node at beginning position
    void insert();                //insertar un nuevo nodo

    // Display node element of doubly linked list
    void display();               //mostrar los elementos de la lista

};


#endif //LISTICAS2_LISTADOBLEMENTEENLAZADA_H
