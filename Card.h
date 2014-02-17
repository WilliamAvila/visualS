#include <string.h>
#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <qpixmap.h>
#include <qlabel.h>
#include <qwidget.h>
#include <mylabel.h>
#include <my_qlabel.h>
using namespace std;
class Card : public QLabel
{
public:
    Card();
    Card(int num,string type,string color);
    int getNum();
    string getType();
    string getColor();

    bool is_touched;
    bool is_visible;
    QPixmap img;
    my_Qlabel *lbl;

    int x,y;

    Card getCarta();

    void setNum(int num);
    void setType(string type);
    void setColor(string color);
    void showImg(int x,int y,QWidget *parent = 0);


   private:
    int numero;
    string type;
    string color;






};



#endif // CARD_H
