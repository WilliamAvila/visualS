#include "baraja.h"

Baraja::Baraja()
{

}

void Baraja::InitBaraja(){
    int j=0,k=0,l=0;
    for(int i=0;i<52;i++){
        cartas.insertar(i,new Nodo());
        if(i>=0&&i<13){
        cartas.recuperar(i)->carta->setColor("rojo");
        cartas.recuperar(i)->carta->setNum(i);
        cartas.recuperar(i)->carta->setType("Diamantes");
        }

        if(i>=13&&i<26){
            cartas.recuperar(i)->carta->setColor("rojo");
            cartas.recuperar(i)->carta->setNum(j);
            cartas.recuperar(i)->carta->setType("Corazones");
            j++;

        }
        if(i>=26&&i<39){
            cartas.recuperar(i)->carta->setColor("negro");
            cartas.recuperar(i)->carta->setNum(k);
            cartas.recuperar(i)->carta->setType("espadas");
            k++;

        }

        if(i>=39&&i<=52){
            j=0;
            cartas.recuperar(i)->carta->setColor("negro");
            cartas.recuperar(i)->carta->setNum(l);
            cartas.recuperar(i)->carta->setType("trebol");
            l++;

        }

    }

}

void Baraja::InitCardImages(){


    cartas.recuperar(0)->carta->img= QPixmap(":/Cards/CAredDiamond.png");
    cartas.recuperar(1)->carta->img= QPixmap(":/Cards/C2redDiamond.png");
    cartas.recuperar(2)->carta->img= QPixmap(":/Cards/C3redDiamond.png");
    cartas.recuperar(3)->carta->img= QPixmap(":/Cards/C4redDiamond.png");
    cartas.recuperar(4)->carta->img= QPixmap(":/Cards/C5redDiamond.png");
    cartas.recuperar(5)->carta->img= QPixmap(":/Cards/C6redDiamond.png");
    cartas.recuperar(6)->carta->img= QPixmap(":/Cards/C7redDiamond.png");
    cartas.recuperar(7)->carta->img= QPixmap(":/Cards/C8redDiamond.png");
    cartas.recuperar(8)->carta->img= QPixmap(":/Cards/C9redDiamond.png");
    cartas.recuperar(9)->carta->img= QPixmap(":/Cards/C10redDiamond.png");
    cartas.recuperar(10)->carta->img= QPixmap(":/Cards/CJredDiamond.png");
    cartas.recuperar(11)->carta->img= QPixmap(":/Cards/CQredDiamond.png");
    cartas.recuperar(12)->carta->img= QPixmap(":/Cards/CKredDiamond.png");

    cartas.recuperar(13)->carta->img= QPixmap(":/Cards/CAredHeart.png");
    cartas.recuperar(14)->carta->img= QPixmap(":/Cards/C2redHeart.png");
    cartas.recuperar(15)->carta->img= QPixmap(":/Cards/C3redHeart.png");
    cartas.recuperar(16)->carta->img= QPixmap(":/Cards/C4redHeart.png");
    cartas.recuperar(17)->carta->img= QPixmap(":/Cards/C5redHeart.png");
    cartas.recuperar(18)->carta->img= QPixmap(":/Cards/C6redHeart.png");
    cartas.recuperar(19)->carta->img= QPixmap(":/Cards/C7redHeart.png");
    cartas.recuperar(20)->carta->img= QPixmap(":/Cards/C8redHeart.png");
    cartas.recuperar(21)->carta->img= QPixmap(":/Cards/C9redHeart.png");
    cartas.recuperar(22)->carta->img= QPixmap(":/Cards/C10redHeart.png");
    cartas.recuperar(23)->carta->img= QPixmap(":/Cards/CJredHeart.png");
    cartas.recuperar(24)->carta->img= QPixmap(":/Cards/CQredHeart.png");
    cartas.recuperar(25)->carta->img= QPixmap(":/Cards/CKredHeart.png");

    cartas.recuperar(26)->carta->img= QPixmap(":/Cards/CAblackSword.png");
    cartas.recuperar(27)->carta->img= QPixmap(":/Cards/C2blackSword.png");
    cartas.recuperar(28)->carta->img= QPixmap(":/Cards/C3blackSword.png");
    cartas.recuperar(29)->carta->img= QPixmap(":/Cards/C4blackSword.png");
    cartas.recuperar(30)->carta->img= QPixmap(":/Cards/C5blackSword.png");
    cartas.recuperar(31)->carta->img= QPixmap(":/Cards/C6blackSword.png");
    cartas.recuperar(32)->carta->img= QPixmap(":/Cards/C7blackSword.png");
    cartas.recuperar(33)->carta->img= QPixmap(":/Cards/C8blackSword.png");
    cartas.recuperar(34)->carta->img= QPixmap(":/Cards/C9blackSword.png");
    cartas.recuperar(35)->carta->img= QPixmap(":/Cards/C10blackSword.png");
    cartas.recuperar(36)->carta->img= QPixmap(":/Cards/CJblackSword.png");
    cartas.recuperar(37)->carta->img= QPixmap(":/Cards/CQblackSword.png");
    cartas.recuperar(38)->carta->img= QPixmap(":/Cards/CKblackSword.png");

    cartas.recuperar(39)->carta->img= QPixmap(":/Cards/CAblackS.png");
    cartas.recuperar(40)->carta->img= QPixmap(":/Cards/C2blackS.png");
    cartas.recuperar(41)->carta->img= QPixmap(":/Cards/C3blackS.png");
    cartas.recuperar(42)->carta->img= QPixmap(":/Cards/C4blackS.png");
    cartas.recuperar(43)->carta->img= QPixmap(":/Cards/C5blackS.png");
    cartas.recuperar(44)->carta->img= QPixmap(":/Cards/C6blackS.png");
    cartas.recuperar(45)->carta->img= QPixmap(":/Cards/C7blackS.png");
    cartas.recuperar(46)->carta->img= QPixmap(":/Cards/C8blackS.png");
    cartas.recuperar(47)->carta->img= QPixmap(":/Cards/C9blackS.png");
    cartas.recuperar(48)->carta->img= QPixmap(":/Cards/C10blackS.png");
    cartas.recuperar(49)->carta->img= QPixmap(":/Cards/CJblackS.png");
    cartas.recuperar(50)->carta->img= QPixmap(":/Cards/CQblackS.png");
    cartas.recuperar(51)->carta->img= QPixmap(":/Cards/CKblackS.png");




}


void Baraja:: ImprimirBaraja(){
    cout<<"\nContador: "<<cartas.cont<<endl;
    Nodo *tem=cartas.inicio;
            while(tem!=NULL){
                cout<<"---"<<tem->carta->getColor()<<" "<<tem->carta->getNum()<<" "<<tem->carta->getType()<<endl;
                tem=tem->siguiente;
             }


}


