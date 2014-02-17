#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent)
{


}
void MyLabel::mousePressEvent(QMouseEvent * e)
{

    this->is_press=true;
        this->x=e->x();
        this->y=e->y();


          cout<<"X:"<<x<<" Y:"<<y<<endl;

            cout<<is_pressed()<<endl;



}



bool MyLabel::is_pressed(){

    return is_press;
}
