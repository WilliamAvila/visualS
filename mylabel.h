#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>
#include <QPoint>
#include <QMouseEvent>
#include <iostream>
#include <QDebug>

using namespace std;

class MyLabel: public QLabel
{

public:
    MyLabel(QWidget *parent);
    int x,y;
    bool is_press=false;
    bool is_pressed();
    int mi_x;
    int mi_y;


    void mousePressEvent(QMouseEvent * e);


signals:
  void Mouse_Pressed();




};

#endif // MYLABEL_H
