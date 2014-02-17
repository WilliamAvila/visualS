#-------------------------------------------------
#
# Project created by QtCreator 2014-02-01T16:00:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = visualS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Card.cpp \
    Game.cpp \
    Baraja.cpp \
    Nodo.cpp \
    Lista.cpp \
    mylabel.cpp \
    my_qlabel.cpp

HEADERS  += mainwindow.h \
    Card.h \
    Game.h \
    Baraja.h \
    Nodo.h \
    Lista.h \
    mylabel.h \
    my_qlabel.h

FORMS    += mainwindow.ui

RESOURCES += \
    Resources.qrc
