#-------------------------------------------------
#
# Project created by QtCreator 2014-02-04T11:54:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CUDAFactor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    fenetreprincipale.cpp \
    model.cpp \
    choixnombre.cpp \
    choixmethode.cpp \
    attente.cpp \
    resultat.cpp \
    comparaisonxml.cpp

HEADERS  += mainwindow.h \
    fenetreprincipale.h \
    model.h \
    choixnombre.h \
    choixmethode.h \
    attente.h \
    resultat.h \
    comparaisonxml.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    exemple.xml
