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
#include "mylabel.h"
#include <stdlib.h>
#include <my_qlabel.h>

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
     my_Qlabel *mql;
     Game *gm;
     Card *ultima;


private:
    Ui::MainWindow *ui;
protected:
     void mousePressEvent(QMouseEvent *ev);

private slots:
    void Mouse_Pressed();


};

#endif // MAINWINDOW_H
