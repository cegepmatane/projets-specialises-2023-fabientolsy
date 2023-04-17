/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MusiFlow/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_richGirl_clicked",
    "",
    "on_paroles_stateChanged",
    "arg1",
    "on_pause_clicked",
    "on_lecture_clicked",
    "on_horizontalSlider_sliderMoved",
    "position",
    "on_traduireParoles_stateChanged",
    "on_cantHoldUs_clicked",
    "on_onVerra_clicked",
    "on_astronaute_clicked",
    "on_superman_clicked",
    "on_precedent_clicked",
    "on_suivant_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[5];
    char stringdata5[17];
    char stringdata6[19];
    char stringdata7[32];
    char stringdata8[9];
    char stringdata9[32];
    char stringdata10[22];
    char stringdata11[19];
    char stringdata12[22];
    char stringdata13[20];
    char stringdata14[21];
    char stringdata15[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "on_richGirl_clicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 23),  // "on_paroles_stateChanged"
        QT_MOC_LITERAL(56, 4),  // "arg1"
        QT_MOC_LITERAL(61, 16),  // "on_pause_clicked"
        QT_MOC_LITERAL(78, 18),  // "on_lecture_clicked"
        QT_MOC_LITERAL(97, 31),  // "on_horizontalSlider_sliderMoved"
        QT_MOC_LITERAL(129, 8),  // "position"
        QT_MOC_LITERAL(138, 31),  // "on_traduireParoles_stateChanged"
        QT_MOC_LITERAL(170, 21),  // "on_cantHoldUs_clicked"
        QT_MOC_LITERAL(192, 18),  // "on_onVerra_clicked"
        QT_MOC_LITERAL(211, 21),  // "on_astronaute_clicked"
        QT_MOC_LITERAL(233, 19),  // "on_superman_clicked"
        QT_MOC_LITERAL(253, 20),  // "on_precedent_clicked"
        QT_MOC_LITERAL(274, 18)   // "on_suivant_clicked"
    },
    "MainWindow",
    "on_richGirl_clicked",
    "",
    "on_paroles_stateChanged",
    "arg1",
    "on_pause_clicked",
    "on_lecture_clicked",
    "on_horizontalSlider_sliderMoved",
    "position",
    "on_traduireParoles_stateChanged",
    "on_cantHoldUs_clicked",
    "on_onVerra_clicked",
    "on_astronaute_clicked",
    "on_superman_clicked",
    "on_precedent_clicked",
    "on_suivant_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    1,   87,    2, 0x08,    2 /* Private */,
       5,    0,   90,    2, 0x08,    4 /* Private */,
       6,    0,   91,    2, 0x08,    5 /* Private */,
       7,    1,   92,    2, 0x08,    6 /* Private */,
       9,    1,   95,    2, 0x08,    8 /* Private */,
      10,    0,   98,    2, 0x08,   10 /* Private */,
      11,    0,   99,    2, 0x08,   11 /* Private */,
      12,    0,  100,    2, 0x08,   12 /* Private */,
      13,    0,  101,    2, 0x08,   13 /* Private */,
      14,    0,  102,    2, 0x08,   14 /* Private */,
      15,    0,  103,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_richGirl_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_paroles_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lecture_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_traduireParoles_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_cantHoldUs_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_onVerra_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_astronaute_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_superman_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_precedent_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_suivant_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_richGirl_clicked(); break;
        case 1: _t->on_paroles_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_pause_clicked(); break;
        case 3: _t->on_lecture_clicked(); break;
        case 4: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_traduireParoles_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_cantHoldUs_clicked(); break;
        case 7: _t->on_onVerra_clicked(); break;
        case 8: _t->on_astronaute_clicked(); break;
        case 9: _t->on_superman_clicked(); break;
        case 10: _t->on_precedent_clicked(); break;
        case 11: _t->on_suivant_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
