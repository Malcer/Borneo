//-------------------------------------------------
//
//   Copyright (c) 2013, Malcer <malcer@gmx.com>
//   Copyright (c) 2012, Aaron Lewis <the.warl0ck.1989@gmail.com>
//
//   This software is distributed as free and open source software, licensed under the LGPL license.
//
//-------------------------------------------------

#include <QtGui/QApplication>
#include "mainwindow.h"

#include <QTranslator>
#include <QLocale>
#include <QWebSettings>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //TRANSLATIONS
    QTranslator trans;
    trans.load(QString("lng/trans_%1").arg(QLocale::system().name()), QCoreApplication::applicationDirPath());
    a.installTranslator(&trans);

    //PATHS AND CONFIGURATIONS
    QWebSettings* gloSettings = QWebSettings::globalSettings();
    gloSettings->setIconDatabasePath(QDir::homePath() + "/.borneo");

    //WEBKIT PLUGINS AND INFO
    QWebSettings::globalSettings()->setIconDatabasePath(QDir::homePath() + "/.borneo");
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::JavascriptEnabled, true);


    //OTHERS
    a.setApplicationName("Borneo");
    a.setOrganizationName("Borneo");
    a.setApplicationVersion("Pre-Alpha");


    MainWindow w;
    w.show();

    return a.exec();
}
