//
// Created by Sebastian Nacy Ramirez y Franchesca Garcia T
//

#ifndef LISTICAS2_NODO_H
#define LISTICAS2_NODO_H
#include <string>
using namespace std;
#include <iostream>


class Nodo
{
public:
    string evento;               //los que no tienen static son atributos de instancia, por ende, cada objeto tipo
    string cientifico;           //nodo que se cree, tiene guardado esas 5 variables
    int datos;
    Nodo* PtrPasado;             //puntero que apunta hacia un nodo
    Nodo* PtrFuturo;
    static int numNodos;                //variables estaticas solo existe una copia de esa variable para toda la clase
    static string eventoAnt;           //almacena info que debe ser compartida entre todas las instancias de la clase
    static int datoA;                 //una sola para todos, todos los nodos comparten esos 3

    Nodo();

    Nodo( Nodo* n);// crea el nodo y lo enlaza a n

    int datoNodo( );                     //metodos de instancia (que cada nodo va a poder ejecutar)

    Nodo* enlaceNodoPasado( );           //devuelve el puntero hacia el nodo pasado

    Nodo* enlaceNodoFuturo( );

    void ponerEnlacePasado(Nodo* pasado);  // se le envia un puntero a un nodo, que seria pasado

    void ponerEnlaceFuturo(Nodo* futuro);

};



#endif //LISTICAS2_NODO_H
