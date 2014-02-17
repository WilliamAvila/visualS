#include "my_qlabel.h"

my_Qlabel::my_Qlabel(QWidget *parent) :
    QLabel(parent)
{
}
void my_Qlabel::mousePressEvent(QMouseEvent *ev)
{

    emit Mouse_Pressed();
}

void my_Qlabel::mouseMoveEvent(QMouseEvent *ev)
{
    this->x=ev->x();
    this->y=ev->y();
    emit Mouse_Pos();
}

void my_Qlabel::leaveEvent(QEvent *)
{
    emit Mouse_Left();
}

void my_Qlabel::dragEnterEvent(QDragEnterEvent *ev)
{

}
