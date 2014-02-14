#include "mainwindow.h"
#include <QApplication>
#include <time.h>
#include <iostream>
#include <Nodo.h>
#include <lista.h>
#include <Game.h>
#include <Card.h>
#include <Baraja.h>
#include <qpixmap.h>
#include <qlabel.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Game *game=new Game();




    Baraja *bar=new Baraja();
    bar->InitBaraja();
    bar->ImprimirBaraja();
    bar->ImprimirBaraja();

  /* for(int i=0;i<52;i++){

    var[i] =rand()%52;

    cout<<var[i]<<endl;
    }*/
   // game->llenarEscalera();

    w.Imprimir();
    cout<<bar->cartas.recuperar(0)->carta->getColor()<<endl;


 //game->llenarEscalera();

    return a.exec();
}
