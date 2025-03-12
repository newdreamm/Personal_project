/****************************************************************************
** Meta object code from reading C++ file 'mansignals.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qosbrowser/src/middle/signals/mansignals.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mansignals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManSignals_t {
    QByteArrayData data[27];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManSignals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManSignals_t qt_meta_stringdata_ManSignals = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ManSignals"
QT_MOC_LITERAL(1, 11, 12), // "loginSuccess"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "error"
QT_MOC_LITERAL(4, 31, 3), // "api"
QT_MOC_LITERAL(5, 35, 3), // "msg"
QT_MOC_LITERAL(6, 39, 3), // "req"
QT_MOC_LITERAL(7, 43, 7), // "unLogin"
QT_MOC_LITERAL(8, 51, 14), // "bucketsSuccess"
QT_MOC_LITERAL(9, 66, 15), // "QList<MyBucket>"
QT_MOC_LITERAL(10, 82, 14), // "objectsSuccess"
QT_MOC_LITERAL(11, 97, 15), // "QList<MyObject>"
QT_MOC_LITERAL(12, 113, 7), // "objects"
QT_MOC_LITERAL(13, 121, 19), // "deleteBucketSuccess"
QT_MOC_LITERAL(14, 141, 10), // "bucketname"
QT_MOC_LITERAL(15, 152, 13), // "startDownload"
QT_MOC_LITERAL(16, 166, 5), // "jobId"
QT_MOC_LITERAL(17, 172, 3), // "key"
QT_MOC_LITERAL(18, 176, 9), // "localPath"
QT_MOC_LITERAL(19, 186, 5), // "total"
QT_MOC_LITERAL(20, 192, 15), // "downloadProcess"
QT_MOC_LITERAL(21, 208, 5), // "jobid"
QT_MOC_LITERAL(22, 214, 11), // "transferred"
QT_MOC_LITERAL(23, 226, 15), // "downloadSuccess"
QT_MOC_LITERAL(24, 242, 11), // "startUpload"
QT_MOC_LITERAL(25, 254, 13), // "uploadProcess"
QT_MOC_LITERAL(26, 268, 13) // "uploadSuccess"

    },
    "ManSignals\0loginSuccess\0\0error\0api\0"
    "msg\0req\0unLogin\0bucketsSuccess\0"
    "QList<MyBucket>\0objectsSuccess\0"
    "QList<MyObject>\0objects\0deleteBucketSuccess\0"
    "bucketname\0startDownload\0jobId\0key\0"
    "localPath\0total\0downloadProcess\0jobid\0"
    "transferred\0downloadSuccess\0startUpload\0"
    "uploadProcess\0uploadSuccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManSignals[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    3,   75,    2, 0x06 /* Public */,
       7,    0,   82,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      13,    1,   89,    2, 0x06 /* Public */,
      15,    4,   92,    2, 0x06 /* Public */,
      20,    3,  101,    2, 0x06 /* Public */,
      23,    1,  108,    2, 0x06 /* Public */,
      24,    3,  111,    2, 0x06 /* Public */,
      25,    3,  118,    2, 0x06 /* Public */,
      26,    1,  125,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QJsonValue,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::ULongLong,   21,   22,   19,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::ULongLong,   16,   22,   19,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void ManSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManSignals *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginSuccess(); break;
        case 1: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QJsonValue(*)>(_a[3]))); break;
        case 2: _t->unLogin(); break;
        case 3: _t->bucketsSuccess((*reinterpret_cast< QList<MyBucket>(*)>(_a[1]))); break;
        case 4: _t->objectsSuccess((*reinterpret_cast< const QList<MyObject>(*)>(_a[1]))); break;
        case 5: _t->deleteBucketSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->startDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qulonglong(*)>(_a[4]))); break;
        case 7: _t->downloadProcess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 8: _t->downloadSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->startUpload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->uploadProcess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2])),(*reinterpret_cast< qulonglong(*)>(_a[3]))); break;
        case 11: _t->uploadSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MyBucket> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MyObject> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ManSignals::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::loginSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(int , const QString & , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::unLogin)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(QList<MyBucket> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::bucketsSuccess)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QList<MyObject> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::objectsSuccess)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::deleteBucketSuccess)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & , const QString & , const QString & , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::startDownload)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & , qulonglong , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::downloadProcess)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::downloadSuccess)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::startUpload)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & , qulonglong , qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::uploadProcess)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ManSignals::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManSignals::uploadSuccess)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ManSignals::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ManSignals.data,
    qt_meta_data_ManSignals,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManSignals.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ManSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ManSignals::loginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ManSignals::error(int _t1, const QString & _t2, const QJsonValue & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ManSignals::unLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ManSignals::bucketsSuccess(QList<MyBucket> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ManSignals::objectsSuccess(const QList<MyObject> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ManSignals::deleteBucketSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ManSignals::startDownload(const QString & _t1, const QString & _t2, const QString & _t3, qulonglong _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ManSignals::downloadProcess(const QString & _t1, qulonglong _t2, qulonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ManSignals::downloadSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ManSignals::startUpload(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ManSignals::uploadProcess(const QString & _t1, qulonglong _t2, qulonglong _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ManSignals::uploadSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
