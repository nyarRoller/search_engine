/****************************************************************************
** Meta object code from reading C++ file 'show_device.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qt_Search_enging/show_device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'show_device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_show_device_t {
    const uint offsetsAndSize[18];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_show_device_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_show_device_t qt_meta_stringdata_show_device = {
    {
QT_MOC_LITERAL(0, 11), // "show_device"
QT_MOC_LITERAL(12, 11), // "del_element"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 8), // "get_name"
QT_MOC_LITERAL(34, 3), // "id_"
QT_MOC_LITERAL(38, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(62, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(86, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(108, 15) // "on_save_clicked"

    },
    "show_device\0del_element\0\0get_name\0id_\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_show_device[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   51,    2, 0x0a,    2 /* Public */,
       5,    0,   54,    2, 0x08,    4 /* Private */,
       6,    0,   55,    2, 0x08,    5 /* Private */,
       7,    0,   56,    2, 0x08,    6 /* Private */,
       8,    0,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void show_device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<show_device *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->del_element(); break;
        case 1: _t->get_name((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_save_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (show_device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&show_device::del_element)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject show_device::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_show_device.offsetsAndSize,
    qt_meta_data_show_device,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_show_device_t
, QtPrivate::TypeAndForceComplete<show_device, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *show_device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *show_device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_show_device.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int show_device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void show_device::del_element()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
