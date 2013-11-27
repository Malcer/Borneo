//-------------------------------------------------
//
//   Copyright (c) 2013, Malcer <malcer@gmx.com>
//
//   This software is distributed as free and open source software, licensed under the LGPL license.
//
//-------------------------------------------------

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QMenu>
#include <QWebFrame>
#include <QWebDatabase>
#include "searchbar.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updateWeb();
    void updateText();
    void searchWeb();
    void focusURLBar();
    void updateTitle();
    void goHome();
    void goNewWindow();
    void goAbout();

    void viewFullScreen(bool enableFullScreen);
    void viewSearchBar();
    void activatePrivateBrowsing(bool privateBrowsing);

    void slotSearchText(QString text, QWebPage::FindFlags flags, bool* found);

    void viewBorneoMenuButton();

    void on_urlbar_returnPressed();

private:
    Ui::MainWindow *ui;
    QDialog aboutWindow;
    SearchBar *searchBar;

    bool fullscreen;

    //Borneo General Menu Button
    QMenu* generalMenu;
    QAction* actionActivatePlugins;
    QAction* actionActivateJavaScript;
    QAction* actionPrivateBrowsing;
    //QAction* actionSearch;
    QAction* actionFullScreen;
    QAction* actionAbout;
};

#endif // MAINWINDOW_H
