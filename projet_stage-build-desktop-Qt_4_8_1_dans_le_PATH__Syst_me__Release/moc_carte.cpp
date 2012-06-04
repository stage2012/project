/****************************************************************************
** Meta object code from reading C++ file 'carte.h'
**
** Created: Mon Jun 4 20:02:38 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projet_stage/carte.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'carte.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_carte[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      21,   19,    6,    6, 0x05,
      40,   19,    6,    6, 0x05,
      59,   19,    6,    6, 0x05,
      80,   19,    6,    6, 0x05,
     109,   19,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     128,   19,    6,    6, 0x0a,
     151,   19,    6,    6, 0x0a,
     173,    6,    6,    6, 0x0a,
     189,    6,    6,    6, 0x0a,
     206,    6,    6,    6, 0x0a,
     222,    6,    6,    6, 0x0a,
     237,    6,    6,    6, 0x0a,
     250,   19,    6,    6, 0x0a,
     273,   19,    6,    6, 0x0a,
     297,   19,    6,    6, 0x0a,
     326,   19,    6,    6, 0x0a,
     346,   19,    6,    6, 0x0a,
     372,  366,    6,    6, 0x0a,
     402,  366,    6,    6, 0x0a,
     434,  366,    6,    6, 0x0a,
     459,  366,    6,    6, 0x0a,
     484,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_carte[] = {
    "carte\0\0ChangeRes()\0p\0changeRes2(QPoint)\0"
    "ChangeZoom(QPoint)\0ChangeZoomIn(QPoint)\0"
    "signalDessinerChemin(QPoint)\0"
    "SignalFlag(QPoint)\0augmenter_zoom(QPoint)\0"
    "diminuer_zoom(QPoint)\0zoomFenetreIn()\0"
    "zoomFenetreOut()\0effacerDessin()\0"
    "fermerProjet()\0setNbpoint()\0"
    "dessinerChemin(QPoint)\0attributCouleur(QPoint)\0"
    "sauvegardeItineraire(QPoint)\0"
    "placerFlag1(QPoint)\0placerFlag2(QPoint)\0"
    "event\0mousePressEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "wheelEvent(QWheelEvent*)\0"
    "paintEvent(QPaintEvent*)\0exporter_gpx()\0"
};

void carte::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        carte *_t = static_cast<carte *>(_o);
        switch (_id) {
        case 0: _t->ChangeRes(); break;
        case 1: _t->changeRes2((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->ChangeZoom((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->ChangeZoomIn((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->signalDessinerChemin((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->SignalFlag((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->augmenter_zoom((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->diminuer_zoom((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->zoomFenetreIn(); break;
        case 9: _t->zoomFenetreOut(); break;
        case 10: _t->effacerDessin(); break;
        case 11: _t->fermerProjet(); break;
        case 12: _t->setNbpoint(); break;
        case 13: _t->dessinerChemin((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->attributCouleur((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 15: _t->sauvegardeItineraire((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->placerFlag1((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: _t->placerFlag2((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 18: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 19: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 20: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 21: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 22: _t->exporter_gpx(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData carte::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject carte::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_carte,
      qt_meta_data_carte, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &carte::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *carte::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *carte::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_carte))
        return static_cast<void*>(const_cast< carte*>(this));
    return QWidget::qt_metacast(_clname);
}

int carte::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void carte::ChangeRes()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void carte::changeRes2(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void carte::ChangeZoom(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void carte::ChangeZoomIn(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void carte::signalDessinerChemin(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void carte::SignalFlag(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
