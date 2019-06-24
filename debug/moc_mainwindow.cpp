/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "initial_display_settings"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(4, 62, 33), // "on_actionConfigure_Port_trigg..."
QT_MOC_LITERAL(5, 96, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(6, 120, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(7, 145, 30), // "on_pushButton_openport_clicked"
QT_MOC_LITERAL(8, 176, 31), // "on_pushButton_closeport_clicked"
QT_MOC_LITERAL(9, 208, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(10, 235, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(11, 260, 16), // "on_Received_Data"
QT_MOC_LITERAL(12, 277, 14), // "loop_send_data"
QT_MOC_LITERAL(13, 292, 13), // "Baud_Settings"
QT_MOC_LITERAL(14, 306, 15), // "Parity_Settings"
QT_MOC_LITERAL(15, 322, 17) // "StopBits_Settings"

    },
    "MainWindow\0initial_display_settings\0"
    "\0on_actionClear_triggered\0"
    "on_actionConfigure_Port_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionAbout_triggered\0"
    "on_pushButton_openport_clicked\0"
    "on_pushButton_closeport_clicked\0"
    "on_pushButton_send_clicked\0"
    "on_actionClose_triggered\0on_Received_Data\0"
    "loop_send_data\0Baud_Settings\0"
    "Parity_Settings\0StopBits_Settings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initial_display_settings(); break;
        case 1: _t->on_actionClear_triggered(); break;
        case 2: _t->on_actionConfigure_Port_triggered(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionAbout_triggered(); break;
        case 5: _t->on_pushButton_openport_clicked(); break;
        case 6: _t->on_pushButton_closeport_clicked(); break;
        case 7: _t->on_pushButton_send_clicked(); break;
        case 8: _t->on_actionClose_triggered(); break;
        case 9: _t->on_Received_Data(); break;
        case 10: _t->loop_send_data(); break;
        case 11: _t->Baud_Settings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->Parity_Settings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->StopBits_Settings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
