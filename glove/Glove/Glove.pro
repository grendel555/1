#-------------------------------------------------
#
# Project created by QtCreator 2016-12-04T19:14:54
#
#-------------------------------------------------

QT       += core gui
QT       += opengl
QT       += core gui opengl
QT       += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Glove
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glovewidget.cpp \
    rectangle.cpp

HEADERS  += mainwindow.h \
    glovewidget.h \
    rectangle.h

FORMS    += mainwindow.ui
LIBS += -lOpenGL32
LIBS += -LC:\Qt\5.7\msvc2015_64\libQt5OpenGL.a -lopengl32
CONFIG += windows
