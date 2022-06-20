/****************************************************************************
** Meta object code from reading C++ file 'restaurant_finder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../codebase/entities/restaurant_finder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restaurant_finder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Entity__RestaurantFinder_t {
    QByteArrayData data[11];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Entity__RestaurantFinder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Entity__RestaurantFinder_t qt_meta_stringdata_Entity__RestaurantFinder = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Entity::RestaurantFinder"
QT_MOC_LITERAL(1, 25, 23), // "allRestaurantsRetrieved"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 23), // "notRestaurantsRetrieved"
QT_MOC_LITERAL(4, 74, 11), // "listChanged"
QT_MOC_LITERAL(5, 86, 25), // "onAllRestaurantsRetrieved"
QT_MOC_LITERAL(6, 112, 9), // "registros"
QT_MOC_LITERAL(7, 122, 14), // "availableHours"
QT_MOC_LITERAL(8, 137, 4), // "path"
QT_MOC_LITERAL(9, 142, 4), // "time"
QT_MOC_LITERAL(10, 147, 4) // "list"

    },
    "Entity::RestaurantFinder\0"
    "allRestaurantsRetrieved\0\0"
    "notRestaurantsRetrieved\0listChanged\0"
    "onAllRestaurantsRetrieved\0registros\0"
    "availableHours\0path\0time\0list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Entity__RestaurantFinder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // properties: name, type, flags
      10, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       2,

       0        // eod
};

void Entity::RestaurantFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RestaurantFinder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allRestaurantsRetrieved(); break;
        case 1: _t->notRestaurantsRetrieved(); break;
        case 2: _t->listChanged(); break;
        case 3: _t->onAllRestaurantsRetrieved((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 4: _t->availableHours((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RestaurantFinder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestaurantFinder::allRestaurantsRetrieved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RestaurantFinder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestaurantFinder::notRestaurantsRetrieved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RestaurantFinder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestaurantFinder::listChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RestaurantFinder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->list(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Entity::RestaurantFinder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Entity__RestaurantFinder.data,
    qt_meta_data_Entity__RestaurantFinder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Entity::RestaurantFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Entity::RestaurantFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Entity__RestaurantFinder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Entity::RestaurantFinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Entity::RestaurantFinder::allRestaurantsRetrieved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Entity::RestaurantFinder::notRestaurantsRetrieved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Entity::RestaurantFinder::listChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
