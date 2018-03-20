#-------------------------------------------------
#
# Project created by QtCreator 2018-03-20T18:58:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = trabalho-cg
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

QT += opengl

LIBS += -lGL \
        -lGLU \
        -lglut
