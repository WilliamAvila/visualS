#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <qlabel.h>
#include <qpixmap.h>
#include <QMainWindow>
#include <QMouseEvent>
#include <iostream>
#include "Baraja.h"
#include "Card.h"
#include "Game.h"
#include <time.h>
#include <stdlib.h>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
     void Imprimir();
    ~MainWindow();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
