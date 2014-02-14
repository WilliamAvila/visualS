#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
#include "Card.h"

class Nodo
{
    public:
        Card *carta;
        Nodo *siguiente;
        Nodo();
        virtual ~Nodo();
    protected:
    private:
};
#endif // NODO_H
