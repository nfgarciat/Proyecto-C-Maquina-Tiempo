//
// Created by Sebastian Nacy Ramirez y Franchesca Garcia T
//
#include <iostream>
#include "ListaDoblementeEnlazada.h"
using namespace std;



ListaDoblementeEnlazada::ListaDoblementeEnlazada() {
    this->head = nullptr;
}

// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(){
    // Crear un nuevo nodo
    Nodo *node = new Nodo();
    node->PtrFuturo = this->head;
    // Cuando la lista no está vacía
    if (this->head != nullptr)
    {
        this->head->PtrPasado = node;
    }
    // Hacer que el nuevo nodo sea el Head
    this->head = node;
}

// Mostrar elementos de la lista doblemente enlazada
void ListaDoblementeEnlazada:: display()
{
    if (this->head == nullptr)
    {
        cout << "La lista está vacía" << endl;
    }
    else
    {
        cout << "Total de eventos: " << Nodo::numNodos<< endl;
        cout << " Elementos de la lista doblemente enlazada:" << endl;
        // Obtener el primer nodo de la lista
        Nodo *temp = this->head;
        // iterate linked list
        while (temp != nullptr)
        {
            // Mostrar el valor del nodo
            cout << "[" << temp->datos<< "|"<< temp->cientifico <<"|"<< temp->evento << "]->";
            // Visita el siguiente nodo
            temp = temp->PtrFuturo;
        }
      cout << "[NULL]";
    }
}