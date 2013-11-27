//-------------------------------------------------
//
//   Copyright (c) 2013, Malcer <malcer@gmx.com>
//   Copyright (c) 2012, Aaron Lewis <the.warl0ck.1989@gmail.com>
//
//   This software is distributed as free and open source software, licensed under the LGPL license.
//
//-------------------------------------------------

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_about.h"

#include <QDebug>
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fullscreen = false;

    //OTHERS
    Ui::About aboutUi;
    aboutUi.setupUi(&aboutWindow);

    //SEARCH BAR
    searchBar = new SearchBar (this);
    searchBar->hide();
    connect (searchBar , SIGNAL(searchText(QString,QWebPage::FindFlags,bool*))
             , SLOT(slotSearchText(QString,QWebPage::FindFlags,bool*)));
    ui->centralWidget->layout()->addWidget(searchBar);

    //SHORTSCUTS
    new QShortcut(QKeySequence(tr("F11")), this, SLOT(viewFullScreen()));
    new QShortcut(QKeySequence(tr("Ctrl+F")), this, SLOT(viewSearchBar()));

    //BORNEO GENERAL MENU BUTTON
    generalMenu = new QMenu(this);
    actionPrivateBrowsing = new QAction(tr("Browse in private mode"), this);
    actionPrivateBrowsing->setCheckable(true);
    actionFullScreen = new QAction(tr("Full screen"), this);
    actionFullScreen->setCheckable(true);
    actionFullScreen->setIcon(QIcon("view-fullscreen"));
    actionAbout = new QAction(tr("About Borneo"), this);
    actionAbout->setIcon(QIcon("help-about"));

    //CONNECTIONS
    connect(actionAbout, SIGNAL(triggered()), this, SLOT(goAbout()));
    connect(actionFullScreen, SIGNAL(toggled(bool)), this, SLOT(viewFullScreen(bool)));
    connect(actionPrivateBrowsing, SIGNAL(toggled(bool)), this, SLOT(activatePrivateBrowsing(bool)));

    //BORNEO GENERAL MENU BUTTON ADD ENTRIES
    generalMenu->addAction(actionPrivateBrowsing);
    generalMenu->addSeparator();
    generalMenu->addAction(actionFullScreen);
    generalMenu->addSeparator();
    generalMenu->addAction(actionAbout);

    ui->menuButton->setMenu(generalMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotSearchText(QString text, QWebPage::FindFlags flags, bool* found)
{
    *found = ui->webView->page()->findText(text , flags);

//    if ( *found == false )
//    {
//        ui->webView->page()->action(QWebPage::MoveToStartOfDocument);
//        *found = ui->webView->page()->findText(text , flags);
//    }
}

void MainWindow::searchWeb()
{
    QUrl url;
    QString urlbar;
    urlbar = ui->urlbar->displayText();
    url = url.fromUserInput("http://www.duckduckgo.com/?q=" + urlbar);
    ui->webView->setUrl(url);
}

void MainWindow::focusURLBar()
{
    ui->urlbar->setFocus();
    ui->urlbar->selectAll();
}

void MainWindow::updateWeb()
{
    QUrl url;
    QString urlbar;
    urlbar = ui->urlbar->displayText();
    url = url.fromUserInput(urlbar);
    ui->webView->setUrl(url);
}

void MainWindow::updateText()
{
    QUrl url;
    QString texturl;
    url = ui->webView->url();
    texturl = url.toEncoded();
    ui->urlbar->setText(texturl);
}

void MainWindow::updateTitle()
{
    QString title;
    title = ui->webView->title();
    MainWindow::setWindowTitle(title + " - Borneo");
}

void MainWindow::goHome()
{
    QUrl url;
    url = ("qrc:/dostart/dostart/index.html");

    if ( url != ui->webView->url() )
        ui->webView->setUrl(url);
}

void MainWindow::goNewWindow()
{
    MainWindow *newWindow=new MainWindow();
    newWindow->show();
}

void MainWindow::goAbout()
{
    aboutWindow.show();
}

void MainWindow::viewFullScreen(bool enableFullScreen)
{
    if (fullscreen) {
        this->setWindowState(Qt::WindowMaximized);
        fullscreen = false;
    } else {
        this->setWindowState(Qt::WindowFullScreen);
        fullscreen = true;
    }
}

void MainWindow::viewBorneoMenuButton()
{
    ui->menuButton->setVisible(!ui->menuButton->isVisible());
}

void MainWindow::viewSearchBar()
{
    searchBar->show();
}

void MainWindow::activatePrivateBrowsing(bool privateBrowsing)
{
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PrivateBrowsingEnabled, privateBrowsing);
}

void MainWindow::on_urlbar_returnPressed()
{
    static const QRegExp urlPattern ("^(([a-z]+):[/\\\\]+)?([a-z]+\\.)+/?");
    if ( urlPattern.indexIn( ui->urlbar->text() ) != -1 )
    {
        qDebug() << "Surfing";
        updateWeb();
    }
    else
    {
        qDebug() << "Searching";
        searchWeb();
    }
}
