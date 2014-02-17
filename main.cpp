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
#include <mylabel.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Solitaire");
    w.show();

    Baraja *bar=new Baraja();
    bar->InitBaraja();

    bar->ImprimirBaraja();





    w.Imprimir();








    return a.exec();
}
