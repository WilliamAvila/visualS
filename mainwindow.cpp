#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{

    delete ui;
}
void MainWindow::Imprimir(){

    Game *gm=new Game();

    gm->imprimirEscalera(this);
    gm->imprimirRestoCartas(this);
    gm->imprimirCartasOrdenadas(this);

}
