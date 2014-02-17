#ifndef MY_QLABEL_H
#define MY_QLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include <QDragEnterEvent>

class my_Qlabel : public QLabel
{
    Q_OBJECT
public:
    explicit my_Qlabel(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *);
    void dragEnterEvent(QDragEnterEvent *ev);

    int x,y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();

public slots:

};

#endif // MY_QLABEL_H
