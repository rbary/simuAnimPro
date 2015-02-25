/****************************************************************************
** Meta object code from reading C++ file 'wlAnimatedMesh.h'
**
** Created: Wed Feb 25 15:37:54 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wlAnimatedMesh.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wlAnimatedMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wlAnimatedMesh[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x0a,
      62,   59,   15,   15, 0x0a,
      87,   84,   15,   15, 0x0a,
     112,  109,   15,   15, 0x0a,
     143,  134,   15,   15, 0x0a,
     177,  174,   15,   15, 0x0a,
     199,  196,   15,   15, 0x0a,
     221,  218,   15,   15, 0x0a,
     249,  240,   15,   15, 0x0a,
     286,  283,   15,   15, 0x0a,
     311,  308,   15,   15, 0x0a,
     336,  333,   15,   15, 0x0a,
     364,  358,   15,   15, 0x0a,
     383,  381,   15,   15, 0x0a,
     443,  441,   15,   15, 0x0a,
     505,  502,   15,   15, 0x0a,
     552,  441,   15,   15, 0x0a,
     602,  600,   15,   15, 0x0a,
     643,  441,   15,   15, 0x0a,
     687,  685,   15,   15, 0x0a,
     713,  685,   15,   15, 0x0a,
     743,  441,   15,   15, 0x0a,
     763,  441,   15,   15, 0x0a,
     786,  784,   15,   15, 0x0a,
     823,   15,  807,   15, 0x0a,
     842,   15,  807,   15, 0x0a,
     856,   15,   15,   15, 0x0a,
     868,   15,   15,   15, 0x0a,
     883,   15,   15,   15, 0x0a,
     891,   15,   15,   15, 0x0a,
     898,   15,   15,   15, 0x0a,
     905,   15,   15,   15, 0x0a,
     912,   15,   15,   15, 0x0a,
     932,  919,   15,   15, 0x0a,
     946,   15,   15,   15, 0x2a,
     957,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wlAnimatedMesh[] = {
    "wlAnimatedMesh\0\0Px,Py,Pz\0"
    "SetPosition(double,double,double)\0Px\0"
    "SetPositionX(QString)\0Py\0SetPositionY(QString)\0"
    "Pz\0SetPositionZ(QString)\0Fx,Fy,Fz\0"
    "SetForce(double,double,double)\0Fx\0"
    "SetForceX(QString)\0Fy\0SetForceY(QString)\0"
    "Fz\0SetForceZ(QString)\0Vx,Vy,Vz\0"
    "SetVelocity(double,double,double)\0Vx\0"
    "SetVelocityX(QString)\0Vy\0SetVelocityY(QString)\0"
    "Vz\0SetVelocityZ(QString)\0index\0"
    "SetReaction(int)\0k\0"
    "SetAttenuationCoefficientForPureKinematicReaction(double)\0"
    "t\0SetAttenuationCoefficientForPureKinematicReaction(QString)\0"
    "Ks\0SetSpringCoefficientForPenaltyReaction(double)\0"
    "SetSpringCoefficientForPenaltyReaction(QString)\0"
    "m\0SetPointWeightForPenaltyReaction(double)\0"
    "SetPointWeightForPenaltyReaction(QString)\0"
    "n\0SetNumberOfTimeSteps(int)\0"
    "SetNumberOfTimeSteps(QString)\0"
    "SetTimeStep(double)\0SetTimeStep(QString)\0"
    "d\0SetTolerance(double)\0QVector<double>\0"
    "GetCurrentCenter()\0GetVelocity()\0"
    "PrintSelf()\0PrintContent()\0Reset()\0"
    "Step()\0Back()\0Play()\0Stop()\0reset_camera\0"
    "makeList(int)\0makeList()\0draw()\0"
};

void wlAnimatedMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wlAnimatedMesh *_t = static_cast<wlAnimatedMesh *>(_o);
        switch (_id) {
        case 0: _t->SetPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->SetPositionX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SetPositionY((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetPositionZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SetForce((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->SetForceX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->SetForceY((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->SetForceZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->SetVelocity((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->SetVelocityX((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->SetVelocityY((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->SetVelocityZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->SetReaction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->SetAttenuationCoefficientForPureKinematicReaction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->SetAttenuationCoefficientForPureKinematicReaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->SetSpringCoefficientForPenaltyReaction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->SetSpringCoefficientForPenaltyReaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->SetPointWeightForPenaltyReaction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->SetPointWeightForPenaltyReaction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->SetNumberOfTimeSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->SetNumberOfTimeSteps((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->SetTimeStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->SetTimeStep((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->SetTolerance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: { QVector<double> _r = _t->GetCurrentCenter();
            if (_a[0]) *reinterpret_cast< QVector<double>*>(_a[0]) = _r; }  break;
        case 25: { QVector<double> _r = _t->GetVelocity();
            if (_a[0]) *reinterpret_cast< QVector<double>*>(_a[0]) = _r; }  break;
        case 26: _t->PrintSelf(); break;
        case 27: _t->PrintContent(); break;
        case 28: _t->Reset(); break;
        case 29: _t->Step(); break;
        case 30: _t->Back(); break;
        case 31: _t->Play(); break;
        case 32: _t->Stop(); break;
        case 33: _t->makeList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->makeList(); break;
        case 35: _t->draw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wlAnimatedMesh::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wlAnimatedMesh::staticMetaObject = {
    { &wlMesh::staticMetaObject, qt_meta_stringdata_wlAnimatedMesh,
      qt_meta_data_wlAnimatedMesh, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wlAnimatedMesh::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wlAnimatedMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wlAnimatedMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wlAnimatedMesh))
        return static_cast<void*>(const_cast< wlAnimatedMesh*>(this));
    return wlMesh::qt_metacast(_clname);
}

int wlAnimatedMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = wlMesh::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
