/****************************************************************************
** Meta object code from reading C++ file 'wlSimulator.h'
**
** Created: Wed Feb 25 15:37:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wlSimulator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wlSimulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wlSimulator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x0a,
      38,   36,   12,   12, 0x0a,
      98,   96,   12,   12, 0x0a,
     160,  157,   12,   12, 0x0a,
     207,   96,   12,   12, 0x0a,
     257,  255,   12,   12, 0x0a,
     298,   96,   12,   12, 0x0a,
     342,  340,   12,   12, 0x0a,
     368,  340,   12,   12, 0x0a,
     398,   96,   12,   12, 0x0a,
     418,   96,   12,   12, 0x0a,
     439,   12,   12,   12, 0x0a,
     447,   12,   12,   12, 0x0a,
     454,   12,   12,   12, 0x0a,
     461,   12,   12,   12, 0x0a,
     468,   12,   12,   12, 0x0a,
     475,   12,   12,   12, 0x0a,
     487,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wlSimulator[] = {
    "wlSimulator\0\0index\0SetReaction(int)\0"
    "k\0SetAttenuationCoefficientForPureKinematicReaction(double)\0"
    "t\0SetAttenuationCoefficientForPureKinematicReaction(QString)\0"
    "Ks\0SetSpringCoefficientForPenaltyReaction(double)\0"
    "SetSpringCoefficientForPenaltyReaction(QString)\0"
    "m\0SetPointWeightForPenaltyReaction(double)\0"
    "SetPointWeightForPenaltyReaction(QString)\0"
    "n\0SetNumberOfTimeSteps(int)\0"
    "SetNumberOfTimeSteps(QString)\0"
    "SetTimeStep(double)\0SetTimeStep(QString)\0"
    "Reset()\0Step()\0Play()\0Stop()\0draw()\0"
    "PrintSelf()\0PrintContent()\0"
};

void wlSimulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wlSimulator *_t = static_cast<wlSimulator *>(_o);
        switch (_id) {
        case 0: _t->SetReaction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetAttenuationCoefficientForPureKinematicReaction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->SetAttenuationCoefficientForPureKinematicReaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetSpringCoefficientForPenaltyReaction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SetSpringCoefficientForPenaltyReaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SetPointWeightForPenaltyReaction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->SetPointWeightForPenaltyReaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->SetNumberOfTimeSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SetNumberOfTimeSteps((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->SetTimeStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->SetTimeStep((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->Reset(); break;
        case 12: _t->Step(); break;
        case 13: _t->Play(); break;
        case 14: _t->Stop(); break;
        case 15: _t->draw(); break;
        case 16: _t->PrintSelf(); break;
        case 17: _t->PrintContent(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wlSimulator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wlSimulator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_wlSimulator,
      qt_meta_data_wlSimulator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wlSimulator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wlSimulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wlSimulator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wlSimulator))
        return static_cast<void*>(const_cast< wlSimulator*>(this));
    if (!strcmp(_clname, "wlCore"))
        return static_cast< wlCore*>(const_cast< wlSimulator*>(this));
    return QObject::qt_metacast(_clname);
}

int wlSimulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
