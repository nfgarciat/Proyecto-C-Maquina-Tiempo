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
    string evento;
    string cientifico;
    int datos;
    Nodo* PtrPasado;
    Nodo* PtrFuturo;
    static int numNodos;
    static string eventoAnt;
    static int datoA;
    static Nodo* punteroA;
    static Nodo* punteroB;
    static Nodo* punteroC;

    Nodo();

    Nodo( Nodo* n);// crea el nodo y lo enlaza a n

    int datoNodo( );

    Nodo* enlaceNodoPasado( );

    Nodo* enlaceNodoFuturo( );

    void ponerEnlacePasado(Nodo* pasado);

    void ponerEnlaceFuturo(Nodo* futuro);

};



#endif //LISTICAS2_NODO_H
