/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      24,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      63,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     100,   11,   11,   11, 0x08,
     127,  110,   11,   11, 0x08,
     148,   11,   11,   11, 0x08,
     180,  164,   11,   11, 0x08,
     227,  210,   11,   11, 0x08,
     277,   11,   11,   11, 0x08,
     300,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0updateWeb()\0updateText()\0"
    "searchWeb()\0focusURLBar()\0updateTitle()\0"
    "goHome()\0goNewWindow()\0goAbout()\0"
    "enableFullScreen\0viewFullScreen(bool)\0"
    "viewSearchBar()\0privateBrowsing\0"
    "activatePrivateBrowsing(bool)\0"
    "text,flags,found\0"
    "slotSearchText(QString,QWebPage::FindFlags,bool*)\0"
    "viewBorneoMenuButton()\0on_urlbar_returnPressed()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->updateWeb(); break;
        case 1: _t->updateText(); break;
        case 2: _t->searchWeb(); break;
        case 3: _t->focusURLBar(); break;
        case 4: _t->updateTitle(); break;
        case 5: _t->goHome(); break;
        case 6: _t->goNewWindow(); break;
        case 7: _t->goAbout(); break;
        case 8: _t->viewFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->viewSearchBar(); break;
        case 10: _t->activatePrivateBrowsing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->slotSearchText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QWebPage::FindFlags(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 12: _t->viewBorneoMenuButton(); break;
        case 13: _t->on_urlbar_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
