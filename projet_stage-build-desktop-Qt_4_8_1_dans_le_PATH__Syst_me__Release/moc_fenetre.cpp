/****************************************************************************
** Meta object code from reading C++ file 'fenetre.h'
**
** Created: Mon Jun 4 20:02:37 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projet_stage/fenetre.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fenetre[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      28,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,
      55,    8,    8,    8, 0x0a,
      70,    8,    8,    8, 0x0a,
      78,    8,    8,    8, 0x0a,
      94,    8,    8,    8, 0x0a,
     103,    8,    8,    8, 0x0a,
     109,    8,    8,    8, 0x0a,
     119,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_fenetre[] = {
    "fenetre\0\0telechargerImage()\0setCouleur()\0"
    "valider_dec()\0valider_sexa()\0ignor()\0"
    "afficher_dock()\0svg_as()\0svg()\0charger()\0"
    "fermerProjet()\0"
};

void fenetre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        fenetre *_t = static_cast<fenetre *>(_o);
        switch (_id) {
        case 0: _t->telechargerImage(); break;
        case 1: _t->setCouleur(); break;
        case 2: _t->valider_dec(); break;
        case 3: _t->valider_sexa(); break;
        case 4: _t->ignor(); break;
        case 5: _t->afficher_dock(); break;
        case 6: _t->svg_as(); break;
        case 7: _t->svg(); break;
        case 8: _t->charger(); break;
        case 9: _t->fermerProjet(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData fenetre::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fenetre::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fenetre,
      qt_meta_data_fenetre, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fenetre::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fenetre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fenetre::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fenetre))
        return static_cast<void*>(const_cast< fenetre*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fenetre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
