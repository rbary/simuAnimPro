/****************************************************************************
** Meta object code from reading C++ file 'wlAnimatedSphere.h'
**
** Created: Wed Feb 25 15:37:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wlAnimatedSphere.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wlAnimatedSphere.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wlAnimatedSphere[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      30,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wlAnimatedSphere[] = {
    "wlAnimatedSphere\0\0PrintSelf()\0"
    "PrintContent()\0"
};

void wlAnimatedSphere::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wlAnimatedSphere *_t = static_cast<wlAnimatedSphere *>(_o);
        switch (_id) {
        case 0: _t->PrintSelf(); break;
        case 1: _t->PrintContent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData wlAnimatedSphere::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wlAnimatedSphere::staticMetaObject = {
    { &wlAnimatedMesh::staticMetaObject, qt_meta_stringdata_wlAnimatedSphere,
      qt_meta_data_wlAnimatedSphere, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wlAnimatedSphere::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wlAnimatedSphere::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wlAnimatedSphere::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wlAnimatedSphere))
        return static_cast<void*>(const_cast< wlAnimatedSphere*>(this));
    return wlAnimatedMesh::qt_metacast(_clname);
}

int wlAnimatedSphere::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = wlAnimatedMesh::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
