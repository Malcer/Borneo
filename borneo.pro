#-------------------------------------------------
#
# Project created by QtCreator 2011-11-13T07:29:47
#
#-------------------------------------------------
#
#   Copyright (c) 2012, Malcer <malcer@gmx.com>
#
#   This software is distributed as free and open source software, licensed under the LGPL license.
#
#-------------------------------------------------

QT       += core gui webkit network

TARGET = borneo
TEMPLATE = app
VERSION = Pre-Alpha

SOURCES += main.cpp \
    mainwindow.cpp \
    searchbar.cpp

HEADERS  += \
    mainwindow.h \
    searchbar.h

FORMS    += \
    mainwindow.ui \
    about.ui \
    searchbar.ui

RESOURCES += \
    pieces.qrc

OTHER_FILES +=

TRANSLATIONS += lng/trans_es.ts 

unix {
    isEmpty(PREFIX) {
        PREFIX = /usr
    }
    BINDIR = $$PREFIX/bin

    DATADIR = $$PREFIX/share
    PKGDATADIR = $$DATADIR/borneo
    DEFINES += DATADIR=\\\"$$DATADIR\\\" PKGDATADIR=\\\"$$PKGDATADIR\\\"
}
