//-------------------------------------------------
//
//   Copyright (c) 2013, Malcer Quaid <malcer@gmx.com>
//
//   This software is distributed as free and open source software, licensed under the LGPL license.
//
//-------------------------------------------------

#ifndef SEARCHBAR_H
#define SEARCHBAR_H

#include <QWidget>
#include <QWebPage>

namespace Ui {
    class SearchBar;
}

class SearchBar : public QWidget {
    Q_OBJECT

public:
    explicit SearchBar(QWidget *parent = 0);
    ~SearchBar();

    void setFocus();

protected:
    void showEvent(QShowEvent *);

signals:
    void searchText(QString text, QWebPage::FindFlags flags, bool* found);

private slots:
    void searchPrevious();
    void searchNext();
    void done();

    void on_textBar_textChanged(const QString &arg1);

private:
    Ui::SearchBar *ui;
};


#endif // SEARCHBAR_H
