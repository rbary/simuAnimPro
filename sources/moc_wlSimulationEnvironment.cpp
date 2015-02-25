/****************************************************************************
** Meta object code from reading C++ file 'wlSimulationEnvironment.h'
**
** Created: Wed Feb 25 15:38:02 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wlSimulationEnvironment.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wlSimulationEnvironment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wlSimulationEnvironment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   25,   24,   24, 0x0a,
      48,   24,   24,   24, 0x0a,
      60,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wlSimulationEnvironment[] = {
    "wlSimulationEnvironment\0\0d\0"
    "SetTolerance(double)\0PrintSelf()\0"
    "PrintContent()\0"
};

void wlSimulationEnvironment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wlSimulationEnvironment *_t = static_cast<wlSimulationEnvironment *>(_o);
        switch (_id) {
        case 0: _t->SetTolerance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->PrintSelf(); break;
        case 2: _t->PrintContent(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wlSimulationEnvironment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wlSimulationEnvironment::staticMetaObject = {
    { &wlMesh::staticMetaObject, qt_meta_stringdata_wlSimulationEnvironment,
      qt_meta_data_wlSimulationEnvironment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wlSimulationEnvironment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wlSimulationEnvironment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wlSimulationEnvironment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wlSimulationEnvironment))
        return static_cast<void*>(const_cast< wlSimulationEnvironment*>(this));
    return wlMesh::qt_metacast(_clname);
}

int wlSimulationEnvironment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = wlMesh::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
