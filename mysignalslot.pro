#-------------------------------------------------
#
# Project created by QtCreator 2017-09-12T10:40:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mysignalslot
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mydialog.cpp

HEADERS  += widget.h \
    mydialog.h

FORMS    += widget.ui \
    mydialog.ui
