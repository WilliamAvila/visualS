#include "Game.h"
#include "time.h"

Game::Game()
{
    bar=new Baraja();
    bar->InitBaraja();
    bar->InitCardImages();
    srand(time(NULL));
}
void Game::llenarEscalera(){




    int pos=rand()%(bar->cartas.cont);
    Nodo *t1 =bar->cartas.recuperar(pos);
    bar->cartas.eliminar(pos);
    escaleras[0].insertar(0,t1);
    t1->carta->is_visible=true;
    cout<<t1->carta->is_visible<<endl;


    for(int i=0;i<2;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      escaleras[1].insertar(i,t);
        t->carta->is_visible=false;
      if(i==1)
          t->carta->is_visible=true;
    cout<<t->carta->is_visible<<endl;

    }
    for(int i=0;i<3;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      escaleras[2].insertar(i,t);
        t->carta->is_visible=false;
      if(i==2)
          t->carta->is_visible=true;

    cout<<t->carta->is_visible<<endl;
    }
    for(int i=0;i<4;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      escaleras[3].insertar(i,t);
        t->carta->is_visible=false;
      if(i==3)
          t->carta->is_visible=true;
    cout<<t->carta->is_visible<<endl;

    }
    for(int i=0;i<5;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      escaleras[4].insertar(i,t);
           t->carta->is_visible=false;
      if(i==4)
          t->carta->is_visible=true;

    cout<<t->carta->is_visible<<endl;
    }
    for(int i=0;i<6;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      escaleras[5].insertar(i,t);
        t->carta->is_visible=false;
      if(i==5)
          t->carta->is_visible=true;
    cout<<t->carta->is_visible<<endl;
    }

    for(int i=0;i<7;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      escaleras[6].insertar(i,t);
      t->carta->is_visible=false;
      if(i==6)
          t->carta->is_visible=true;
      cout<<t->carta->is_visible<<endl;
    }
}
void Game::imprimirEscalera(QWidget *parent){
    int x=10;
    int y=180;
    this->llenarEscalera();


    for(int i=0;i<7;i++){
        for(int j=0;j<escaleras[i].cont;j++){

                escaleras[i].recuperar(j)->carta->showImg(x,y,parent);


           y+=20;
         }
        y=180;
        x+=100;

    }


}



void Game::llenarRestoCartas(){
     int pos=rand()%(bar->cartas.cont);
    for(int i=0;i<bar->cartas.cont;i++){
      pos=rand()%bar->cartas.cont;

      Nodo *t =bar->cartas.recuperar(pos);
      bar->cartas.eliminar(pos);
      restoCartas[0].insertar(i,t);
      /*if(i==bar->cartas.cont-1)
          t->carta->is_visible=true;*/
    }





}
void Game::imprimirRestoCartas(QWidget *parent){
    int x=10;
    int y=20;
    this->llenarRestoCartas();


    for(int i=0;i<restoCartas[0].cont;i++){
     restoCartas[0].recuperar(i)->carta->showImg(x,y,parent);

    }




}

void Game::imprimirCartasOrdenadas(QWidget *parent){
    int x=210;
    int y=20;
            cartasOrdenadas[0].insertar(0,new Nodo());
            cartasOrdenadas[0].recuperar(0)->carta->is_visible=true;
            cartasOrdenadas[0].recuperar(0)->carta->img=QPixmap(":/Cards/Vacio.png");
            cartasOrdenadas[0].recuperar(0)->carta->showImg(x,y,parent);
}






