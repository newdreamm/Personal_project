/****************************************************************************
** Meta object code from reading C++ file 'uilogindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qosbrowser/src/fend/uilogin/uilogindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uilogindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UiLoginDialog_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiLoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiLoginDialog_t qt_meta_stringdata_UiLoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UiLoginDialog"
QT_MOC_LITERAL(1, 14, 17), // "onBtnLoginClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "onLoginSucceed"
QT_MOC_LITERAL(4, 48, 12), // "onLoginError"
QT_MOC_LITERAL(5, 61, 3), // "api"
QT_MOC_LITERAL(6, 65, 3), // "msg"
QT_MOC_LITERAL(7, 69, 3), // "req"
QT_MOC_LITERAL(8, 73, 11), // "dealDBError"
QT_MOC_LITERAL(9, 85, 1) // "e"

    },
    "UiLoginDialog\0onBtnLoginClicked\0\0"
    "onLoginSucceed\0onLoginError\0api\0msg\0"
    "req\0dealDBError\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiLoginDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    3,   36,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QJsonValue,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void UiLoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UiLoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBtnLoginClicked(); break;
        case 1: _t->onLoginSucceed(); break;
        case 2: _t->onLoginError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QJsonValue(*)>(_a[3]))); break;
        case 3: _t->dealDBError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UiLoginDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<UiQosDialog::staticMetaObject>(),
    qt_meta_stringdata_UiLoginDialog.data,
    qt_meta_data_UiLoginDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UiLoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiLoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UiLoginDialog.stringdata0))
        return static_cast<void*>(this);
    return UiQosDialog::qt_metacast(_clname);
}

int UiLoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UiQosDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
