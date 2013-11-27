/****************************************************************************
** Meta object code from reading C++ file 'searchbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   10,   10,   10, 0x08,
      91,   10,   10,   10, 0x08,
     104,   10,   10,   10, 0x08,
     116,  111,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchBar[] = {
    "SearchBar\0\0text,flags,found\0"
    "searchText(QString,QWebPage::FindFlags,bool*)\0"
    "searchPrevious()\0searchNext()\0done()\0"
    "arg1\0on_textBar_textChanged(QString)\0"
};

void SearchBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchBar *_t = static_cast<SearchBar *>(_o);
        switch (_id) {
        case 0: _t->searchText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QWebPage::FindFlags(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        case 1: _t->searchPrevious(); break;
        case 2: _t->searchNext(); break;
        case 3: _t->done(); break;
        case 4: _t->on_textBar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchBar,
      qt_meta_data_SearchBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchBar))
        return static_cast<void*>(const_cast< SearchBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int SearchBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SearchBar::searchText(QString _t1, QWebPage::FindFlags _t2, bool * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
