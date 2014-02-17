#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mql=new my_Qlabel(this);
    QPixmap qp =QPixmap(":/Cards/CardBack.png");
  //  mql->setPixmap(qp);
    //mql->setGeometry(110,20,93,128);
    //mql->show();
   // mql->raise();
   // connect(this->mql,SIGNAL(Mouse_Pressed()),this,SLOT(Mouse_Pressed()));



}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{
    int x,y;
    x= ev->globalX();
   y=ev->globalY();
   cout<<x<<endl;
   cout<<y<<endl;




}
void MainWindow::Imprimir(){

    gm=new Game();

    gm->imprimirEscalera(this);
    gm->imprimirRestoCartas(this);
    gm->imprimirCartasOrdenadas(this);
    connect(gm->restoCartas[0].recuperar(gm->restoCartas[0].cont-1)->carta->lbl,SIGNAL(Mouse_Pressed()),this,SLOT(Mouse_Pressed()));
    ultima=gm->restoCartas[0].recuperar(gm->restoCartas[0].cont-1)->carta;



}

void MainWindow::Mouse_Pressed()
{
    cout<<"llego"<<endl;
    //this->setParent(this);
    //ultima->setGeometry(110,20,93,128);

    gm->restoCartas[0].recuperar(gm->restoCartas[0].cont-1)->carta->lbl->setGeometry(110,20,93,128);
    gm->restoCartas[0].recuperar(gm->restoCartas[0].cont-1)->carta->lbl->raise();
    gm->restoCartas[1].insertar(gm->restoCartas[1].cont,gm->restoCartas[0].recuperar(gm->restoCartas[0].cont-1));
    gm->restoCartas[0].eliminar(gm->restoCartas[0].cont-1);

    connect(gm->restoCartas[0].recuperar(gm->restoCartas[0].cont-1)->carta->lbl,SIGNAL(Mouse_Pressed()),this,SLOT(Mouse_Pressed()));

}



