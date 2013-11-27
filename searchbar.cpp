//-------------------------------------------------
//
//   Copyright (c) 2013, Malcer <malcer@gmx.com>
//   Copyright (c) 2012, Aaron Lewis <the.warl0ck.1989@gmail.com>
//
//   This software is distributed as free and open source software, licensed under the LGPL license.
//
//-------------------------------------------------
//
//Inspired in Lightweight2 code by Thomas Kamps :)
//

#include "searchbar.h"
#include "ui_searchbar.h"

SearchBar::SearchBar(QWidget *parent) : QWidget(parent), ui(new Ui::SearchBar) {
    ui->setupUi(this);

    setMaximumHeight(32);
    ui->textBar->setFixedHeight(28);

    connect(ui->previousButton, SIGNAL(clicked()), this, SLOT(searchPrevious()));
    connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(searchNext()));
    connect(ui->textBar, SIGNAL(returnPressed()), this, SLOT(searchNext()));
    connect(ui->doneButton, SIGNAL(clicked()), this, SLOT(done()));
}

SearchBar::~SearchBar() {
    delete ui;
}

void SearchBar::setFocus() {
    ui->textBar->setFocus(Qt::OtherFocusReason);
}

void SearchBar::showEvent(QShowEvent *)
{
    ui->textBar->setFocus();
}

void SearchBar::searchPrevious() {
    QWebPage::FindFlags flags = QWebPage::FindBackward;
    if (ui->checkBox->isChecked()) flags |= QWebPage::FindCaseSensitively;
    bool found = true;
    emit(searchText(ui->textBar->text(), flags, &found));

    if (found) {
        ui->textBar->setStyleSheet("background:rgb(192,255,192); font:black;");
    } else {
        ui->textBar->setStyleSheet("background:rgb(255,192,192); font:black;");
    }
}

void SearchBar::searchNext() {
    QWebPage::FindFlags flags = 0;
    if (ui->checkBox->isChecked()) flags |= QWebPage::FindCaseSensitively;
    bool found = true;
    emit(searchText(ui->textBar->text(), flags, &found));

    if (found) {
        ui->textBar->setStyleSheet("background:rgb(192,255,192); font:black;");
    } else {
        ui->textBar->setStyleSheet("background:rgb(255,192,192); font:black;");
    }
}

void SearchBar::done() {
    ui->textBar->setText("");
    ui->textBar->setStyleSheet("");
    ui->checkBox->setChecked(false);
    hide();
}

void SearchBar::on_textBar_textChanged(const QString &arg1)
{

}
