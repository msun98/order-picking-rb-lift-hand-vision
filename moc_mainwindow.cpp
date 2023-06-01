/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[69];
    char stringdata0[1497];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "onSystemCheck"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "onReadyCmdRead"
QT_MOC_LITERAL(4, 41, 15), // "onReadyDataRead"
QT_MOC_LITERAL(5, 57, 17), // "requestDataPacket"
QT_MOC_LITERAL(6, 75, 14), // "onCmdConnected"
QT_MOC_LITERAL(7, 90, 17), // "onCmdDisconnected"
QT_MOC_LITERAL(8, 108, 15), // "onDataConnected"
QT_MOC_LITERAL(9, 124, 18), // "onDataDisconnected"
QT_MOC_LITERAL(10, 143, 8), // "onUpdate"
QT_MOC_LITERAL(11, 152, 15), // "keti_showUI_msg"
QT_MOC_LITERAL(12, 168, 12), // "connect_flag"
QT_MOC_LITERAL(13, 181, 17), // "kitech_showUI_msg"
QT_MOC_LITERAL(14, 199, 19), // "barcode1_showUI_msg"
QT_MOC_LITERAL(15, 219, 3), // "msg"
QT_MOC_LITERAL(16, 223, 19), // "barcode2_showUI_msg"
QT_MOC_LITERAL(17, 243, 21), // "BTN_GRIPPER_CMD_WRITE"
QT_MOC_LITERAL(18, 265, 19), // "BTN_GRIPPER_ALLFOLD"
QT_MOC_LITERAL(19, 285, 17), // "BTN_GRIPPER_GRASP"
QT_MOC_LITERAL(20, 303, 18), // "BTN_GRIPPER_VISION"
QT_MOC_LITERAL(21, 322, 23), // "CB_GRIPPER_GE_CMD_WRITE"
QT_MOC_LITERAL(22, 346, 12), // "Pinch12_FOLD"
QT_MOC_LITERAL(23, 359, 11), // "bt_usb1_con"
QT_MOC_LITERAL(24, 371, 11), // "bt_usb2_con"
QT_MOC_LITERAL(25, 383, 10), // "bt_connect"
QT_MOC_LITERAL(26, 394, 7), // "bt_test"
QT_MOC_LITERAL(27, 402, 10), // "bt_rpmZero"
QT_MOC_LITERAL(28, 413, 9), // "bt_homing"
QT_MOC_LITERAL(29, 423, 11), // "bt_move_pos"
QT_MOC_LITERAL(30, 435, 17), // "bt_set_maxVel_pos"
QT_MOC_LITERAL(31, 453, 11), // "bt_move_rpm"
QT_MOC_LITERAL(32, 465, 8), // "rev_data"
QT_MOC_LITERAL(33, 474, 4), // "data"
QT_MOC_LITERAL(34, 479, 9), // "write_log"
QT_MOC_LITERAL(35, 489, 3), // "str"
QT_MOC_LITERAL(36, 493, 13), // "readyRead_udp"
QT_MOC_LITERAL(37, 507, 17), // "newConnection_tcp"
QT_MOC_LITERAL(38, 525, 13), // "readyRead_tcp"
QT_MOC_LITERAL(39, 539, 26), // "on_BTN_CONNECT_COM_clicked"
QT_MOC_LITERAL(40, 566, 27), // "on_BTN_CONNECT_DATA_clicked"
QT_MOC_LITERAL(41, 594, 25), // "on_BTN_COBOT_INIT_clicked"
QT_MOC_LITERAL(42, 620, 24), // "on_BTN_MODE_REAL_clicked"
QT_MOC_LITERAL(43, 645, 30), // "on_BTN_MODE_SIMULATION_clicked"
QT_MOC_LITERAL(44, 676, 20), // "on_BTN_CLEAR_clicked"
QT_MOC_LITERAL(45, 697, 27), // "on_BTN_MOTION_PAUSE_clicked"
QT_MOC_LITERAL(46, 725, 28), // "on_BTN_MOTION_RESUME_clicked"
QT_MOC_LITERAL(47, 754, 26), // "on_BTN_MOTION_HALT_clicked"
QT_MOC_LITERAL(48, 781, 31), // "on_BTN_COLLISION_RESUME_clicked"
QT_MOC_LITERAL(49, 813, 30), // "on_BTN_MOVE_JOINT_INIT_clicked"
QT_MOC_LITERAL(50, 844, 32), // "on_BTN_MOVE_JOINT_VISION_clicked"
QT_MOC_LITERAL(51, 877, 39), // "on_BTN_MOVE_JOINT_READY_GRIPP..."
QT_MOC_LITERAL(52, 917, 39), // "on_BTN_MOVE_JOINT_GRAPS_GRIPP..."
QT_MOC_LITERAL(53, 957, 32), // "on_BTN_GET_JOINT_AND_TCP_clicked"
QT_MOC_LITERAL(54, 990, 37), // "on_BTN_GET_JOINT_AND_TCP_INIT..."
QT_MOC_LITERAL(55, 1028, 39), // "on_BTN_GET_JOINT_AND_TCP_VISI..."
QT_MOC_LITERAL(56, 1068, 46), // "on_BTN_GET_JOINT_AND_TCP_READ..."
QT_MOC_LITERAL(57, 1115, 46), // "on_BTN_GET_JOINT_AND_TCP_GRAP..."
QT_MOC_LITERAL(58, 1162, 29), // "on_HS_BASE_SPEED_valueChanged"
QT_MOC_LITERAL(59, 1192, 5), // "value"
QT_MOC_LITERAL(60, 1198, 19), // "BTN_CONNECT_GRIPPER"
QT_MOC_LITERAL(61, 1218, 32), // "on_BTN_MOVE_JOINT_INIT_2_clicked"
QT_MOC_LITERAL(62, 1251, 32), // "on_BTN_MOVE_JOINT_INIT_3_clicked"
QT_MOC_LITERAL(63, 1284, 32), // "on_BTN_MOVE_JOINT_INIT_4_clicked"
QT_MOC_LITERAL(64, 1317, 32), // "on_BTN_MOVE_JOINT_INIT_5_clicked"
QT_MOC_LITERAL(65, 1350, 36), // "on_BTN_GET_JOINT_AND_TCP_PD1_..."
QT_MOC_LITERAL(66, 1387, 36), // "on_BTN_GET_JOINT_AND_TCP_PD2_..."
QT_MOC_LITERAL(67, 1424, 36), // "on_BTN_GET_JOINT_AND_TCP_RG2_..."
QT_MOC_LITERAL(68, 1461, 35) // "on_BTN_GET_JOINT_AND_TCP_G2_c..."

    },
    "MainWindow\0onSystemCheck\0\0onReadyCmdRead\0"
    "onReadyDataRead\0requestDataPacket\0"
    "onCmdConnected\0onCmdDisconnected\0"
    "onDataConnected\0onDataDisconnected\0"
    "onUpdate\0keti_showUI_msg\0connect_flag\0"
    "kitech_showUI_msg\0barcode1_showUI_msg\0"
    "msg\0barcode2_showUI_msg\0BTN_GRIPPER_CMD_WRITE\0"
    "BTN_GRIPPER_ALLFOLD\0BTN_GRIPPER_GRASP\0"
    "BTN_GRIPPER_VISION\0CB_GRIPPER_GE_CMD_WRITE\0"
    "Pinch12_FOLD\0bt_usb1_con\0bt_usb2_con\0"
    "bt_connect\0bt_test\0bt_rpmZero\0bt_homing\0"
    "bt_move_pos\0bt_set_maxVel_pos\0bt_move_rpm\0"
    "rev_data\0data\0write_log\0str\0readyRead_udp\0"
    "newConnection_tcp\0readyRead_tcp\0"
    "on_BTN_CONNECT_COM_clicked\0"
    "on_BTN_CONNECT_DATA_clicked\0"
    "on_BTN_COBOT_INIT_clicked\0"
    "on_BTN_MODE_REAL_clicked\0"
    "on_BTN_MODE_SIMULATION_clicked\0"
    "on_BTN_CLEAR_clicked\0on_BTN_MOTION_PAUSE_clicked\0"
    "on_BTN_MOTION_RESUME_clicked\0"
    "on_BTN_MOTION_HALT_clicked\0"
    "on_BTN_COLLISION_RESUME_clicked\0"
    "on_BTN_MOVE_JOINT_INIT_clicked\0"
    "on_BTN_MOVE_JOINT_VISION_clicked\0"
    "on_BTN_MOVE_JOINT_READY_GRIPPER_clicked\0"
    "on_BTN_MOVE_JOINT_GRAPS_GRIPPER_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_INIT_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_VISION_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_READY_GRIPPER_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER_clicked\0"
    "on_HS_BASE_SPEED_valueChanged\0value\0"
    "BTN_CONNECT_GRIPPER\0"
    "on_BTN_MOVE_JOINT_INIT_2_clicked\0"
    "on_BTN_MOVE_JOINT_INIT_3_clicked\0"
    "on_BTN_MOVE_JOINT_INIT_4_clicked\0"
    "on_BTN_MOVE_JOINT_INIT_5_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_PD1_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_PD2_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_RG2_clicked\0"
    "on_BTN_GET_JOINT_AND_TCP_G2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  324,    2, 0x0a /* Public */,
       3,    0,  325,    2, 0x0a /* Public */,
       4,    0,  326,    2, 0x0a /* Public */,
       5,    0,  327,    2, 0x0a /* Public */,
       6,    0,  328,    2, 0x0a /* Public */,
       7,    0,  329,    2, 0x0a /* Public */,
       8,    0,  330,    2, 0x0a /* Public */,
       9,    0,  331,    2, 0x0a /* Public */,
      10,    0,  332,    2, 0x0a /* Public */,
      11,    1,  333,    2, 0x0a /* Public */,
      13,    1,  336,    2, 0x0a /* Public */,
      14,    1,  339,    2, 0x0a /* Public */,
      16,    1,  342,    2, 0x0a /* Public */,
      17,    0,  345,    2, 0x0a /* Public */,
      18,    0,  346,    2, 0x0a /* Public */,
      19,    0,  347,    2, 0x0a /* Public */,
      20,    0,  348,    2, 0x0a /* Public */,
      21,    0,  349,    2, 0x0a /* Public */,
      22,    0,  350,    2, 0x0a /* Public */,
      23,    0,  351,    2, 0x0a /* Public */,
      24,    0,  352,    2, 0x0a /* Public */,
      25,    0,  353,    2, 0x08 /* Private */,
      26,    0,  354,    2, 0x08 /* Private */,
      27,    0,  355,    2, 0x08 /* Private */,
      28,    0,  356,    2, 0x08 /* Private */,
      29,    0,  357,    2, 0x08 /* Private */,
      30,    0,  358,    2, 0x08 /* Private */,
      31,    0,  359,    2, 0x08 /* Private */,
      32,    1,  360,    2, 0x08 /* Private */,
      34,    1,  363,    2, 0x08 /* Private */,
      36,    0,  366,    2, 0x08 /* Private */,
      37,    0,  367,    2, 0x08 /* Private */,
      38,    0,  368,    2, 0x08 /* Private */,
      39,    0,  369,    2, 0x08 /* Private */,
      40,    0,  370,    2, 0x08 /* Private */,
      41,    0,  371,    2, 0x08 /* Private */,
      42,    0,  372,    2, 0x08 /* Private */,
      43,    0,  373,    2, 0x08 /* Private */,
      44,    0,  374,    2, 0x08 /* Private */,
      45,    0,  375,    2, 0x08 /* Private */,
      46,    0,  376,    2, 0x08 /* Private */,
      47,    0,  377,    2, 0x08 /* Private */,
      48,    0,  378,    2, 0x08 /* Private */,
      49,    0,  379,    2, 0x08 /* Private */,
      50,    0,  380,    2, 0x08 /* Private */,
      51,    0,  381,    2, 0x08 /* Private */,
      52,    0,  382,    2, 0x08 /* Private */,
      53,    0,  383,    2, 0x08 /* Private */,
      54,    0,  384,    2, 0x08 /* Private */,
      55,    0,  385,    2, 0x08 /* Private */,
      56,    0,  386,    2, 0x08 /* Private */,
      57,    0,  387,    2, 0x08 /* Private */,
      58,    1,  388,    2, 0x08 /* Private */,
      60,    0,  391,    2, 0x08 /* Private */,
      61,    0,  392,    2, 0x08 /* Private */,
      62,    0,  393,    2, 0x08 /* Private */,
      63,    0,  394,    2, 0x08 /* Private */,
      64,    0,  395,    2, 0x08 /* Private */,
      65,    0,  396,    2, 0x08 /* Private */,
      66,    0,  397,    2, 0x08 /* Private */,
      67,    0,  398,    2, 0x08 /* Private */,
      68,    0,  399,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, QMetaType::QByteArray,   15,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   33,
    QMetaType::Void, QMetaType::QString,   35,
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
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSystemCheck(); break;
        case 1: _t->onReadyCmdRead(); break;
        case 2: _t->onReadyDataRead(); break;
        case 3: _t->requestDataPacket(); break;
        case 4: _t->onCmdConnected(); break;
        case 5: _t->onCmdDisconnected(); break;
        case 6: _t->onDataConnected(); break;
        case 7: _t->onDataDisconnected(); break;
        case 8: _t->onUpdate(); break;
        case 9: _t->keti_showUI_msg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->kitech_showUI_msg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->barcode1_showUI_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: _t->barcode2_showUI_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: _t->BTN_GRIPPER_CMD_WRITE(); break;
        case 14: _t->BTN_GRIPPER_ALLFOLD(); break;
        case 15: _t->BTN_GRIPPER_GRASP(); break;
        case 16: _t->BTN_GRIPPER_VISION(); break;
        case 17: _t->CB_GRIPPER_GE_CMD_WRITE(); break;
        case 18: _t->Pinch12_FOLD(); break;
        case 19: _t->bt_usb1_con(); break;
        case 20: _t->bt_usb2_con(); break;
        case 21: _t->bt_connect(); break;
        case 22: _t->bt_test(); break;
        case 23: _t->bt_rpmZero(); break;
        case 24: _t->bt_homing(); break;
        case 25: _t->bt_move_pos(); break;
        case 26: _t->bt_set_maxVel_pos(); break;
        case 27: _t->bt_move_rpm(); break;
        case 28: _t->rev_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 29: _t->write_log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->readyRead_udp(); break;
        case 31: _t->newConnection_tcp(); break;
        case 32: _t->readyRead_tcp(); break;
        case 33: _t->on_BTN_CONNECT_COM_clicked(); break;
        case 34: _t->on_BTN_CONNECT_DATA_clicked(); break;
        case 35: _t->on_BTN_COBOT_INIT_clicked(); break;
        case 36: _t->on_BTN_MODE_REAL_clicked(); break;
        case 37: _t->on_BTN_MODE_SIMULATION_clicked(); break;
        case 38: _t->on_BTN_CLEAR_clicked(); break;
        case 39: _t->on_BTN_MOTION_PAUSE_clicked(); break;
        case 40: _t->on_BTN_MOTION_RESUME_clicked(); break;
        case 41: _t->on_BTN_MOTION_HALT_clicked(); break;
        case 42: _t->on_BTN_COLLISION_RESUME_clicked(); break;
        case 43: _t->on_BTN_MOVE_JOINT_INIT_clicked(); break;
        case 44: _t->on_BTN_MOVE_JOINT_VISION_clicked(); break;
        case 45: _t->on_BTN_MOVE_JOINT_READY_GRIPPER_clicked(); break;
        case 46: _t->on_BTN_MOVE_JOINT_GRAPS_GRIPPER_clicked(); break;
        case 47: _t->on_BTN_GET_JOINT_AND_TCP_clicked(); break;
        case 48: _t->on_BTN_GET_JOINT_AND_TCP_INIT_clicked(); break;
        case 49: _t->on_BTN_GET_JOINT_AND_TCP_VISION_clicked(); break;
        case 50: _t->on_BTN_GET_JOINT_AND_TCP_READY_GRIPPER_clicked(); break;
        case 51: _t->on_BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER_clicked(); break;
        case 52: _t->on_HS_BASE_SPEED_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->BTN_CONNECT_GRIPPER(); break;
        case 54: _t->on_BTN_MOVE_JOINT_INIT_2_clicked(); break;
        case 55: _t->on_BTN_MOVE_JOINT_INIT_3_clicked(); break;
        case 56: _t->on_BTN_MOVE_JOINT_INIT_4_clicked(); break;
        case 57: _t->on_BTN_MOVE_JOINT_INIT_5_clicked(); break;
        case 58: _t->on_BTN_GET_JOINT_AND_TCP_PD1_clicked(); break;
        case 59: _t->on_BTN_GET_JOINT_AND_TCP_PD2_clicked(); break;
        case 60: _t->on_BTN_GET_JOINT_AND_TCP_RG2_clicked(); break;
        case 61: _t->on_BTN_GET_JOINT_AND_TCP_G2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 62;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
