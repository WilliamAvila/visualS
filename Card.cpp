#include "Card.h"

Card::Card(int num,string type,string color)
{
    this->numero=num;
    this->type=type;
    this->color=color;
    this->is_touched=false;
    this->is_visible=false;
}

Card::Card(){



}

void Card::showImg(int x,int y,QWidget *parent){
    this->lbl=new QLabel(parent);

    lbl->setPixmap(this->img);
    lbl->setGeometry(x,y,93,128);
    lbl->setAcceptDrops(true);
    lbl->raise();
    lbl->show();

}

string Card::getColor(){
    return this->color;
}

int Card::getNum(){
    return this->numero;
}

string Card::getType(){
    return this->type;
}
void Card::setColor(string color){

    this->color=color;
}

void Card::setNum(int num){
    this->numero=num;
}

void Card::setType(string type){

    this->type=type;
}
