#ifndef GAME_H
#define GAME_H
#include "lista.h"
#include "Nodo.h"
#include <time.h>
#include "Baraja.h"
#include <qpixmap.h>
#include <qlabel.h>
#include "Lista.h"
#include <iostream>
#include <stdlib.h>
#include <qwidget.h>
class Game
{
public:
    Lista escaleras[7];
    int random;
    Lista cartasOrdenadas[4];
    Lista restoCartas[2];
    Game();
    Baraja *bar;
    int arr[52];
    int cont;

    void llenarEscalera();
    void imprimirEscalera(QWidget *parent = 0);
    void llenarRestoCartas();
    void imprimirRestoCartas(QWidget *parent = 0);
    void imprimirCartasOrdenadas(QWidget *parent = 0);

    void sinrepetir();


};

#endif // GAME_H
