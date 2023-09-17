#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include "ListaDoblementeEnlazada.cpp"
#include <random>
#include "Nodo.cpp"

int main() {
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada(); // Creacion tipo objeto puntero
    // Insert following linked list nodes
    random_device rd;
    mt19937 generator (rd());
    uniform_int_distribution<int> distribution(3,22);
    int n= distribution (generator);

    for (int i=0; i<=n; i++){
        puntero->insert();
    }


    //  NULL <- 10 <--> 20 <--> 30 <--> 40 <--> 50 <--> 60 <--> 70->NULL
    puntero->display(); // llamada a una función miembro del objeto al que apunta puntero
    return 0;

}
