#ifndef BARAJA_H
#define BARAJA_H
#include <iostream>
#include <string.h>
#include "Lista.h"
#include "Card.h"
#include "qpixmap.h"
using namespace std;

class Baraja
{
public:

    Lista cartas;
    Baraja();
    void InitBaraja();
    void CrearCarta(int numero,string type,string color);
    void ImprimirBaraja();
    void InitCardImages();
    Nodo getCarta(int pos);
 private:

};

#endif // BARAJA_H
