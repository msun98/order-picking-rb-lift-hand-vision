/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *motor;
    QWidget *lift_motor;
    QComboBox *cb_port;
    QGroupBox *groupBox_3;
    QLineEdit *le_pos;
    QLabel *label;
    QLineEdit *le_rpm;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_controlType;
    QLineEdit *le_armp;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_rpmStd;
    QLabel *label_7;
    QLineEdit *le_temp;
    QTextEdit *te_data;
    QPushButton *bt_test;
    QGroupBox *groupBox;
    QCheckBox *ch_dir;
    QPushButton *bt_homing;
    QSpinBox *sb_move_pos;
    QPushButton *bt_move_pos;
    QSpinBox *sb_max_vel_pos;
    QPushButton *bt_set_maxVel_pos;
    QGroupBox *groupBox_2;
    QSpinBox *sb_rpm;
    QPushButton *bt_move_rpm;
    QPushButton *bt_rpmZero;
    QPushButton *bt_connect;
    QLabel *label_2;
    QWidget *rb_5;
    QSlider *HS_BASE_SPEED;
    QLabel *label_9;
    QPushButton *BTN_GET_JOINT_AND_TCP;
    QGroupBox *GB_NETWORK;
    QLineEdit *LE_IP;
    QLabel *label_8;
    QLineEdit *textCmdPort;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *textDataPort;
    QPushButton *BTN_CONNECT_COM;
    QPushButton *BTN_CONNECT_DATA;
    QPushButton *BTN_MOVE_JOINT_VISION;
    QGroupBox *groupBox_4;
    QPushButton *BTN_COBOT_INIT;
    QLineEdit *LE_INIT_POWER;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *LE_INIT_DEVICE;
    QLabel *label_14;
    QLineEdit *LE_INIT_SYSTEM;
    QLineEdit *LE_INIT_ROBOT;
    QLabel *label_15;
    QLineEdit *LE_TCP_LIST;
    QGroupBox *groupBox_6;
    QTextEdit *textPrint;
    QPushButton *BTN_CLEAR;
    QPushButton *BTN_GET_JOINT_AND_TCP_VISION;
    QPushButton *BTN_GET_JOINT_AND_TCP_READY_GRIPPER;
    QLabel *label_16;
    QPushButton *BTN_MOTION_RESUME;
    QPushButton *BTN_MOVE_JOINT_READY_GRIPPER;
    QPushButton *BTN_GET_JOINT_AND_TCP_INIT;
    QPushButton *BTN_MOTION_HALT;
    QLineEdit *LE_JOINT_LIST;
    QPushButton *BTN_MOVE_JOINT_INIT;
    QLabel *label_17;
    QFrame *FRAME_STATUS;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *LE_D_IN_OFF_12;
    QLineEdit *LE_D_IN_ON_9;
    QSpacerItem *horizontalSpacer;
    QLineEdit *LE_D_IN_OFF_9;
    QLabel *label_25;
    QLineEdit *LE_D_IN_OFF_0;
    QLabel *label_36;
    QLineEdit *LE_D_IN_ON_15;
    QLabel *label_28;
    QLineEdit *LE_D_IN_OFF_5;
    QLineEdit *LE_D_IN_ON_10;
    QLabel *label_24;
    QLabel *label_37;
    QLineEdit *LE_D_IN_ON_2;
    QLineEdit *LE_D_IN_ON_5;
    QLineEdit *LE_D_IN_OFF_2;
    QLabel *label_38;
    QLabel *label_21;
    QLineEdit *LE_D_IN_ON_12;
    QLineEdit *LE_D_IN_ON_3;
    QLineEdit *LE_D_IN_OFF_11;
    QLabel *label_26;
    QLineEdit *LE_D_IN_ON_1;
    QLineEdit *LE_D_IN_OFF_15;
    QLineEdit *LE_D_IN_OFF_8;
    QLineEdit *LE_D_IN_ON_11;
    QLineEdit *LE_D_IN_ON_6;
    QLineEdit *LE_D_IN_OFF_1;
    QLineEdit *LE_D_IN_OFF_3;
    QLineEdit *LE_D_IN_OFF_13;
    QLabel *label_33;
    QLabel *label_22;
    QLineEdit *LE_D_IN_ON_4;
    QLabel *label_32;
    QLineEdit *LE_D_IN_OFF_14;
    QLineEdit *LE_D_IN_ON_7;
    QLabel *label_34;
    QLabel *label_39;
    QLineEdit *LE_D_IN_ON_13;
    QLineEdit *LE_D_IN_ON_14;
    QLabel *label_35;
    QLineEdit *LE_D_IN_ON_8;
    QLineEdit *LE_D_IN_OFF_7;
    QLabel *label_23;
    QLineEdit *LE_D_IN_OFF_6;
    QLineEdit *LE_D_IN_OFF_4;
    QLineEdit *LE_D_IN_ON_0;
    QLabel *label_31;
    QLineEdit *LE_D_IN_OFF_10;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_18;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_27;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_44;
    QLineEdit *LE_JNT_REF_1;
    QLineEdit *LE_JNT_REF_2;
    QLineEdit *LE_JNT_REF_3;
    QLineEdit *LE_JNT_REF_4;
    QLineEdit *LE_JNT_REF_5;
    QLineEdit *LE_JNT_REF_6;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_7;
    QLabel *label_71;
    QLineEdit *LE_TA_IN_0;
    QLabel *label_74;
    QLineEdit *LE_TA_IN_1;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_9;
    QLineEdit *LE_TD_IN_OFF_0;
    QLabel *label_96;
    QLabel *label_82;
    QLineEdit *LE_TD_IN_ON_0;
    QLabel *label_93;
    QLineEdit *LE_TD_IN_OFF_1;
    QLabel *label_95;
    QLineEdit *LE_TD_IN_ON_1;
    QLabel *label_45;
    QLabel *label_101;
    QLineEdit *LE_PG_MODE_SIMULATION;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_10;
    QLineEdit *LE_TD_OUT_OFF_0;
    QLabel *label_97;
    QLabel *label_83;
    QLineEdit *LE_TD_OUT_ON_0;
    QLabel *label_94;
    QLineEdit *LE_TD_OUT_OFF_1;
    QLabel *label_98;
    QLineEdit *LE_TD_OUT_ON_1;
    QLabel *label_84;
    QLabel *label_46;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *LE_D_OUT_OFF_12;
    QLineEdit *LE_D_OUT_ON_9;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *LE_D_OUT_OFF_9;
    QLabel *label_47;
    QLineEdit *LE_D_OUT_OFF_0;
    QLabel *label_48;
    QLineEdit *LE_D_OUT_ON_15;
    QLabel *label_49;
    QLineEdit *LE_D_OUT_OFF_5;
    QLineEdit *LE_D_OUT_ON_10;
    QLabel *label_50;
    QLabel *label_51;
    QLineEdit *LE_D_OUT_ON_2;
    QLineEdit *LE_D_OUT_ON_5;
    QLineEdit *LE_D_OUT_OFF_2;
    QLabel *label_52;
    QLabel *label_53;
    QLineEdit *LE_D_OUT_ON_12;
    QLineEdit *LE_D_OUT_ON_3;
    QLineEdit *LE_D_OUT_OFF_11;
    QLabel *label_54;
    QLineEdit *LE_D_OUT_ON_1;
    QLineEdit *LE_D_OUT_OFF_15;
    QLineEdit *LE_D_OUT_OFF_8;
    QLineEdit *LE_D_OUT_ON_11;
    QLineEdit *LE_D_OUT_ON_6;
    QLineEdit *LE_D_OUT_OFF_1;
    QLineEdit *LE_D_OUT_OFF_3;
    QLineEdit *LE_D_OUT_OFF_13;
    QLabel *label_55;
    QLabel *label_56;
    QLineEdit *LE_D_OUT_ON_4;
    QLabel *label_57;
    QLineEdit *LE_D_OUT_OFF_14;
    QLineEdit *LE_D_OUT_ON_7;
    QLabel *label_58;
    QLabel *label_59;
    QLineEdit *LE_D_OUT_ON_13;
    QLineEdit *LE_D_OUT_ON_14;
    QLabel *label_60;
    QLineEdit *LE_D_OUT_ON_8;
    QLineEdit *LE_D_OUT_OFF_7;
    QLabel *label_61;
    QLineEdit *LE_D_OUT_OFF_6;
    QLineEdit *LE_D_OUT_OFF_4;
    QLineEdit *LE_D_OUT_ON_0;
    QLabel *label_62;
    QLineEdit *LE_D_OUT_OFF_10;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_99;
    QLineEdit *LE_ROBOT_STATUS_SOS;
    QLineEdit *LE_ROBOT_STATE_IDLE;
    QLabel *label_67;
    QLabel *label_100;
    QLabel *label_68;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *label_75;
    QLabel *label_76;
    QLineEdit *LE_TCP_REF_X;
    QLineEdit *LE_TCP_REF_Y;
    QLineEdit *LE_TCP_REF_Z;
    QLineEdit *LE_TCP_REF_RX;
    QLineEdit *LE_TCP_REF_RY;
    QLineEdit *LE_TCP_REF_RZ;
    QLineEdit *LE_ROBOT_STATUS_EMS;
    QLineEdit *LE_ROBOT_STATE_MOVING;
    QLineEdit *LE_ROBOT_STATUS_PAUSED;
    QLabel *label_77;
    QLabel *label_78;
    QLineEdit *LE_ROBOT_STATUS_SELF_COLLISION;
    QLineEdit *LE_PG_MODE_REAL;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_79;
    QLabel *label_80;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_81;
    QLineEdit *LE_A_IN_1;
    QLabel *label_85;
    QLineEdit *LE_A_IN_0;
    QLineEdit *LE_A_IN_2;
    QLineEdit *LE_A_IN_3;
    QLineEdit *LE_ROBOT_STATUS_EXT_COLLISION;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *label_88;
    QLineEdit *LE_ROBOT_STATUS_TEACHING;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_8;
    QLabel *label_89;
    QLabel *label_90;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_91;
    QLineEdit *LE_A_OUT_1;
    QLabel *label_92;
    QLineEdit *LE_A_OUT_0;
    QLineEdit *LE_A_OUT_2;
    QLineEdit *LE_A_OUT_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_102;
    QLabel *label_103;
    QLabel *label_104;
    QLabel *label_105;
    QLabel *label_106;
    QLabel *label_107;
    QLineEdit *LE_JNT_ENC_1;
    QLineEdit *LE_JNT_ENC_2;
    QLineEdit *LE_JNT_ENC_3;
    QLineEdit *LE_JNT_ENC_4;
    QLineEdit *LE_JNT_ENC_5;
    QLineEdit *LE_JNT_ENC_6;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_11;
    QLabel *label_108;
    QLabel *label_109;
    QLabel *label_110;
    QLineEdit *LE_TV_0;
    QLineEdit *LE_TV_12;
    QLineEdit *LE_TV_24;
    QPushButton *BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER;
    QPushButton *BTN_COLLISION_RESUME;
    QPushButton *BTN_MOTION_PAUSE;
    QGroupBox *GB_NETWORK_2;
    QPushButton *BTN_MODE_REAL;
    QPushButton *BTN_MODE_SIMULATION;
    QPushButton *BTN_TEST;
    QLabel *LB_BASE_SPEED;
    QPushButton *BTN_MOVE_JOINT_GRAPS_GRIPPER;
    QLabel *label_137;
    QPushButton *BTN_MOVE_JOINT_INIT_2;
    QPushButton *BTN_MOVE_JOINT_INIT_3;
    QPushButton *BTN_MOVE_JOINT_INIT_4;
    QPushButton *BTN_MOVE_JOINT_INIT_5;
    QPushButton *BTN_GET_JOINT_AND_TCP_PD1;
    QPushButton *BTN_GET_JOINT_AND_TCP_PD2;
    QPushButton *BTN_GET_JOINT_AND_TCP_RG2;
    QPushButton *BTN_GET_JOINT_AND_TCP_G2;
    QWidget *vison_gripper;
    QGroupBox *GR_KITECH;
    QLineEdit *LE_GRIPPER_CMD;
    QPushButton *BTN_GRIPPER_CMD_WRITE;
    QPushButton *BTN_GRIPPER_ALLFOLD;
    QPushButton *BTN_RB5_CALC_GRAPS_POINT;
    QPushButton *BTN_RB5_MOVE_GRAPS_POINT;
    QLabel *label_121;
    QLabel *label_122;
    QLabel *label_123;
    QLineEdit *LE_GRAPS_POINT_Z;
    QLineEdit *LE_GRAPS_POINT_Y;
    QLineEdit *LE_GRAPS_POINT_X;
    QLineEdit *LE_GRAPS_POINT_Rx;
    QLineEdit *LE_GRAPS_POINT_Rz;
    QLineEdit *LE_GRAPS_POINT_Ry;
    QLabel *label_124;
    QLabel *label_125;
    QLabel *label_126;
    QPushButton *BTN_LOAD_GRAPS_POINT;
    QPushButton *BTN_SET_GRAPS_POINT;
    QPushButton *BTN_GRIPPER_VISION;
    QLabel *label_127;
    QLabel *label_128;
    QLabel *label_129;
    QLabel *label_130;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *CB_GRIPPER_GRAPS;
    QComboBox *CB_GRIPPER_POWER;
    QPushButton *BTN_GRIPPER_GRASP;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *CB_GRIPPER_GE_MODE;
    QComboBox *CB_GRIPPER_GE_GRAPS;
    QComboBox *CB_GRIPPER_GE_POWER;
    QComboBox *CB_GRIPPER_GE_SUCTION_POWER;
    QPushButton *CB_GRIPPER_GE_CMD_WRITE;
    QPushButton *Pinch12_FOLD;
    QTextEdit *LB_KETI_FRAME;
    QTextEdit *notice_kitech;
    QLabel *label_131;
    QLineEdit *le_keti;
    QLabel *label_132;
    QLineEdit *le_kitech;
    QLabel *label_133;
    QLabel *label_134;
    QLabel *label_135;
    QPushButton *BTN_CONNECT_GRIPPER;
    QWidget *barcode;
    QLabel *label_111;
    QLabel *label_112;
    QComboBox *cb_usb2;
    QPushButton *write;
    QTextEdit *te_usb1;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *bt_usb2_con;
    QPushButton *bt_usb2_dis;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *bt_usb1_con;
    QPushButton *bt_usb1_dis;
    QLabel *label_113;
    QComboBox *cb_usb1;
    QTextEdit *te_usb2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1564, 1034);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        motor = new QTabWidget(centralwidget);
        motor->setObjectName(QString::fromUtf8("motor"));
        motor->setGeometry(QRect(10, 10, 1521, 971));
        lift_motor = new QWidget();
        lift_motor->setObjectName(QString::fromUtf8("lift_motor"));
        cb_port = new QComboBox(lift_motor);
        cb_port->setObjectName(QString::fromUtf8("cb_port"));
        cb_port->setGeometry(QRect(200, 50, 111, 31));
        groupBox_3 = new QGroupBox(lift_motor);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(400, 90, 191, 341));
        le_pos = new QLineEdit(groupBox_3);
        le_pos->setObjectName(QString::fromUtf8("le_pos"));
        le_pos->setGeometry(QRect(90, 95, 81, 25));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 35, 31, 17));
        le_rpm = new QLineEdit(groupBox_3);
        le_rpm->setObjectName(QString::fromUtf8("le_rpm"));
        le_rpm->setGeometry(QRect(90, 30, 81, 25));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 71, 17));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 135, 71, 17));
        le_controlType = new QLineEdit(groupBox_3);
        le_controlType->setObjectName(QString::fromUtf8("le_controlType"));
        le_controlType->setGeometry(QRect(90, 130, 81, 25));
        le_armp = new QLineEdit(groupBox_3);
        le_armp->setObjectName(QString::fromUtf8("le_armp"));
        le_armp->setGeometry(QRect(90, 170, 81, 25));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 175, 31, 17));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 65, 71, 17));
        le_rpmStd = new QLineEdit(groupBox_3);
        le_rpmStd->setObjectName(QString::fromUtf8("le_rpmStd"));
        le_rpmStd->setGeometry(QRect(90, 60, 81, 25));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 215, 61, 17));
        le_temp = new QLineEdit(groupBox_3);
        le_temp->setObjectName(QString::fromUtf8("le_temp"));
        le_temp->setGeometry(QRect(90, 210, 81, 25));
        te_data = new QTextEdit(lift_motor);
        te_data->setObjectName(QString::fromUtf8("te_data"));
        te_data->setGeometry(QRect(20, 50, 171, 301));
        bt_test = new QPushButton(lift_motor);
        bt_test->setObjectName(QString::fromUtf8("bt_test"));
        bt_test->setGeometry(QRect(20, 360, 171, 71));
        groupBox = new QGroupBox(lift_motor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 90, 191, 191));
        ch_dir = new QCheckBox(groupBox);
        ch_dir->setObjectName(QString::fromUtf8("ch_dir"));
        ch_dir->setGeometry(QRect(10, 30, 71, 23));
        bt_homing = new QPushButton(groupBox);
        bt_homing->setObjectName(QString::fromUtf8("bt_homing"));
        bt_homing->setGeometry(QRect(10, 60, 171, 41));
        sb_move_pos = new QSpinBox(groupBox);
        sb_move_pos->setObjectName(QString::fromUtf8("sb_move_pos"));
        sb_move_pos->setGeometry(QRect(10, 110, 91, 31));
        sb_move_pos->setMaximum(6000);
        bt_move_pos = new QPushButton(groupBox);
        bt_move_pos->setObjectName(QString::fromUtf8("bt_move_pos"));
        bt_move_pos->setGeometry(QRect(110, 110, 71, 31));
        sb_max_vel_pos = new QSpinBox(groupBox);
        sb_max_vel_pos->setObjectName(QString::fromUtf8("sb_max_vel_pos"));
        sb_max_vel_pos->setGeometry(QRect(10, 150, 91, 31));
        sb_max_vel_pos->setMinimum(10);
        sb_max_vel_pos->setMaximum(3000);
        sb_max_vel_pos->setValue(200);
        bt_set_maxVel_pos = new QPushButton(groupBox);
        bt_set_maxVel_pos->setObjectName(QString::fromUtf8("bt_set_maxVel_pos"));
        bt_set_maxVel_pos->setGeometry(QRect(110, 150, 71, 31));
        groupBox_2 = new QGroupBox(lift_motor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 290, 191, 141));
        sb_rpm = new QSpinBox(groupBox_2);
        sb_rpm->setObjectName(QString::fromUtf8("sb_rpm"));
        sb_rpm->setGeometry(QRect(10, 30, 91, 31));
        sb_rpm->setMinimum(-3000);
        sb_rpm->setMaximum(3000);
        sb_rpm->setValue(200);
        bt_move_rpm = new QPushButton(groupBox_2);
        bt_move_rpm->setObjectName(QString::fromUtf8("bt_move_rpm"));
        bt_move_rpm->setGeometry(QRect(110, 30, 71, 31));
        bt_rpmZero = new QPushButton(groupBox_2);
        bt_rpmZero->setObjectName(QString::fromUtf8("bt_rpmZero"));
        bt_rpmZero->setGeometry(QRect(10, 70, 171, 61));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        bt_rpmZero->setFont(font);
        bt_rpmZero->setStyleSheet(QString::fromUtf8("background-color:red"));
        bt_connect = new QPushButton(lift_motor);
        bt_connect->setObjectName(QString::fromUtf8("bt_connect"));
        bt_connect->setGeometry(QRect(320, 50, 71, 31));
        label_2 = new QLabel(lift_motor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 191, 31));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        motor->addTab(lift_motor, QString());
        rb_5 = new QWidget();
        rb_5->setObjectName(QString::fromUtf8("rb_5"));
        HS_BASE_SPEED = new QSlider(rb_5);
        HS_BASE_SPEED->setObjectName(QString::fromUtf8("HS_BASE_SPEED"));
        HS_BASE_SPEED->setGeometry(QRect(670, 70, 171, 31));
        HS_BASE_SPEED->setMinimum(0);
        HS_BASE_SPEED->setMaximum(100);
        HS_BASE_SPEED->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(rb_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(840, 650, 41, 31));
        BTN_GET_JOINT_AND_TCP = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP"));
        BTN_GET_JOINT_AND_TCP->setGeometry(QRect(670, 750, 141, 71));
        GB_NETWORK = new QGroupBox(rb_5);
        GB_NETWORK->setObjectName(QString::fromUtf8("GB_NETWORK"));
        GB_NETWORK->setGeometry(QRect(20, 40, 181, 171));
        QFont font2;
        font2.setPointSize(11);
        GB_NETWORK->setFont(font2);
        LE_IP = new QLineEdit(GB_NETWORK);
        LE_IP->setObjectName(QString::fromUtf8("LE_IP"));
        LE_IP->setGeometry(QRect(70, 30, 101, 31));
        LE_IP->setMaximumSize(QSize(150, 16777215));
        LE_IP->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(GB_NETWORK);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(13, 30, 52, 31));
        textCmdPort = new QLineEdit(GB_NETWORK);
        textCmdPort->setObjectName(QString::fromUtf8("textCmdPort"));
        textCmdPort->setEnabled(false);
        textCmdPort->setGeometry(QRect(10, 90, 71, 21));
        textCmdPort->setMaximumSize(QSize(100, 16777215));
        textCmdPort->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(GB_NETWORK);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 70, 71, 21));
        label_11 = new QLabel(GB_NETWORK);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(14, 70, 71, 21));
        textDataPort = new QLineEdit(GB_NETWORK);
        textDataPort->setObjectName(QString::fromUtf8("textDataPort"));
        textDataPort->setEnabled(false);
        textDataPort->setGeometry(QRect(100, 90, 71, 21));
        textDataPort->setMaximumSize(QSize(100, 16777215));
        textDataPort->setAlignment(Qt::AlignCenter);
        BTN_CONNECT_COM = new QPushButton(GB_NETWORK);
        BTN_CONNECT_COM->setObjectName(QString::fromUtf8("BTN_CONNECT_COM"));
        BTN_CONNECT_COM->setGeometry(QRect(10, 120, 71, 40));
        BTN_CONNECT_COM->setMinimumSize(QSize(0, 40));
        BTN_CONNECT_DATA = new QPushButton(GB_NETWORK);
        BTN_CONNECT_DATA->setObjectName(QString::fromUtf8("BTN_CONNECT_DATA"));
        BTN_CONNECT_DATA->setGeometry(QRect(100, 120, 71, 41));
        BTN_CONNECT_DATA->setMinimumSize(QSize(0, 40));
        BTN_MOVE_JOINT_VISION = new QPushButton(rb_5);
        BTN_MOVE_JOINT_VISION->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_VISION"));
        BTN_MOVE_JOINT_VISION->setGeometry(QRect(1100, 280, 141, 71));
        groupBox_4 = new QGroupBox(rb_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(220, 40, 311, 171));
        BTN_COBOT_INIT = new QPushButton(groupBox_4);
        BTN_COBOT_INIT->setObjectName(QString::fromUtf8("BTN_COBOT_INIT"));
        BTN_COBOT_INIT->setGeometry(QRect(10, 120, 291, 41));
        LE_INIT_POWER = new QLineEdit(groupBox_4);
        LE_INIT_POWER->setObjectName(QString::fromUtf8("LE_INIT_POWER"));
        LE_INIT_POWER->setGeometry(QRect(10, 30, 31, 31));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 29, 91, 31));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 80, 91, 31));
        LE_INIT_DEVICE = new QLineEdit(groupBox_4);
        LE_INIT_DEVICE->setObjectName(QString::fromUtf8("LE_INIT_DEVICE"));
        LE_INIT_DEVICE->setGeometry(QRect(10, 80, 31, 31));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(200, 30, 101, 31));
        LE_INIT_SYSTEM = new QLineEdit(groupBox_4);
        LE_INIT_SYSTEM->setObjectName(QString::fromUtf8("LE_INIT_SYSTEM"));
        LE_INIT_SYSTEM->setGeometry(QRect(160, 30, 31, 31));
        LE_INIT_ROBOT = new QLineEdit(groupBox_4);
        LE_INIT_ROBOT->setObjectName(QString::fromUtf8("LE_INIT_ROBOT"));
        LE_INIT_ROBOT->setGeometry(QRect(160, 80, 31, 31));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(200, 80, 101, 31));
        LE_TCP_LIST = new QLineEdit(rb_5);
        LE_TCP_LIST->setObjectName(QString::fromUtf8("LE_TCP_LIST"));
        LE_TCP_LIST->setGeometry(QRect(890, 690, 371, 31));
        groupBox_6 = new QGroupBox(rb_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(670, 180, 401, 441));
        textPrint = new QTextEdit(groupBox_6);
        textPrint->setObjectName(QString::fromUtf8("textPrint"));
        textPrint->setGeometry(QRect(10, 70, 381, 361));
        BTN_CLEAR = new QPushButton(groupBox_6);
        BTN_CLEAR->setObjectName(QString::fromUtf8("BTN_CLEAR"));
        BTN_CLEAR->setGeometry(QRect(10, 30, 101, 31));
        BTN_GET_JOINT_AND_TCP_VISION = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_VISION->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_VISION"));
        BTN_GET_JOINT_AND_TCP_VISION->setGeometry(QRect(990, 750, 141, 71));
        BTN_GET_JOINT_AND_TCP_READY_GRIPPER = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_READY_GRIPPER->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_READY_GRIPPER"));
        BTN_GET_JOINT_AND_TCP_READY_GRIPPER->setGeometry(QRect(1150, 750, 141, 71));
        label_16 = new QLabel(rb_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(670, 50, 91, 16));
        BTN_MOTION_RESUME = new QPushButton(rb_5);
        BTN_MOTION_RESUME->setObjectName(QString::fromUtf8("BTN_MOTION_RESUME"));
        BTN_MOTION_RESUME->setGeometry(QRect(990, 40, 101, 61));
        BTN_MOTION_RESUME->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        BTN_MOVE_JOINT_READY_GRIPPER = new QPushButton(rb_5);
        BTN_MOVE_JOINT_READY_GRIPPER->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_READY_GRIPPER"));
        BTN_MOVE_JOINT_READY_GRIPPER->setGeometry(QRect(1100, 360, 141, 71));
        BTN_GET_JOINT_AND_TCP_INIT = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_INIT->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_INIT"));
        BTN_GET_JOINT_AND_TCP_INIT->setGeometry(QRect(830, 750, 141, 71));
        BTN_MOTION_HALT = new QPushButton(rb_5);
        BTN_MOTION_HALT->setObjectName(QString::fromUtf8("BTN_MOTION_HALT"));
        BTN_MOTION_HALT->setGeometry(QRect(1110, 40, 101, 61));
        BTN_MOTION_HALT->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 175, 62);"));
        LE_JOINT_LIST = new QLineEdit(rb_5);
        LE_JOINT_LIST->setObjectName(QString::fromUtf8("LE_JOINT_LIST"));
        LE_JOINT_LIST->setGeometry(QRect(890, 650, 371, 31));
        BTN_MOVE_JOINT_INIT = new QPushButton(rb_5);
        BTN_MOVE_JOINT_INIT->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_INIT"));
        BTN_MOVE_JOINT_INIT->setGeometry(QRect(1100, 200, 141, 71));
        label_17 = new QLabel(rb_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(840, 690, 41, 31));
        FRAME_STATUS = new QFrame(rb_5);
        FRAME_STATUS->setObjectName(QString::fromUtf8("FRAME_STATUS"));
        FRAME_STATUS->setGeometry(QRect(20, 220, 630, 700));
        FRAME_STATUS->setFrameShape(QFrame::StyledPanel);
        FRAME_STATUS->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_4 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 260, 271, 227));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        LE_D_IN_OFF_12 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_12->setObjectName(QString::fromUtf8("LE_D_IN_OFF_12"));
        LE_D_IN_OFF_12->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_12->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_12, 5, 6, 1, 1);

        LE_D_IN_ON_9 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_9->setObjectName(QString::fromUtf8("LE_D_IN_ON_9"));
        LE_D_IN_ON_9->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_9->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_9, 2, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 3, 1, 1);

        LE_D_IN_OFF_9 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_9->setObjectName(QString::fromUtf8("LE_D_IN_OFF_9"));
        LE_D_IN_OFF_9->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_9->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_9, 2, 6, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(30, 0));
        label_25->setMaximumSize(QSize(30, 20));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_25, 4, 0, 1, 1);

        LE_D_IN_OFF_0 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_0->setObjectName(QString::fromUtf8("LE_D_IN_OFF_0"));
        LE_D_IN_OFF_0->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_0->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_0, 1, 2, 1, 1);

        label_36 = new QLabel(gridLayoutWidget_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMinimumSize(QSize(30, 0));
        label_36->setMaximumSize(QSize(30, 20));
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_36, 5, 4, 1, 1);

        LE_D_IN_ON_15 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_15->setObjectName(QString::fromUtf8("LE_D_IN_ON_15"));
        LE_D_IN_ON_15->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_15->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_15, 8, 5, 4, 1);

        label_28 = new QLabel(gridLayoutWidget_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(30, 0));
        label_28->setMaximumSize(QSize(30, 20));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_28, 7, 0, 1, 1);

        LE_D_IN_OFF_5 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_5->setObjectName(QString::fromUtf8("LE_D_IN_OFF_5"));
        LE_D_IN_OFF_5->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_5->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_5, 6, 2, 1, 1);

        LE_D_IN_ON_10 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_10->setObjectName(QString::fromUtf8("LE_D_IN_ON_10"));
        LE_D_IN_ON_10->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_10->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_10, 3, 5, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(30, 0));
        label_24->setMaximumSize(QSize(30, 20));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_24, 2, 0, 1, 1);

        label_37 = new QLabel(gridLayoutWidget_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setMinimumSize(QSize(30, 0));
        label_37->setMaximumSize(QSize(30, 20));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_37, 6, 4, 1, 1);

        LE_D_IN_ON_2 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_2->setObjectName(QString::fromUtf8("LE_D_IN_ON_2"));
        LE_D_IN_ON_2->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_2->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_2, 3, 1, 1, 1);

        LE_D_IN_ON_5 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_5->setObjectName(QString::fromUtf8("LE_D_IN_ON_5"));
        LE_D_IN_ON_5->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_5->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_5, 6, 1, 1, 1);

        LE_D_IN_OFF_2 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_2->setObjectName(QString::fromUtf8("LE_D_IN_OFF_2"));
        LE_D_IN_OFF_2->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_2->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_2, 3, 2, 1, 1);

        label_38 = new QLabel(gridLayoutWidget_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(30, 0));
        label_38->setMaximumSize(QSize(30, 20));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_38, 7, 4, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(30, 0));
        label_21->setMaximumSize(QSize(30, 20));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_21, 5, 0, 1, 1);

        LE_D_IN_ON_12 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_12->setObjectName(QString::fromUtf8("LE_D_IN_ON_12"));
        LE_D_IN_ON_12->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_12->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_12, 5, 5, 1, 1);

        LE_D_IN_ON_3 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_3->setObjectName(QString::fromUtf8("LE_D_IN_ON_3"));
        LE_D_IN_ON_3->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_3->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_3, 4, 1, 1, 1);

        LE_D_IN_OFF_11 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_11->setObjectName(QString::fromUtf8("LE_D_IN_OFF_11"));
        LE_D_IN_OFF_11->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_11->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_11, 4, 6, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(30, 0));
        label_26->setMaximumSize(QSize(30, 20));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_26, 3, 0, 1, 1);

        LE_D_IN_ON_1 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_1->setObjectName(QString::fromUtf8("LE_D_IN_ON_1"));
        LE_D_IN_ON_1->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_1->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_1, 2, 1, 1, 1);

        LE_D_IN_OFF_15 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_15->setObjectName(QString::fromUtf8("LE_D_IN_OFF_15"));
        LE_D_IN_OFF_15->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_15->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_15, 8, 6, 4, 1);

        LE_D_IN_OFF_8 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_8->setObjectName(QString::fromUtf8("LE_D_IN_OFF_8"));
        LE_D_IN_OFF_8->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_8->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_8, 1, 6, 1, 1);

        LE_D_IN_ON_11 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_11->setObjectName(QString::fromUtf8("LE_D_IN_ON_11"));
        LE_D_IN_ON_11->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_11->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_11, 4, 5, 1, 1);

        LE_D_IN_ON_6 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_6->setObjectName(QString::fromUtf8("LE_D_IN_ON_6"));
        LE_D_IN_ON_6->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_6->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_6, 7, 1, 1, 1);

        LE_D_IN_OFF_1 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_1->setObjectName(QString::fromUtf8("LE_D_IN_OFF_1"));
        LE_D_IN_OFF_1->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_1->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_1, 2, 2, 1, 1);

        LE_D_IN_OFF_3 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_3->setObjectName(QString::fromUtf8("LE_D_IN_OFF_3"));
        LE_D_IN_OFF_3->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_3->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_3, 4, 2, 1, 1);

        LE_D_IN_OFF_13 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_13->setObjectName(QString::fromUtf8("LE_D_IN_OFF_13"));
        LE_D_IN_OFF_13->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_13->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_13, 6, 6, 1, 1);

        label_33 = new QLabel(gridLayoutWidget_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(30, 0));
        label_33->setMaximumSize(QSize(30, 20));
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_33, 2, 4, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(30, 0));
        label_22->setMaximumSize(QSize(30, 20));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_22, 6, 0, 1, 1);

        LE_D_IN_ON_4 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_4->setObjectName(QString::fromUtf8("LE_D_IN_ON_4"));
        LE_D_IN_ON_4->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_4->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_4, 5, 1, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(30, 0));
        label_32->setMaximumSize(QSize(30, 20));
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_32, 1, 4, 1, 1);

        LE_D_IN_OFF_14 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_14->setObjectName(QString::fromUtf8("LE_D_IN_OFF_14"));
        LE_D_IN_OFF_14->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_14->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_14, 7, 6, 1, 1);

        LE_D_IN_ON_7 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_7->setObjectName(QString::fromUtf8("LE_D_IN_ON_7"));
        LE_D_IN_ON_7->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_7->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_7, 8, 1, 4, 1);

        label_34 = new QLabel(gridLayoutWidget_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(30, 0));
        label_34->setMaximumSize(QSize(30, 20));
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_34, 3, 4, 1, 1);

        label_39 = new QLabel(gridLayoutWidget_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMinimumSize(QSize(30, 0));
        label_39->setMaximumSize(QSize(30, 20));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_39, 8, 4, 4, 1);

        LE_D_IN_ON_13 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_13->setObjectName(QString::fromUtf8("LE_D_IN_ON_13"));
        LE_D_IN_ON_13->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_13->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_13, 6, 5, 1, 1);

        LE_D_IN_ON_14 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_14->setObjectName(QString::fromUtf8("LE_D_IN_ON_14"));
        LE_D_IN_ON_14->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_14->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_14, 7, 5, 1, 1);

        label_35 = new QLabel(gridLayoutWidget_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMinimumSize(QSize(30, 0));
        label_35->setMaximumSize(QSize(30, 20));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_35, 4, 4, 1, 1);

        LE_D_IN_ON_8 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_8->setObjectName(QString::fromUtf8("LE_D_IN_ON_8"));
        LE_D_IN_ON_8->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_8->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_8, 1, 5, 1, 1);

        LE_D_IN_OFF_7 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_7->setObjectName(QString::fromUtf8("LE_D_IN_OFF_7"));
        LE_D_IN_OFF_7->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_7->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_7, 8, 2, 4, 1);

        label_23 = new QLabel(gridLayoutWidget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(30, 0));
        label_23->setMaximumSize(QSize(30, 20));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_23, 1, 0, 1, 1);

        LE_D_IN_OFF_6 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_6->setObjectName(QString::fromUtf8("LE_D_IN_OFF_6"));
        LE_D_IN_OFF_6->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_6->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_6, 7, 2, 1, 1);

        LE_D_IN_OFF_4 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_4->setObjectName(QString::fromUtf8("LE_D_IN_OFF_4"));
        LE_D_IN_OFF_4->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_4->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_4, 5, 2, 1, 1);

        LE_D_IN_ON_0 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_ON_0->setObjectName(QString::fromUtf8("LE_D_IN_ON_0"));
        LE_D_IN_ON_0->setMinimumSize(QSize(30, 0));
        LE_D_IN_ON_0->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_ON_0, 1, 1, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(30, 0));
        label_31->setMaximumSize(QSize(30, 20));
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_31, 8, 0, 4, 1);

        LE_D_IN_OFF_10 = new QLineEdit(gridLayoutWidget_4);
        LE_D_IN_OFF_10->setObjectName(QString::fromUtf8("LE_D_IN_OFF_10"));
        LE_D_IN_OFF_10->setMinimumSize(QSize(30, 0));
        LE_D_IN_OFF_10->setMaximumSize(QSize(30, 20));

        gridLayout_4->addWidget(LE_D_IN_OFF_10, 3, 6, 1, 1);

        label_40 = new QLabel(gridLayoutWidget_4);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setMinimumSize(QSize(30, 0));
        label_40->setMaximumSize(QSize(30, 20));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_40, 0, 1, 1, 1);

        label_41 = new QLabel(gridLayoutWidget_4);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(30, 0));
        label_41->setMaximumSize(QSize(30, 20));
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_41, 0, 2, 1, 1);

        label_42 = new QLabel(gridLayoutWidget_4);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(30, 0));
        label_42->setMaximumSize(QSize(30, 20));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_42, 0, 5, 1, 1);

        label_43 = new QLabel(gridLayoutWidget_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(30, 0));
        label_43->setMaximumSize(QSize(30, 20));
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_43, 0, 6, 1, 1);

        label_18 = new QLabel(FRAME_STATUS);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(360, 10, 121, 16));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_18->setFont(font3);
        label_18->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(FRAME_STATUS);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(220, 30, 121, 182));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(40, 0));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 4, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(40, 0));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 5, 0, 1, 1);

        label_27 = new QLabel(gridLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(40, 0));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_27, 0, 0, 1, 1);

        label_29 = new QLabel(gridLayoutWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(40, 0));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_29, 1, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(40, 0));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_30, 3, 0, 1, 1);

        label_44 = new QLabel(gridLayoutWidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setMinimumSize(QSize(40, 0));
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_44, 2, 0, 1, 1);

        LE_JNT_REF_1 = new QLineEdit(gridLayoutWidget);
        LE_JNT_REF_1->setObjectName(QString::fromUtf8("LE_JNT_REF_1"));

        gridLayout->addWidget(LE_JNT_REF_1, 0, 1, 1, 1);

        LE_JNT_REF_2 = new QLineEdit(gridLayoutWidget);
        LE_JNT_REF_2->setObjectName(QString::fromUtf8("LE_JNT_REF_2"));

        gridLayout->addWidget(LE_JNT_REF_2, 1, 1, 1, 1);

        LE_JNT_REF_3 = new QLineEdit(gridLayoutWidget);
        LE_JNT_REF_3->setObjectName(QString::fromUtf8("LE_JNT_REF_3"));

        gridLayout->addWidget(LE_JNT_REF_3, 2, 1, 1, 1);

        LE_JNT_REF_4 = new QLineEdit(gridLayoutWidget);
        LE_JNT_REF_4->setObjectName(QString::fromUtf8("LE_JNT_REF_4"));

        gridLayout->addWidget(LE_JNT_REF_4, 3, 1, 1, 1);

        LE_JNT_REF_5 = new QLineEdit(gridLayoutWidget);
        LE_JNT_REF_5->setObjectName(QString::fromUtf8("LE_JNT_REF_5"));

        gridLayout->addWidget(LE_JNT_REF_5, 4, 1, 1, 1);

        LE_JNT_REF_6 = new QLineEdit(gridLayoutWidget);
        LE_JNT_REF_6->setObjectName(QString::fromUtf8("LE_JNT_REF_6"));

        gridLayout->addWidget(LE_JNT_REF_6, 5, 1, 1, 1);

        gridLayoutWidget_8 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(500, 620, 121, 58));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_71 = new QLabel(gridLayoutWidget_8);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setMinimumSize(QSize(40, 0));
        label_71->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_71, 1, 0, 1, 1);

        LE_TA_IN_0 = new QLineEdit(gridLayoutWidget_8);
        LE_TA_IN_0->setObjectName(QString::fromUtf8("LE_TA_IN_0"));

        gridLayout_7->addWidget(LE_TA_IN_0, 0, 1, 1, 1);

        label_74 = new QLabel(gridLayoutWidget_8);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setMinimumSize(QSize(40, 0));
        label_74->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_74, 0, 0, 1, 1);

        LE_TA_IN_1 = new QLineEdit(gridLayoutWidget_8);
        LE_TA_IN_1->setObjectName(QString::fromUtf8("LE_TA_IN_1"));

        gridLayout_7->addWidget(LE_TA_IN_1, 1, 1, 1, 1);

        gridLayoutWidget_9 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(190, 620, 134, 71));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        LE_TD_IN_OFF_0 = new QLineEdit(gridLayoutWidget_9);
        LE_TD_IN_OFF_0->setObjectName(QString::fromUtf8("LE_TD_IN_OFF_0"));
        LE_TD_IN_OFF_0->setMaximumSize(QSize(30, 20));

        gridLayout_9->addWidget(LE_TD_IN_OFF_0, 1, 2, 1, 1);

        label_96 = new QLabel(gridLayoutWidget_9);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setMinimumSize(QSize(40, 0));
        label_96->setMaximumSize(QSize(16777215, 20));
        label_96->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_96, 0, 2, 1, 1);

        label_82 = new QLabel(gridLayoutWidget_9);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setMinimumSize(QSize(40, 0));
        label_82->setMaximumSize(QSize(16777215, 20));
        label_82->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_82, 2, 0, 1, 1);

        LE_TD_IN_ON_0 = new QLineEdit(gridLayoutWidget_9);
        LE_TD_IN_ON_0->setObjectName(QString::fromUtf8("LE_TD_IN_ON_0"));
        LE_TD_IN_ON_0->setMaximumSize(QSize(30, 20));

        gridLayout_9->addWidget(LE_TD_IN_ON_0, 1, 1, 1, 1);

        label_93 = new QLabel(gridLayoutWidget_9);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setMinimumSize(QSize(40, 0));
        label_93->setMaximumSize(QSize(16777215, 20));
        label_93->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_93, 1, 0, 1, 1);

        LE_TD_IN_OFF_1 = new QLineEdit(gridLayoutWidget_9);
        LE_TD_IN_OFF_1->setObjectName(QString::fromUtf8("LE_TD_IN_OFF_1"));
        LE_TD_IN_OFF_1->setMaximumSize(QSize(30, 20));

        gridLayout_9->addWidget(LE_TD_IN_OFF_1, 2, 2, 1, 1);

        label_95 = new QLabel(gridLayoutWidget_9);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setMinimumSize(QSize(40, 0));
        label_95->setMaximumSize(QSize(16777215, 20));
        label_95->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_95, 0, 1, 1, 1);

        LE_TD_IN_ON_1 = new QLineEdit(gridLayoutWidget_9);
        LE_TD_IN_ON_1->setObjectName(QString::fromUtf8("LE_TD_IN_ON_1"));
        LE_TD_IN_ON_1->setMaximumSize(QSize(30, 20));

        gridLayout_9->addWidget(LE_TD_IN_ON_1, 2, 1, 1, 1);

        label_45 = new QLabel(FRAME_STATUS);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(10, 100, 81, 16));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_45->setFont(font4);
        label_45->setAlignment(Qt::AlignCenter);
        label_101 = new QLabel(FRAME_STATUS);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setGeometry(QRect(10, 600, 131, 16));
        label_101->setFont(font4);
        label_101->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_SIMULATION = new QLineEdit(FRAME_STATUS);
        LE_PG_MODE_SIMULATION->setObjectName(QString::fromUtf8("LE_PG_MODE_SIMULATION"));
        LE_PG_MODE_SIMULATION->setGeometry(QRect(10, 60, 81, 31));
        LE_PG_MODE_SIMULATION->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_10 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_10->setObjectName(QString::fromUtf8("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(350, 620, 134, 71));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        LE_TD_OUT_OFF_0 = new QLineEdit(gridLayoutWidget_10);
        LE_TD_OUT_OFF_0->setObjectName(QString::fromUtf8("LE_TD_OUT_OFF_0"));
        LE_TD_OUT_OFF_0->setMaximumSize(QSize(30, 20));

        gridLayout_10->addWidget(LE_TD_OUT_OFF_0, 1, 2, 1, 1);

        label_97 = new QLabel(gridLayoutWidget_10);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setMinimumSize(QSize(40, 0));
        label_97->setMaximumSize(QSize(16777215, 20));
        label_97->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_97, 0, 2, 1, 1);

        label_83 = new QLabel(gridLayoutWidget_10);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setMinimumSize(QSize(40, 0));
        label_83->setMaximumSize(QSize(16777215, 20));
        label_83->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_83, 2, 0, 1, 1);

        LE_TD_OUT_ON_0 = new QLineEdit(gridLayoutWidget_10);
        LE_TD_OUT_ON_0->setObjectName(QString::fromUtf8("LE_TD_OUT_ON_0"));
        LE_TD_OUT_ON_0->setMaximumSize(QSize(30, 20));

        gridLayout_10->addWidget(LE_TD_OUT_ON_0, 1, 1, 1, 1);

        label_94 = new QLabel(gridLayoutWidget_10);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setMinimumSize(QSize(40, 0));
        label_94->setMaximumSize(QSize(16777215, 20));
        label_94->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_94, 1, 0, 1, 1);

        LE_TD_OUT_OFF_1 = new QLineEdit(gridLayoutWidget_10);
        LE_TD_OUT_OFF_1->setObjectName(QString::fromUtf8("LE_TD_OUT_OFF_1"));
        LE_TD_OUT_OFF_1->setMaximumSize(QSize(30, 20));

        gridLayout_10->addWidget(LE_TD_OUT_OFF_1, 2, 2, 1, 1);

        label_98 = new QLabel(gridLayoutWidget_10);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setMinimumSize(QSize(40, 0));
        label_98->setMaximumSize(QSize(16777215, 20));
        label_98->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_98, 0, 1, 1, 1);

        LE_TD_OUT_ON_1 = new QLineEdit(gridLayoutWidget_10);
        LE_TD_OUT_ON_1->setObjectName(QString::fromUtf8("LE_TD_OUT_ON_1"));
        LE_TD_OUT_ON_1->setMaximumSize(QSize(30, 20));

        gridLayout_10->addWidget(LE_TD_OUT_ON_1, 2, 1, 1, 1);

        label_84 = new QLabel(FRAME_STATUS);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(110, 10, 91, 16));
        label_84->setFont(font4);
        label_84->setAlignment(Qt::AlignCenter);
        label_46 = new QLabel(FRAME_STATUS);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(350, 240, 271, 16));
        label_46->setFont(font4);
        label_46->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_5 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(347, 260, 271, 227));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        LE_D_OUT_OFF_12 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_12->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_12"));
        LE_D_OUT_OFF_12->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_12->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_12, 5, 6, 1, 1);

        LE_D_OUT_ON_9 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_9->setObjectName(QString::fromUtf8("LE_D_OUT_ON_9"));
        LE_D_OUT_ON_9->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_9->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_9, 2, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        LE_D_OUT_OFF_9 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_9->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_9"));
        LE_D_OUT_OFF_9->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_9->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_9, 2, 6, 1, 1);

        label_47 = new QLabel(gridLayoutWidget_5);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setMinimumSize(QSize(30, 0));
        label_47->setMaximumSize(QSize(30, 20));
        label_47->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_47, 4, 0, 1, 1);

        LE_D_OUT_OFF_0 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_0->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_0"));
        LE_D_OUT_OFF_0->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_0->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_0, 1, 2, 1, 1);

        label_48 = new QLabel(gridLayoutWidget_5);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setMinimumSize(QSize(30, 0));
        label_48->setMaximumSize(QSize(30, 20));
        label_48->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_48, 5, 4, 1, 1);

        LE_D_OUT_ON_15 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_15->setObjectName(QString::fromUtf8("LE_D_OUT_ON_15"));
        LE_D_OUT_ON_15->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_15->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_15, 8, 5, 4, 1);

        label_49 = new QLabel(gridLayoutWidget_5);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setMinimumSize(QSize(30, 0));
        label_49->setMaximumSize(QSize(30, 20));
        label_49->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_49, 7, 0, 1, 1);

        LE_D_OUT_OFF_5 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_5->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_5"));
        LE_D_OUT_OFF_5->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_5->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_5, 6, 2, 1, 1);

        LE_D_OUT_ON_10 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_10->setObjectName(QString::fromUtf8("LE_D_OUT_ON_10"));
        LE_D_OUT_ON_10->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_10->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_10, 3, 5, 1, 1);

        label_50 = new QLabel(gridLayoutWidget_5);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setMinimumSize(QSize(30, 0));
        label_50->setMaximumSize(QSize(30, 20));
        label_50->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_50, 2, 0, 1, 1);

        label_51 = new QLabel(gridLayoutWidget_5);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setMinimumSize(QSize(30, 0));
        label_51->setMaximumSize(QSize(30, 20));
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_51, 6, 4, 1, 1);

        LE_D_OUT_ON_2 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_2->setObjectName(QString::fromUtf8("LE_D_OUT_ON_2"));
        LE_D_OUT_ON_2->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_2->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_2, 3, 1, 1, 1);

        LE_D_OUT_ON_5 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_5->setObjectName(QString::fromUtf8("LE_D_OUT_ON_5"));
        LE_D_OUT_ON_5->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_5->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_5, 6, 1, 1, 1);

        LE_D_OUT_OFF_2 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_2->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_2"));
        LE_D_OUT_OFF_2->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_2->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_2, 3, 2, 1, 1);

        label_52 = new QLabel(gridLayoutWidget_5);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setMinimumSize(QSize(30, 0));
        label_52->setMaximumSize(QSize(30, 20));
        label_52->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_52, 7, 4, 1, 1);

        label_53 = new QLabel(gridLayoutWidget_5);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setMinimumSize(QSize(30, 0));
        label_53->setMaximumSize(QSize(30, 20));
        label_53->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_53, 5, 0, 1, 1);

        LE_D_OUT_ON_12 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_12->setObjectName(QString::fromUtf8("LE_D_OUT_ON_12"));
        LE_D_OUT_ON_12->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_12->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_12, 5, 5, 1, 1);

        LE_D_OUT_ON_3 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_3->setObjectName(QString::fromUtf8("LE_D_OUT_ON_3"));
        LE_D_OUT_ON_3->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_3->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_3, 4, 1, 1, 1);

        LE_D_OUT_OFF_11 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_11->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_11"));
        LE_D_OUT_OFF_11->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_11->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_11, 4, 6, 1, 1);

        label_54 = new QLabel(gridLayoutWidget_5);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setMinimumSize(QSize(30, 0));
        label_54->setMaximumSize(QSize(30, 20));
        label_54->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_54, 3, 0, 1, 1);

        LE_D_OUT_ON_1 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_1->setObjectName(QString::fromUtf8("LE_D_OUT_ON_1"));
        LE_D_OUT_ON_1->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_1->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_1, 2, 1, 1, 1);

        LE_D_OUT_OFF_15 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_15->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_15"));
        LE_D_OUT_OFF_15->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_15->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_15, 8, 6, 4, 1);

        LE_D_OUT_OFF_8 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_8->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_8"));
        LE_D_OUT_OFF_8->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_8->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_8, 1, 6, 1, 1);

        LE_D_OUT_ON_11 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_11->setObjectName(QString::fromUtf8("LE_D_OUT_ON_11"));
        LE_D_OUT_ON_11->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_11->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_11, 4, 5, 1, 1);

        LE_D_OUT_ON_6 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_6->setObjectName(QString::fromUtf8("LE_D_OUT_ON_6"));
        LE_D_OUT_ON_6->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_6->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_6, 7, 1, 1, 1);

        LE_D_OUT_OFF_1 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_1->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_1"));
        LE_D_OUT_OFF_1->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_1->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_1, 2, 2, 1, 1);

        LE_D_OUT_OFF_3 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_3->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_3"));
        LE_D_OUT_OFF_3->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_3->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_3, 4, 2, 1, 1);

        LE_D_OUT_OFF_13 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_13->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_13"));
        LE_D_OUT_OFF_13->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_13->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_13, 6, 6, 1, 1);

        label_55 = new QLabel(gridLayoutWidget_5);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMinimumSize(QSize(30, 0));
        label_55->setMaximumSize(QSize(30, 20));
        label_55->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_55, 2, 4, 1, 1);

        label_56 = new QLabel(gridLayoutWidget_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMinimumSize(QSize(30, 0));
        label_56->setMaximumSize(QSize(30, 20));
        label_56->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_56, 6, 0, 1, 1);

        LE_D_OUT_ON_4 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_4->setObjectName(QString::fromUtf8("LE_D_OUT_ON_4"));
        LE_D_OUT_ON_4->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_4->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_4, 5, 1, 1, 1);

        label_57 = new QLabel(gridLayoutWidget_5);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setMinimumSize(QSize(30, 0));
        label_57->setMaximumSize(QSize(30, 20));
        label_57->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_57, 1, 4, 1, 1);

        LE_D_OUT_OFF_14 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_14->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_14"));
        LE_D_OUT_OFF_14->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_14->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_14, 7, 6, 1, 1);

        LE_D_OUT_ON_7 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_7->setObjectName(QString::fromUtf8("LE_D_OUT_ON_7"));
        LE_D_OUT_ON_7->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_7->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_7, 8, 1, 4, 1);

        label_58 = new QLabel(gridLayoutWidget_5);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setMinimumSize(QSize(30, 0));
        label_58->setMaximumSize(QSize(30, 20));
        label_58->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_58, 3, 4, 1, 1);

        label_59 = new QLabel(gridLayoutWidget_5);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setMinimumSize(QSize(30, 0));
        label_59->setMaximumSize(QSize(30, 20));
        label_59->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_59, 8, 4, 4, 1);

        LE_D_OUT_ON_13 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_13->setObjectName(QString::fromUtf8("LE_D_OUT_ON_13"));
        LE_D_OUT_ON_13->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_13->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_13, 6, 5, 1, 1);

        LE_D_OUT_ON_14 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_14->setObjectName(QString::fromUtf8("LE_D_OUT_ON_14"));
        LE_D_OUT_ON_14->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_14->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_14, 7, 5, 1, 1);

        label_60 = new QLabel(gridLayoutWidget_5);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setMinimumSize(QSize(30, 0));
        label_60->setMaximumSize(QSize(30, 20));
        label_60->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_60, 4, 4, 1, 1);

        LE_D_OUT_ON_8 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_8->setObjectName(QString::fromUtf8("LE_D_OUT_ON_8"));
        LE_D_OUT_ON_8->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_8->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_8, 1, 5, 1, 1);

        LE_D_OUT_OFF_7 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_7->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_7"));
        LE_D_OUT_OFF_7->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_7->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_7, 8, 2, 4, 1);

        label_61 = new QLabel(gridLayoutWidget_5);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setMinimumSize(QSize(30, 0));
        label_61->setMaximumSize(QSize(30, 20));
        label_61->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_61, 1, 0, 1, 1);

        LE_D_OUT_OFF_6 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_6->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_6"));
        LE_D_OUT_OFF_6->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_6->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_6, 7, 2, 1, 1);

        LE_D_OUT_OFF_4 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_4->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_4"));
        LE_D_OUT_OFF_4->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_4->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_4, 5, 2, 1, 1);

        LE_D_OUT_ON_0 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_ON_0->setObjectName(QString::fromUtf8("LE_D_OUT_ON_0"));
        LE_D_OUT_ON_0->setMinimumSize(QSize(30, 0));
        LE_D_OUT_ON_0->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_ON_0, 1, 1, 1, 1);

        label_62 = new QLabel(gridLayoutWidget_5);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setMinimumSize(QSize(30, 0));
        label_62->setMaximumSize(QSize(30, 20));
        label_62->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_62, 8, 0, 4, 1);

        LE_D_OUT_OFF_10 = new QLineEdit(gridLayoutWidget_5);
        LE_D_OUT_OFF_10->setObjectName(QString::fromUtf8("LE_D_OUT_OFF_10"));
        LE_D_OUT_OFF_10->setMinimumSize(QSize(30, 0));
        LE_D_OUT_OFF_10->setMaximumSize(QSize(30, 20));

        gridLayout_5->addWidget(LE_D_OUT_OFF_10, 3, 6, 1, 1);

        label_63 = new QLabel(gridLayoutWidget_5);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setMinimumSize(QSize(30, 0));
        label_63->setMaximumSize(QSize(30, 20));
        label_63->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_63, 0, 1, 1, 1);

        label_64 = new QLabel(gridLayoutWidget_5);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setMinimumSize(QSize(30, 0));
        label_64->setMaximumSize(QSize(30, 20));
        label_64->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_64, 0, 2, 1, 1);

        label_65 = new QLabel(gridLayoutWidget_5);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setMinimumSize(QSize(30, 0));
        label_65->setMaximumSize(QSize(30, 20));
        label_65->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_65, 0, 5, 1, 1);

        label_66 = new QLabel(gridLayoutWidget_5);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setMinimumSize(QSize(30, 0));
        label_66->setMaximumSize(QSize(30, 20));
        label_66->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_66, 0, 6, 1, 1);

        label_99 = new QLabel(FRAME_STATUS);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setGeometry(QRect(190, 600, 131, 16));
        label_99->setFont(font4);
        label_99->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_SOS = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATUS_SOS->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_SOS"));
        LE_ROBOT_STATUS_SOS->setGeometry(QRect(110, 180, 91, 31));
        LE_ROBOT_STATUS_SOS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE_IDLE = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATE_IDLE->setObjectName(QString::fromUtf8("LE_ROBOT_STATE_IDLE"));
        LE_ROBOT_STATE_IDLE->setGeometry(QRect(10, 120, 81, 31));
        LE_ROBOT_STATE_IDLE->setAlignment(Qt::AlignCenter);
        label_67 = new QLabel(FRAME_STATUS);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(10, 240, 271, 16));
        label_67->setFont(font4);
        label_67->setAlignment(Qt::AlignCenter);
        label_100 = new QLabel(FRAME_STATUS);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(350, 600, 131, 16));
        label_100->setFont(font4);
        label_100->setAlignment(Qt::AlignCenter);
        label_68 = new QLabel(FRAME_STATUS);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(10, 10, 81, 16));
        label_68->setFont(font4);
        label_68->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_3 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(500, 30, 121, 182));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_69 = new QLabel(gridLayoutWidget_3);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setMinimumSize(QSize(40, 0));
        label_69->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_69, 4, 0, 1, 1);

        label_70 = new QLabel(gridLayoutWidget_3);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setMinimumSize(QSize(40, 0));
        label_70->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_70, 5, 0, 1, 1);

        label_72 = new QLabel(gridLayoutWidget_3);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setMinimumSize(QSize(40, 0));
        label_72->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_72, 0, 0, 1, 1);

        label_73 = new QLabel(gridLayoutWidget_3);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setMinimumSize(QSize(40, 0));
        label_73->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_73, 1, 0, 1, 1);

        label_75 = new QLabel(gridLayoutWidget_3);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setMinimumSize(QSize(40, 0));
        label_75->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_75, 3, 0, 1, 1);

        label_76 = new QLabel(gridLayoutWidget_3);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setMinimumSize(QSize(40, 0));
        label_76->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_76, 2, 0, 1, 1);

        LE_TCP_REF_X = new QLineEdit(gridLayoutWidget_3);
        LE_TCP_REF_X->setObjectName(QString::fromUtf8("LE_TCP_REF_X"));

        gridLayout_3->addWidget(LE_TCP_REF_X, 0, 1, 1, 1);

        LE_TCP_REF_Y = new QLineEdit(gridLayoutWidget_3);
        LE_TCP_REF_Y->setObjectName(QString::fromUtf8("LE_TCP_REF_Y"));

        gridLayout_3->addWidget(LE_TCP_REF_Y, 1, 1, 1, 1);

        LE_TCP_REF_Z = new QLineEdit(gridLayoutWidget_3);
        LE_TCP_REF_Z->setObjectName(QString::fromUtf8("LE_TCP_REF_Z"));

        gridLayout_3->addWidget(LE_TCP_REF_Z, 2, 1, 1, 1);

        LE_TCP_REF_RX = new QLineEdit(gridLayoutWidget_3);
        LE_TCP_REF_RX->setObjectName(QString::fromUtf8("LE_TCP_REF_RX"));

        gridLayout_3->addWidget(LE_TCP_REF_RX, 3, 1, 1, 1);

        LE_TCP_REF_RY = new QLineEdit(gridLayoutWidget_3);
        LE_TCP_REF_RY->setObjectName(QString::fromUtf8("LE_TCP_REF_RY"));

        gridLayout_3->addWidget(LE_TCP_REF_RY, 4, 1, 1, 1);

        LE_TCP_REF_RZ = new QLineEdit(gridLayoutWidget_3);
        LE_TCP_REF_RZ->setObjectName(QString::fromUtf8("LE_TCP_REF_RZ"));

        gridLayout_3->addWidget(LE_TCP_REF_RZ, 5, 1, 1, 1);

        LE_ROBOT_STATUS_EMS = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATUS_EMS->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_EMS"));
        LE_ROBOT_STATUS_EMS->setGeometry(QRect(110, 150, 91, 31));
        LE_ROBOT_STATUS_EMS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE_MOVING = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATE_MOVING->setObjectName(QString::fromUtf8("LE_ROBOT_STATE_MOVING"));
        LE_ROBOT_STATE_MOVING->setGeometry(QRect(10, 150, 81, 31));
        LE_ROBOT_STATE_MOVING->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_PAUSED = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATUS_PAUSED->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_PAUSED"));
        LE_ROBOT_STATUS_PAUSED->setGeometry(QRect(110, 120, 91, 31));
        LE_ROBOT_STATUS_PAUSED->setAlignment(Qt::AlignCenter);
        label_77 = new QLabel(FRAME_STATUS);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(0, 500, 281, 16));
        label_77->setFont(font4);
        label_77->setAlignment(Qt::AlignCenter);
        label_78 = new QLabel(FRAME_STATUS);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(500, 10, 121, 16));
        label_78->setFont(font3);
        label_78->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_SELF_COLLISION = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATUS_SELF_COLLISION->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_SELF_COLLISION"));
        LE_ROBOT_STATUS_SELF_COLLISION->setGeometry(QRect(110, 90, 91, 31));
        LE_ROBOT_STATUS_SELF_COLLISION->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_REAL = new QLineEdit(FRAME_STATUS);
        LE_PG_MODE_REAL->setObjectName(QString::fromUtf8("LE_PG_MODE_REAL"));
        LE_PG_MODE_REAL->setGeometry(QRect(10, 30, 81, 31));
        LE_PG_MODE_REAL->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_6 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 520, 271, 61));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_79 = new QLabel(gridLayoutWidget_6);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setMinimumSize(QSize(40, 0));
        label_79->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_79, 0, 3, 1, 1);

        label_80 = new QLabel(gridLayoutWidget_6);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setMinimumSize(QSize(40, 0));
        label_80->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_80, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_81 = new QLabel(gridLayoutWidget_6);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setMinimumSize(QSize(40, 0));
        label_81->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_81, 1, 3, 1, 1);

        LE_A_IN_1 = new QLineEdit(gridLayoutWidget_6);
        LE_A_IN_1->setObjectName(QString::fromUtf8("LE_A_IN_1"));

        gridLayout_6->addWidget(LE_A_IN_1, 1, 1, 1, 1);

        label_85 = new QLabel(gridLayoutWidget_6);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setMinimumSize(QSize(40, 0));
        label_85->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_85, 0, 0, 1, 1);

        LE_A_IN_0 = new QLineEdit(gridLayoutWidget_6);
        LE_A_IN_0->setObjectName(QString::fromUtf8("LE_A_IN_0"));

        gridLayout_6->addWidget(LE_A_IN_0, 0, 1, 1, 1);

        LE_A_IN_2 = new QLineEdit(gridLayoutWidget_6);
        LE_A_IN_2->setObjectName(QString::fromUtf8("LE_A_IN_2"));

        gridLayout_6->addWidget(LE_A_IN_2, 0, 4, 1, 1);

        LE_A_IN_3 = new QLineEdit(gridLayoutWidget_6);
        LE_A_IN_3->setObjectName(QString::fromUtf8("LE_A_IN_3"));

        gridLayout_6->addWidget(LE_A_IN_3, 1, 4, 1, 1);

        LE_ROBOT_STATUS_EXT_COLLISION = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATUS_EXT_COLLISION->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_EXT_COLLISION"));
        LE_ROBOT_STATUS_EXT_COLLISION->setGeometry(QRect(110, 60, 91, 31));
        LE_ROBOT_STATUS_EXT_COLLISION->setAlignment(Qt::AlignCenter);
        label_86 = new QLabel(FRAME_STATUS);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(220, 10, 121, 16));
        label_86->setFont(font3);
        label_86->setAlignment(Qt::AlignCenter);
        label_87 = new QLabel(FRAME_STATUS);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(350, 500, 271, 16));
        label_87->setFont(font4);
        label_87->setAlignment(Qt::AlignCenter);
        label_88 = new QLabel(FRAME_STATUS);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(500, 600, 121, 20));
        label_88->setFont(font4);
        label_88->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_TEACHING = new QLineEdit(FRAME_STATUS);
        LE_ROBOT_STATUS_TEACHING->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_TEACHING"));
        LE_ROBOT_STATUS_TEACHING->setGeometry(QRect(110, 30, 91, 31));
        LE_ROBOT_STATUS_TEACHING->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_7 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(350, 520, 271, 61));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_89 = new QLabel(gridLayoutWidget_7);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setMinimumSize(QSize(40, 0));
        label_89->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_89, 0, 3, 1, 1);

        label_90 = new QLabel(gridLayoutWidget_7);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setMinimumSize(QSize(40, 0));
        label_90->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_90, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        label_91 = new QLabel(gridLayoutWidget_7);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setMinimumSize(QSize(40, 0));
        label_91->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_91, 1, 3, 1, 1);

        LE_A_OUT_1 = new QLineEdit(gridLayoutWidget_7);
        LE_A_OUT_1->setObjectName(QString::fromUtf8("LE_A_OUT_1"));

        gridLayout_8->addWidget(LE_A_OUT_1, 1, 1, 1, 1);

        label_92 = new QLabel(gridLayoutWidget_7);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setMinimumSize(QSize(40, 0));
        label_92->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_92, 0, 0, 1, 1);

        LE_A_OUT_0 = new QLineEdit(gridLayoutWidget_7);
        LE_A_OUT_0->setObjectName(QString::fromUtf8("LE_A_OUT_0"));

        gridLayout_8->addWidget(LE_A_OUT_0, 0, 1, 1, 1);

        LE_A_OUT_2 = new QLineEdit(gridLayoutWidget_7);
        LE_A_OUT_2->setObjectName(QString::fromUtf8("LE_A_OUT_2"));

        gridLayout_8->addWidget(LE_A_OUT_2, 0, 4, 1, 1);

        LE_A_OUT_3 = new QLineEdit(gridLayoutWidget_7);
        LE_A_OUT_3->setObjectName(QString::fromUtf8("LE_A_OUT_3"));

        gridLayout_8->addWidget(LE_A_OUT_3, 1, 4, 1, 1);

        gridLayoutWidget_2 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(360, 30, 121, 182));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_102 = new QLabel(gridLayoutWidget_2);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setMinimumSize(QSize(40, 0));
        label_102->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_102, 4, 0, 1, 1);

        label_103 = new QLabel(gridLayoutWidget_2);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        label_103->setMinimumSize(QSize(40, 0));
        label_103->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_103, 5, 0, 1, 1);

        label_104 = new QLabel(gridLayoutWidget_2);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setMinimumSize(QSize(40, 0));
        label_104->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_104, 0, 0, 1, 1);

        label_105 = new QLabel(gridLayoutWidget_2);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        label_105->setMinimumSize(QSize(40, 0));
        label_105->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_105, 1, 0, 1, 1);

        label_106 = new QLabel(gridLayoutWidget_2);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setMinimumSize(QSize(40, 0));
        label_106->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_106, 3, 0, 1, 1);

        label_107 = new QLabel(gridLayoutWidget_2);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setMinimumSize(QSize(40, 0));
        label_107->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_107, 2, 0, 1, 1);

        LE_JNT_ENC_1 = new QLineEdit(gridLayoutWidget_2);
        LE_JNT_ENC_1->setObjectName(QString::fromUtf8("LE_JNT_ENC_1"));

        gridLayout_2->addWidget(LE_JNT_ENC_1, 0, 1, 1, 1);

        LE_JNT_ENC_2 = new QLineEdit(gridLayoutWidget_2);
        LE_JNT_ENC_2->setObjectName(QString::fromUtf8("LE_JNT_ENC_2"));

        gridLayout_2->addWidget(LE_JNT_ENC_2, 1, 1, 1, 1);

        LE_JNT_ENC_3 = new QLineEdit(gridLayoutWidget_2);
        LE_JNT_ENC_3->setObjectName(QString::fromUtf8("LE_JNT_ENC_3"));

        gridLayout_2->addWidget(LE_JNT_ENC_3, 2, 1, 1, 1);

        LE_JNT_ENC_4 = new QLineEdit(gridLayoutWidget_2);
        LE_JNT_ENC_4->setObjectName(QString::fromUtf8("LE_JNT_ENC_4"));

        gridLayout_2->addWidget(LE_JNT_ENC_4, 3, 1, 1, 1);

        LE_JNT_ENC_5 = new QLineEdit(gridLayoutWidget_2);
        LE_JNT_ENC_5->setObjectName(QString::fromUtf8("LE_JNT_ENC_5"));

        gridLayout_2->addWidget(LE_JNT_ENC_5, 4, 1, 1, 1);

        LE_JNT_ENC_6 = new QLineEdit(gridLayoutWidget_2);
        LE_JNT_ENC_6->setObjectName(QString::fromUtf8("LE_JNT_ENC_6"));

        gridLayout_2->addWidget(LE_JNT_ENC_6, 5, 1, 1, 1);

        gridLayoutWidget_11 = new QWidget(FRAME_STATUS);
        gridLayoutWidget_11->setObjectName(QString::fromUtf8("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(10, 620, 179, 71));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_108 = new QLabel(gridLayoutWidget_11);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setMinimumSize(QSize(40, 0));
        label_108->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_108, 0, 0, 1, 1);

        label_109 = new QLabel(gridLayoutWidget_11);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        label_109->setMinimumSize(QSize(40, 0));
        label_109->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_109, 0, 1, 1, 1);

        label_110 = new QLabel(gridLayoutWidget_11);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setMinimumSize(QSize(40, 0));
        label_110->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_110, 0, 2, 1, 1);

        LE_TV_0 = new QLineEdit(gridLayoutWidget_11);
        LE_TV_0->setObjectName(QString::fromUtf8("LE_TV_0"));
        LE_TV_0->setMinimumSize(QSize(0, 35));

        gridLayout_11->addWidget(LE_TV_0, 1, 0, 1, 1);

        LE_TV_12 = new QLineEdit(gridLayoutWidget_11);
        LE_TV_12->setObjectName(QString::fromUtf8("LE_TV_12"));
        LE_TV_12->setMinimumSize(QSize(0, 35));

        gridLayout_11->addWidget(LE_TV_12, 1, 1, 1, 1);

        LE_TV_24 = new QLineEdit(gridLayoutWidget_11);
        LE_TV_24->setObjectName(QString::fromUtf8("LE_TV_24"));
        LE_TV_24->setMinimumSize(QSize(0, 35));

        gridLayout_11->addWidget(LE_TV_24, 1, 2, 1, 1);

        BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER"));
        BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER->setGeometry(QRect(1310, 750, 141, 71));
        BTN_COLLISION_RESUME = new QPushButton(rb_5);
        BTN_COLLISION_RESUME->setObjectName(QString::fromUtf8("BTN_COLLISION_RESUME"));
        BTN_COLLISION_RESUME->setGeometry(QRect(990, 110, 101, 61));
        BTN_COLLISION_RESUME->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);"));
        BTN_MOTION_PAUSE = new QPushButton(rb_5);
        BTN_MOTION_PAUSE->setObjectName(QString::fromUtf8("BTN_MOTION_PAUSE"));
        BTN_MOTION_PAUSE->setGeometry(QRect(870, 40, 101, 61));
        BTN_MOTION_PAUSE->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 233, 79);"));
        GB_NETWORK_2 = new QGroupBox(rb_5);
        GB_NETWORK_2->setObjectName(QString::fromUtf8("GB_NETWORK_2"));
        GB_NETWORK_2->setGeometry(QRect(550, 40, 101, 171));
        GB_NETWORK_2->setFont(font2);
        BTN_MODE_REAL = new QPushButton(GB_NETWORK_2);
        BTN_MODE_REAL->setObjectName(QString::fromUtf8("BTN_MODE_REAL"));
        BTN_MODE_REAL->setGeometry(QRect(10, 30, 81, 41));
        BTN_MODE_REAL->setMinimumSize(QSize(0, 40));
        BTN_MODE_SIMULATION = new QPushButton(GB_NETWORK_2);
        BTN_MODE_SIMULATION->setObjectName(QString::fromUtf8("BTN_MODE_SIMULATION"));
        BTN_MODE_SIMULATION->setGeometry(QRect(10, 120, 81, 41));
        BTN_MODE_SIMULATION->setMinimumSize(QSize(0, 40));
        BTN_TEST = new QPushButton(rb_5);
        BTN_TEST->setObjectName(QString::fromUtf8("BTN_TEST"));
        BTN_TEST->setGeometry(QRect(670, 640, 141, 71));
        LB_BASE_SPEED = new QLabel(rb_5);
        LB_BASE_SPEED->setObjectName(QString::fromUtf8("LB_BASE_SPEED"));
        LB_BASE_SPEED->setGeometry(QRect(790, 50, 51, 20));
        LB_BASE_SPEED->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        BTN_MOVE_JOINT_GRAPS_GRIPPER = new QPushButton(rb_5);
        BTN_MOVE_JOINT_GRAPS_GRIPPER->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_GRAPS_GRIPPER"));
        BTN_MOVE_JOINT_GRAPS_GRIPPER->setGeometry(QRect(1100, 440, 141, 71));
        label_137 = new QLabel(rb_5);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        label_137->setGeometry(QRect(20, 0, 251, 41));
        label_137->setTextFormat(Qt::RichText);
        label_137->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        BTN_MOVE_JOINT_INIT_2 = new QPushButton(rb_5);
        BTN_MOVE_JOINT_INIT_2->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_INIT_2"));
        BTN_MOVE_JOINT_INIT_2->setGeometry(QRect(1260, 200, 141, 71));
        BTN_MOVE_JOINT_INIT_3 = new QPushButton(rb_5);
        BTN_MOVE_JOINT_INIT_3->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_INIT_3"));
        BTN_MOVE_JOINT_INIT_3->setGeometry(QRect(1260, 280, 141, 71));
        BTN_MOVE_JOINT_INIT_4 = new QPushButton(rb_5);
        BTN_MOVE_JOINT_INIT_4->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_INIT_4"));
        BTN_MOVE_JOINT_INIT_4->setGeometry(QRect(1260, 360, 141, 71));
        BTN_MOVE_JOINT_INIT_5 = new QPushButton(rb_5);
        BTN_MOVE_JOINT_INIT_5->setObjectName(QString::fromUtf8("BTN_MOVE_JOINT_INIT_5"));
        BTN_MOVE_JOINT_INIT_5->setGeometry(QRect(1260, 440, 141, 71));
        BTN_GET_JOINT_AND_TCP_PD1 = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_PD1->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_PD1"));
        BTN_GET_JOINT_AND_TCP_PD1->setGeometry(QRect(830, 830, 141, 71));
        BTN_GET_JOINT_AND_TCP_PD2 = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_PD2->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_PD2"));
        BTN_GET_JOINT_AND_TCP_PD2->setGeometry(QRect(990, 830, 141, 71));
        BTN_GET_JOINT_AND_TCP_RG2 = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_RG2->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_RG2"));
        BTN_GET_JOINT_AND_TCP_RG2->setGeometry(QRect(1150, 830, 141, 71));
        BTN_GET_JOINT_AND_TCP_G2 = new QPushButton(rb_5);
        BTN_GET_JOINT_AND_TCP_G2->setObjectName(QString::fromUtf8("BTN_GET_JOINT_AND_TCP_G2"));
        BTN_GET_JOINT_AND_TCP_G2->setGeometry(QRect(1310, 830, 141, 71));
        motor->addTab(rb_5, QString());
        vison_gripper = new QWidget();
        vison_gripper->setObjectName(QString::fromUtf8("vison_gripper"));
        GR_KITECH = new QGroupBox(vison_gripper);
        GR_KITECH->setObjectName(QString::fromUtf8("GR_KITECH"));
        GR_KITECH->setGeometry(QRect(370, 280, 331, 331));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        GR_KITECH->setFont(font5);
        GR_KITECH->setStyleSheet(QString::fromUtf8(""));
        LE_GRIPPER_CMD = new QLineEdit(GR_KITECH);
        LE_GRIPPER_CMD->setObjectName(QString::fromUtf8("LE_GRIPPER_CMD"));
        LE_GRIPPER_CMD->setGeometry(QRect(10, 30, 221, 20));
        BTN_GRIPPER_CMD_WRITE = new QPushButton(GR_KITECH);
        BTN_GRIPPER_CMD_WRITE->setObjectName(QString::fromUtf8("BTN_GRIPPER_CMD_WRITE"));
        BTN_GRIPPER_CMD_WRITE->setGeometry(QRect(240, 30, 51, 21));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(8);
        BTN_GRIPPER_CMD_WRITE->setFont(font6);
        BTN_GRIPPER_ALLFOLD = new QPushButton(GR_KITECH);
        BTN_GRIPPER_ALLFOLD->setObjectName(QString::fromUtf8("BTN_GRIPPER_ALLFOLD"));
        BTN_GRIPPER_ALLFOLD->setGeometry(QRect(20, 60, 81, 30));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setBold(true);
        font7.setWeight(75);
        BTN_GRIPPER_ALLFOLD->setFont(font7);
        BTN_RB5_CALC_GRAPS_POINT = new QPushButton(GR_KITECH);
        BTN_RB5_CALC_GRAPS_POINT->setObjectName(QString::fromUtf8("BTN_RB5_CALC_GRAPS_POINT"));
        BTN_RB5_CALC_GRAPS_POINT->setGeometry(QRect(190, 200, 89, 51));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Liberation Sans"));
        font8.setPointSize(8);
        BTN_RB5_CALC_GRAPS_POINT->setFont(font8);
        BTN_RB5_MOVE_GRAPS_POINT = new QPushButton(GR_KITECH);
        BTN_RB5_MOVE_GRAPS_POINT->setObjectName(QString::fromUtf8("BTN_RB5_MOVE_GRAPS_POINT"));
        BTN_RB5_MOVE_GRAPS_POINT->setGeometry(QRect(190, 270, 89, 51));
        BTN_RB5_MOVE_GRAPS_POINT->setFont(font8);
        label_121 = new QLabel(GR_KITECH);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setGeometry(QRect(10, 230, 21, 17));
        label_122 = new QLabel(GR_KITECH);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setGeometry(QRect(10, 260, 21, 17));
        label_123 = new QLabel(GR_KITECH);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setGeometry(QRect(10, 200, 16, 17));
        LE_GRAPS_POINT_Z = new QLineEdit(GR_KITECH);
        LE_GRAPS_POINT_Z->setObjectName(QString::fromUtf8("LE_GRAPS_POINT_Z"));
        LE_GRAPS_POINT_Z->setGeometry(QRect(30, 260, 51, 21));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Liberation Sans"));
        font9.setPointSize(9);
        LE_GRAPS_POINT_Z->setFont(font9);
        LE_GRAPS_POINT_Y = new QLineEdit(GR_KITECH);
        LE_GRAPS_POINT_Y->setObjectName(QString::fromUtf8("LE_GRAPS_POINT_Y"));
        LE_GRAPS_POINT_Y->setGeometry(QRect(30, 230, 51, 20));
        LE_GRAPS_POINT_Y->setFont(font9);
        LE_GRAPS_POINT_X = new QLineEdit(GR_KITECH);
        LE_GRAPS_POINT_X->setObjectName(QString::fromUtf8("LE_GRAPS_POINT_X"));
        LE_GRAPS_POINT_X->setGeometry(QRect(30, 200, 51, 20));
        LE_GRAPS_POINT_X->setFont(font9);
        LE_GRAPS_POINT_Rx = new QLineEdit(GR_KITECH);
        LE_GRAPS_POINT_Rx->setObjectName(QString::fromUtf8("LE_GRAPS_POINT_Rx"));
        LE_GRAPS_POINT_Rx->setGeometry(QRect(130, 200, 51, 20));
        LE_GRAPS_POINT_Rz = new QLineEdit(GR_KITECH);
        LE_GRAPS_POINT_Rz->setObjectName(QString::fromUtf8("LE_GRAPS_POINT_Rz"));
        LE_GRAPS_POINT_Rz->setGeometry(QRect(130, 260, 51, 20));
        LE_GRAPS_POINT_Ry = new QLineEdit(GR_KITECH);
        LE_GRAPS_POINT_Ry->setObjectName(QString::fromUtf8("LE_GRAPS_POINT_Ry"));
        LE_GRAPS_POINT_Ry->setGeometry(QRect(130, 230, 51, 20));
        label_124 = new QLabel(GR_KITECH);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setGeometry(QRect(100, 230, 21, 17));
        label_125 = new QLabel(GR_KITECH);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setGeometry(QRect(100, 260, 21, 17));
        label_126 = new QLabel(GR_KITECH);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        label_126->setGeometry(QRect(100, 200, 21, 17));
        BTN_LOAD_GRAPS_POINT = new QPushButton(GR_KITECH);
        BTN_LOAD_GRAPS_POINT->setObjectName(QString::fromUtf8("BTN_LOAD_GRAPS_POINT"));
        BTN_LOAD_GRAPS_POINT->setGeometry(QRect(130, 290, 51, 25));
        BTN_SET_GRAPS_POINT = new QPushButton(GR_KITECH);
        BTN_SET_GRAPS_POINT->setObjectName(QString::fromUtf8("BTN_SET_GRAPS_POINT"));
        BTN_SET_GRAPS_POINT->setGeometry(QRect(70, 290, 51, 25));
        BTN_GRIPPER_VISION = new QPushButton(GR_KITECH);
        BTN_GRIPPER_VISION->setObjectName(QString::fromUtf8("BTN_GRIPPER_VISION"));
        BTN_GRIPPER_VISION->setGeometry(QRect(200, 60, 81, 30));
        BTN_GRIPPER_VISION->setFont(font7);
        label_127 = new QLabel(GR_KITECH);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        label_127->setGeometry(QRect(20, 140, 67, 17));
        label_128 = new QLabel(GR_KITECH);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        label_128->setGeometry(QRect(70, 140, 67, 17));
        label_129 = new QLabel(GR_KITECH);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setGeometry(QRect(110, 140, 67, 17));
        label_130 = new QLabel(GR_KITECH);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        label_130->setGeometry(QRect(160, 140, 67, 17));
        layoutWidget_3 = new QWidget(GR_KITECH);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 100, 180, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        CB_GRIPPER_GRAPS = new QComboBox(layoutWidget_3);
        CB_GRIPPER_GRAPS->addItem(QString());
        CB_GRIPPER_GRAPS->addItem(QString());
        CB_GRIPPER_GRAPS->addItem(QString());
        CB_GRIPPER_GRAPS->addItem(QString());
        CB_GRIPPER_GRAPS->addItem(QString());
        CB_GRIPPER_GRAPS->addItem(QString());
        CB_GRIPPER_GRAPS->setObjectName(QString::fromUtf8("CB_GRIPPER_GRAPS"));

        horizontalLayout_3->addWidget(CB_GRIPPER_GRAPS);

        CB_GRIPPER_POWER = new QComboBox(layoutWidget_3);
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->addItem(QString());
        CB_GRIPPER_POWER->setObjectName(QString::fromUtf8("CB_GRIPPER_POWER"));

        horizontalLayout_3->addWidget(CB_GRIPPER_POWER);

        BTN_GRIPPER_GRASP = new QPushButton(layoutWidget_3);
        BTN_GRIPPER_GRASP->setObjectName(QString::fromUtf8("BTN_GRIPPER_GRASP"));
        BTN_GRIPPER_GRASP->setFont(font7);

        horizontalLayout_3->addWidget(BTN_GRIPPER_GRASP);

        layoutWidget_4 = new QWidget(GR_KITECH);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 160, 264, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        CB_GRIPPER_GE_MODE = new QComboBox(layoutWidget_4);
        CB_GRIPPER_GE_MODE->addItem(QString());
        CB_GRIPPER_GE_MODE->addItem(QString());
        CB_GRIPPER_GE_MODE->setObjectName(QString::fromUtf8("CB_GRIPPER_GE_MODE"));

        horizontalLayout_4->addWidget(CB_GRIPPER_GE_MODE);

        CB_GRIPPER_GE_GRAPS = new QComboBox(layoutWidget_4);
        CB_GRIPPER_GE_GRAPS->addItem(QString());
        CB_GRIPPER_GE_GRAPS->addItem(QString());
        CB_GRIPPER_GE_GRAPS->addItem(QString());
        CB_GRIPPER_GE_GRAPS->addItem(QString());
        CB_GRIPPER_GE_GRAPS->addItem(QString());
        CB_GRIPPER_GE_GRAPS->addItem(QString());
        CB_GRIPPER_GE_GRAPS->setObjectName(QString::fromUtf8("CB_GRIPPER_GE_GRAPS"));

        horizontalLayout_4->addWidget(CB_GRIPPER_GE_GRAPS);

        CB_GRIPPER_GE_POWER = new QComboBox(layoutWidget_4);
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->addItem(QString());
        CB_GRIPPER_GE_POWER->setObjectName(QString::fromUtf8("CB_GRIPPER_GE_POWER"));

        horizontalLayout_4->addWidget(CB_GRIPPER_GE_POWER);

        CB_GRIPPER_GE_SUCTION_POWER = new QComboBox(layoutWidget_4);
        CB_GRIPPER_GE_SUCTION_POWER->addItem(QString());
        CB_GRIPPER_GE_SUCTION_POWER->addItem(QString());
        CB_GRIPPER_GE_SUCTION_POWER->setObjectName(QString::fromUtf8("CB_GRIPPER_GE_SUCTION_POWER"));

        horizontalLayout_4->addWidget(CB_GRIPPER_GE_SUCTION_POWER);

        CB_GRIPPER_GE_CMD_WRITE = new QPushButton(layoutWidget_4);
        CB_GRIPPER_GE_CMD_WRITE->setObjectName(QString::fromUtf8("CB_GRIPPER_GE_CMD_WRITE"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CB_GRIPPER_GE_CMD_WRITE->sizePolicy().hasHeightForWidth());
        CB_GRIPPER_GE_CMD_WRITE->setSizePolicy(sizePolicy);
        CB_GRIPPER_GE_CMD_WRITE->setMinimumSize(QSize(5, 5));
        CB_GRIPPER_GE_CMD_WRITE->setFont(font6);

        horizontalLayout_4->addWidget(CB_GRIPPER_GE_CMD_WRITE);

        Pinch12_FOLD = new QPushButton(GR_KITECH);
        Pinch12_FOLD->setObjectName(QString::fromUtf8("Pinch12_FOLD"));
        Pinch12_FOLD->setGeometry(QRect(210, 100, 111, 30));
        Pinch12_FOLD->setFont(font7);
        LB_KETI_FRAME = new QTextEdit(vison_gripper);
        LB_KETI_FRAME->setObjectName(QString::fromUtf8("LB_KETI_FRAME"));
        LB_KETI_FRAME->setGeometry(QRect(30, 299, 301, 311));
        LB_KETI_FRAME->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-color: black;\n"
"background-color:rgb(255,255,255)"));
        notice_kitech = new QTextEdit(vison_gripper);
        notice_kitech->setObjectName(QString::fromUtf8("notice_kitech"));
        notice_kitech->setGeometry(QRect(370, 120, 301, 151));
        notice_kitech->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-color: black;\n"
"background-color:rgb(255,255,255)"));
        label_131 = new QLabel(vison_gripper);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        label_131->setGeometry(QRect(50, 80, 67, 17));
        le_keti = new QLineEdit(vison_gripper);
        le_keti->setObjectName(QString::fromUtf8("le_keti"));
        le_keti->setGeometry(QRect(90, 70, 31, 31));
        le_keti->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-color: black;"));
        label_132 = new QLabel(vison_gripper);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setGeometry(QRect(30, 120, 301, 151));
        label_132->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-color: black;\n"
"background-color:rgb(255,255,255)"));
        le_kitech = new QLineEdit(vison_gripper);
        le_kitech->setObjectName(QString::fromUtf8("le_kitech"));
        le_kitech->setGeometry(QRect(440, 70, 31, 31));
        le_kitech->setStyleSheet(QString::fromUtf8("    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-color: black;"));
        label_133 = new QLabel(vison_gripper);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setGeometry(QRect(390, 80, 67, 17));
        label_134 = new QLabel(vison_gripper);
        label_134->setObjectName(QString::fromUtf8("label_134"));
        label_134->setGeometry(QRect(30, 20, 251, 41));
        label_134->setTextFormat(Qt::RichText);
        label_135 = new QLabel(vison_gripper);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        label_135->setGeometry(QRect(30, 270, 171, 31));
        label_135->setTextFormat(Qt::RichText);
        BTN_CONNECT_GRIPPER = new QPushButton(vison_gripper);
        BTN_CONNECT_GRIPPER->setObjectName(QString::fromUtf8("BTN_CONNECT_GRIPPER"));
        BTN_CONNECT_GRIPPER->setGeometry(QRect(480, 70, 41, 30));
        BTN_CONNECT_GRIPPER->setFont(font6);
        motor->addTab(vison_gripper, QString());
        barcode = new QWidget();
        barcode->setObjectName(QString::fromUtf8("barcode"));
        label_111 = new QLabel(barcode);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(30, 100, 61, 31));
        label_111->setTextFormat(Qt::RichText);
        label_112 = new QLabel(barcode);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(330, 100, 61, 31));
        label_112->setTextFormat(Qt::RichText);
        cb_usb2 = new QComboBox(barcode);
        cb_usb2->setObjectName(QString::fromUtf8("cb_usb2"));
        cb_usb2->setGeometry(QRect(330, 130, 111, 25));
        write = new QPushButton(barcode);
        write->setObjectName(QString::fromUtf8("write"));
        write->setGeometry(QRect(520, 30, 89, 25));
        te_usb1 = new QTextEdit(barcode);
        te_usb1->setObjectName(QString::fromUtf8("te_usb1"));
        te_usb1->setGeometry(QRect(30, 170, 231, 301));
        layoutWidget_2 = new QWidget(barcode);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(460, 100, 84, 58));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        bt_usb2_con = new QPushButton(layoutWidget_2);
        bt_usb2_con->setObjectName(QString::fromUtf8("bt_usb2_con"));

        verticalLayout_3->addWidget(bt_usb2_con);

        bt_usb2_dis = new QPushButton(layoutWidget_2);
        bt_usb2_dis->setObjectName(QString::fromUtf8("bt_usb2_dis"));

        verticalLayout_3->addWidget(bt_usb2_dis);

        layoutWidget = new QWidget(barcode);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 100, 84, 58));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        bt_usb1_con = new QPushButton(layoutWidget);
        bt_usb1_con->setObjectName(QString::fromUtf8("bt_usb1_con"));

        verticalLayout_4->addWidget(bt_usb1_con);

        bt_usb1_dis = new QPushButton(layoutWidget);
        bt_usb1_dis->setObjectName(QString::fromUtf8("bt_usb1_dis"));

        verticalLayout_4->addWidget(bt_usb1_dis);

        label_113 = new QLabel(barcode);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(30, 20, 311, 31));
        label_113->setTextFormat(Qt::RichText);
        cb_usb1 = new QComboBox(barcode);
        cb_usb1->setObjectName(QString::fromUtf8("cb_usb1"));
        cb_usb1->setGeometry(QRect(30, 130, 111, 25));
        te_usb2 = new QTextEdit(barcode);
        te_usb2->setObjectName(QString::fromUtf8("te_usb2"));
        te_usb2->setGeometry(QRect(330, 170, 231, 301));
        motor->addTab(barcode, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1564, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        motor->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Status", nullptr));
        label->setText(QApplication::translate("MainWindow", "RPM", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "position", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "control", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "   A ", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "RPM (std)", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "temp", nullptr));
        bt_test->setText(QApplication::translate("MainWindow", "test", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Position control", nullptr));
        ch_dir->setText(QApplication::translate("MainWindow", "CCW", nullptr));
        bt_homing->setText(QApplication::translate("MainWindow", "homing", nullptr));
        bt_move_pos->setText(QApplication::translate("MainWindow", "move", nullptr));
        bt_set_maxVel_pos->setText(QApplication::translate("MainWindow", "set", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "RPM", nullptr));
        bt_move_rpm->setText(QApplication::translate("MainWindow", "move", nullptr));
        bt_rpmZero->setText(QApplication::translate("MainWindow", "RPM 0", nullptr));
        bt_connect->setText(QApplication::translate("MainWindow", "connect", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "MD_MOTOR", nullptr));
        motor->setTabText(motor->indexOf(lift_motor), QApplication::translate("MainWindow", "lift motor", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Joint", nullptr));
        BTN_GET_JOINT_AND_TCP->setText(QApplication::translate("MainWindow", "Get Joint and TCP", nullptr));
        GB_NETWORK->setTitle(QApplication::translate("MainWindow", "Network Connection", nullptr));
        LE_IP->setText(QApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Address", nullptr));
        textCmdPort->setText(QApplication::translate("MainWindow", "5000", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Data Port", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Cmd Port", nullptr));
        textDataPort->setText(QApplication::translate("MainWindow", "5001", nullptr));
        BTN_CONNECT_COM->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        BTN_CONNECT_DATA->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        BTN_MOVE_JOINT_VISION->setText(QApplication::translate("MainWindow", "Move joint\n"
"Vision pos", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Cobot Initialize", nullptr));
        BTN_COBOT_INIT->setText(QApplication::translate("MainWindow", "Cobot Init", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "1. Power Set", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "2. Device Set", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "3. System Set", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "4. Robot Init", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Robot Data Viewer", nullptr));
        BTN_CLEAR->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        BTN_GET_JOINT_AND_TCP_VISION->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"VIsion", nullptr));
        BTN_GET_JOINT_AND_TCP_READY_GRIPPER->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"Ready to Gripper", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Base Speed", nullptr));
        BTN_MOTION_RESUME->setText(QApplication::translate("MainWindow", "Motion\n"
"Resume", nullptr));
        BTN_MOVE_JOINT_READY_GRIPPER->setText(QApplication::translate("MainWindow", "Move joint\n"
"Ready to Gripper", nullptr));
        BTN_GET_JOINT_AND_TCP_INIT->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"Init", nullptr));
        BTN_MOTION_HALT->setText(QApplication::translate("MainWindow", "Motion\n"
"Halt", nullptr));
        BTN_MOVE_JOINT_INIT->setText(QApplication::translate("MainWindow", "Move joint\n"
"Init pos", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "TCP", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "D3", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "D12", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "D6", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "D1", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "D13", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "D14", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "D4", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "D2", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "D9", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "D5", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "D8", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "D10", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "D15", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "D11", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "D0", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "D7", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "on", nullptr));
        label_41->setText(QApplication::translate("MainWindow", "off", nullptr));
        label_42->setText(QApplication::translate("MainWindow", "on", nullptr));
        label_43->setText(QApplication::translate("MainWindow", "off", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Joint Encoder", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "J5", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "J6", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "J1", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "J2", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "J4", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "J3", nullptr));
        label_71->setText(QApplication::translate("MainWindow", "A1", nullptr));
        label_74->setText(QApplication::translate("MainWindow", "A0", nullptr));
        label_96->setText(QApplication::translate("MainWindow", "off", nullptr));
        label_82->setText(QApplication::translate("MainWindow", "D1", nullptr));
        label_93->setText(QApplication::translate("MainWindow", "D0", nullptr));
        label_95->setText(QApplication::translate("MainWindow", "on", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "robot state", nullptr));
        label_101->setText(QApplication::translate("MainWindow", "tool out voltage", nullptr));
        LE_PG_MODE_SIMULATION->setText(QApplication::translate("MainWindow", "Simulation", nullptr));
        label_97->setText(QApplication::translate("MainWindow", "off", nullptr));
        label_83->setText(QApplication::translate("MainWindow", "D1", nullptr));
        label_94->setText(QApplication::translate("MainWindow", "D0", nullptr));
        label_98->setText(QApplication::translate("MainWindow", "on", nullptr));
        label_84->setText(QApplication::translate("MainWindow", "status", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "digital out", nullptr));
        label_47->setText(QApplication::translate("MainWindow", "D3", nullptr));
        label_48->setText(QApplication::translate("MainWindow", "D12", nullptr));
        label_49->setText(QApplication::translate("MainWindow", "D6", nullptr));
        label_50->setText(QApplication::translate("MainWindow", "D1", nullptr));
        label_51->setText(QApplication::translate("MainWindow", "D13", nullptr));
        label_52->setText(QApplication::translate("MainWindow", "D14", nullptr));
        label_53->setText(QApplication::translate("MainWindow", "D4", nullptr));
        label_54->setText(QApplication::translate("MainWindow", "D2", nullptr));
        label_55->setText(QApplication::translate("MainWindow", "D9", nullptr));
        label_56->setText(QApplication::translate("MainWindow", "D5", nullptr));
        label_57->setText(QApplication::translate("MainWindow", "D8", nullptr));
        label_58->setText(QApplication::translate("MainWindow", "D10", nullptr));
        label_59->setText(QApplication::translate("MainWindow", "D15", nullptr));
        label_60->setText(QApplication::translate("MainWindow", "D11", nullptr));
        label_61->setText(QApplication::translate("MainWindow", "D0", nullptr));
        label_62->setText(QApplication::translate("MainWindow", "D7", nullptr));
        label_63->setText(QApplication::translate("MainWindow", "on", nullptr));
        label_64->setText(QApplication::translate("MainWindow", "off", nullptr));
        label_65->setText(QApplication::translate("MainWindow", "on", nullptr));
        label_66->setText(QApplication::translate("MainWindow", "off", nullptr));
        label_99->setText(QApplication::translate("MainWindow", "tool digital in", nullptr));
        LE_ROBOT_STATUS_SOS->setText(QApplication::translate("MainWindow", "sos", nullptr));
        LE_ROBOT_STATE_IDLE->setText(QApplication::translate("MainWindow", "Idle", nullptr));
        label_67->setText(QApplication::translate("MainWindow", "digital in", nullptr));
        label_100->setText(QApplication::translate("MainWindow", "tool digital out", nullptr));
        label_68->setText(QApplication::translate("MainWindow", "run mode", nullptr));
        label_69->setText(QApplication::translate("MainWindow", "RY", nullptr));
        label_70->setText(QApplication::translate("MainWindow", "RZ", nullptr));
        label_72->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_73->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_75->setText(QApplication::translate("MainWindow", "RX", nullptr));
        label_76->setText(QApplication::translate("MainWindow", "Z", nullptr));
        LE_ROBOT_STATUS_EMS->setText(QApplication::translate("MainWindow", "ems", nullptr));
        LE_ROBOT_STATE_MOVING->setText(QApplication::translate("MainWindow", "Moving", nullptr));
        LE_ROBOT_STATUS_PAUSED->setText(QApplication::translate("MainWindow", "paused", nullptr));
        label_77->setText(QApplication::translate("MainWindow", "analog in", nullptr));
        label_78->setText(QApplication::translate("MainWindow", "TCP Reference", nullptr));
        LE_ROBOT_STATUS_SELF_COLLISION->setText(QApplication::translate("MainWindow", "self collision", nullptr));
        LE_PG_MODE_REAL->setText(QApplication::translate("MainWindow", "Real", nullptr));
        label_79->setText(QApplication::translate("MainWindow", "A2", nullptr));
        label_80->setText(QApplication::translate("MainWindow", "A1", nullptr));
        label_81->setText(QApplication::translate("MainWindow", "A3", nullptr));
        label_85->setText(QApplication::translate("MainWindow", "A0", nullptr));
        LE_ROBOT_STATUS_EXT_COLLISION->setText(QApplication::translate("MainWindow", "ext. collision", nullptr));
        label_86->setText(QApplication::translate("MainWindow", "Joint Reference", nullptr));
        label_87->setText(QApplication::translate("MainWindow", "analog out", nullptr));
        label_88->setText(QApplication::translate("MainWindow", "tool analog in", nullptr));
        LE_ROBOT_STATUS_TEACHING->setText(QApplication::translate("MainWindow", "teaching", nullptr));
        label_89->setText(QApplication::translate("MainWindow", "A2", nullptr));
        label_90->setText(QApplication::translate("MainWindow", "A1", nullptr));
        label_91->setText(QApplication::translate("MainWindow", "A3", nullptr));
        label_92->setText(QApplication::translate("MainWindow", "A0", nullptr));
        label_102->setText(QApplication::translate("MainWindow", "J5", nullptr));
        label_103->setText(QApplication::translate("MainWindow", "J6", nullptr));
        label_104->setText(QApplication::translate("MainWindow", "J1", nullptr));
        label_105->setText(QApplication::translate("MainWindow", "J2", nullptr));
        label_106->setText(QApplication::translate("MainWindow", "J4", nullptr));
        label_107->setText(QApplication::translate("MainWindow", "J3", nullptr));
        label_108->setText(QApplication::translate("MainWindow", "0V", nullptr));
        label_109->setText(QApplication::translate("MainWindow", "12V", nullptr));
        label_110->setText(QApplication::translate("MainWindow", "24V", nullptr));
        BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"Graps to Gripper", nullptr));
        BTN_COLLISION_RESUME->setText(QApplication::translate("MainWindow", "Collision\n"
"Resume", nullptr));
        BTN_MOTION_PAUSE->setText(QApplication::translate("MainWindow", "Motion\n"
"Pause", nullptr));
        GB_NETWORK_2->setTitle(QApplication::translate("MainWindow", "Mode Change", nullptr));
        BTN_MODE_REAL->setText(QApplication::translate("MainWindow", "Real", nullptr));
        BTN_MODE_SIMULATION->setText(QApplication::translate("MainWindow", "Simulation", nullptr));
        BTN_TEST->setText(QApplication::translate("MainWindow", "Motion Test", nullptr));
        LB_BASE_SPEED->setText(QApplication::translate("MainWindow", "0%", nullptr));
        BTN_MOVE_JOINT_GRAPS_GRIPPER->setText(QApplication::translate("MainWindow", "Move joint\n"
"Graps to Gripper", nullptr));
        label_137->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#729fcf;\">RB_5</span></p><p><br/></p></body></html>", nullptr));
        BTN_MOVE_JOINT_INIT_2->setText(QApplication::translate("MainWindow", "Move joint\n"
"putdown1 pos", nullptr));
        BTN_MOVE_JOINT_INIT_3->setText(QApplication::translate("MainWindow", "Move joint\n"
"putdown2 pos", nullptr));
        BTN_MOVE_JOINT_INIT_4->setText(QApplication::translate("MainWindow", "Move joint\n"
"readyG2pos", nullptr));
        BTN_MOVE_JOINT_INIT_5->setText(QApplication::translate("MainWindow", "Move joint\n"
"G2 pos", nullptr));
        BTN_GET_JOINT_AND_TCP_PD1->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"putdown1", nullptr));
        BTN_GET_JOINT_AND_TCP_PD2->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"putdown2", nullptr));
        BTN_GET_JOINT_AND_TCP_RG2->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"RG2", nullptr));
        BTN_GET_JOINT_AND_TCP_G2->setText(QApplication::translate("MainWindow", "Get Joint and TCP\n"
"G2", nullptr));
        motor->setTabText(motor->indexOf(rb_5), QApplication::translate("MainWindow", "rb_5", nullptr));
        GR_KITECH->setTitle(QApplication::translate("MainWindow", "GRIPPER", nullptr));
        BTN_GRIPPER_CMD_WRITE->setText(QApplication::translate("MainWindow", "Write", nullptr));
        BTN_GRIPPER_ALLFOLD->setText(QApplication::translate("MainWindow", "Grasp", nullptr));
        BTN_RB5_CALC_GRAPS_POINT->setText(QApplication::translate("MainWindow", "calc\n"
"graps point", nullptr));
        BTN_RB5_MOVE_GRAPS_POINT->setText(QApplication::translate("MainWindow", "move\n"
"graps point", nullptr));
        label_121->setText(QApplication::translate("MainWindow", "ty", nullptr));
        label_122->setText(QApplication::translate("MainWindow", "tz", nullptr));
        label_123->setText(QApplication::translate("MainWindow", "tx", nullptr));
        label_124->setText(QApplication::translate("MainWindow", "Ry", nullptr));
        label_125->setText(QApplication::translate("MainWindow", "Rz", nullptr));
        label_126->setText(QApplication::translate("MainWindow", "Rx", nullptr));
        BTN_LOAD_GRAPS_POINT->setText(QApplication::translate("MainWindow", "load.", nullptr));
        BTN_SET_GRAPS_POINT->setText(QApplication::translate("MainWindow", "set.", nullptr));
        BTN_GRIPPER_VISION->setText(QApplication::translate("MainWindow", "Vision", nullptr));
        label_127->setText(QApplication::translate("MainWindow", "Mode", nullptr));
        label_128->setText(QApplication::translate("MainWindow", "Type", nullptr));
        label_129->setText(QApplication::translate("MainWindow", "Value", nullptr));
        label_130->setText(QApplication::translate("MainWindow", "Suction", nullptr));
        CB_GRIPPER_GRAPS->setItemText(0, QApplication::translate("MainWindow", "g", nullptr));
        CB_GRIPPER_GRAPS->setItemText(1, QApplication::translate("MainWindow", "p", nullptr));
        CB_GRIPPER_GRAPS->setItemText(2, QApplication::translate("MainWindow", "m", nullptr));
        CB_GRIPPER_GRAPS->setItemText(3, QApplication::translate("MainWindow", "i", nullptr));
        CB_GRIPPER_GRAPS->setItemText(4, QApplication::translate("MainWindow", "t", nullptr));
        CB_GRIPPER_GRAPS->setItemText(5, QApplication::translate("MainWindow", "e", nullptr));

        CB_GRIPPER_POWER->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        CB_GRIPPER_POWER->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        CB_GRIPPER_POWER->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        CB_GRIPPER_POWER->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));
        CB_GRIPPER_POWER->setItemText(4, QApplication::translate("MainWindow", "4", nullptr));
        CB_GRIPPER_POWER->setItemText(5, QApplication::translate("MainWindow", "5", nullptr));
        CB_GRIPPER_POWER->setItemText(6, QApplication::translate("MainWindow", "6", nullptr));
        CB_GRIPPER_POWER->setItemText(7, QApplication::translate("MainWindow", "7", nullptr));
        CB_GRIPPER_POWER->setItemText(8, QApplication::translate("MainWindow", "8", nullptr));
        CB_GRIPPER_POWER->setItemText(9, QApplication::translate("MainWindow", "9", nullptr));

        BTN_GRIPPER_GRASP->setText(QApplication::translate("MainWindow", "only Grasp", nullptr));
        CB_GRIPPER_GE_MODE->setItemText(0, QApplication::translate("MainWindow", "R", nullptr));
        CB_GRIPPER_GE_MODE->setItemText(1, QApplication::translate("MainWindow", "G", nullptr));

        CB_GRIPPER_GE_GRAPS->setItemText(0, QApplication::translate("MainWindow", "g", nullptr));
        CB_GRIPPER_GE_GRAPS->setItemText(1, QApplication::translate("MainWindow", "p", nullptr));
        CB_GRIPPER_GE_GRAPS->setItemText(2, QApplication::translate("MainWindow", "m", nullptr));
        CB_GRIPPER_GE_GRAPS->setItemText(3, QApplication::translate("MainWindow", "i", nullptr));
        CB_GRIPPER_GE_GRAPS->setItemText(4, QApplication::translate("MainWindow", "t", nullptr));
        CB_GRIPPER_GE_GRAPS->setItemText(5, QApplication::translate("MainWindow", "e", nullptr));

        CB_GRIPPER_GE_POWER->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(4, QApplication::translate("MainWindow", "4", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(5, QApplication::translate("MainWindow", "5", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(6, QApplication::translate("MainWindow", "6", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(7, QApplication::translate("MainWindow", "7", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(8, QApplication::translate("MainWindow", "8", nullptr));
        CB_GRIPPER_GE_POWER->setItemText(9, QApplication::translate("MainWindow", "9", nullptr));

        CB_GRIPPER_GE_SUCTION_POWER->setItemText(0, QApplication::translate("MainWindow", "ON", nullptr));
        CB_GRIPPER_GE_SUCTION_POWER->setItemText(1, QApplication::translate("MainWindow", "OFF", nullptr));

        CB_GRIPPER_GE_CMD_WRITE->setText(QApplication::translate("MainWindow", "Write", nullptr));
        Pinch12_FOLD->setText(QApplication::translate("MainWindow", "Pinch12_FOLD", nullptr));
        label_131->setText(QApplication::translate("MainWindow", "keti", nullptr));
        label_132->setText(QString());
        label_133->setText(QApplication::translate("MainWindow", "kitech", nullptr));
        label_134->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#729fcf;\">vision &amp; gripper</span></p><p><br/></p></body></html>", nullptr));
        label_135->setText(QApplication::translate("MainWindow", "<html><head/><body><p>keti \354\227\220\354\204\234 \353\260\233\354\235\204 \354\230\201\354\203\201 \353\215\260\354\235\264\355\204\260</p></body></html>", nullptr));
        BTN_CONNECT_GRIPPER->setText(QApplication::translate("MainWindow", "conn.", nullptr));
        motor->setTabText(motor->indexOf(vison_gripper), QApplication::translate("MainWindow", "vison_gripper", nullptr));
        label_111->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#888a85;\">left</span></p></body></html>", nullptr));
        label_112->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#888a85;\">right</span></p></body></html>", nullptr));
        write->setText(QApplication::translate("MainWindow", "write", nullptr));
        bt_usb2_con->setText(QApplication::translate("MainWindow", "connect", nullptr));
        bt_usb2_dis->setText(QApplication::translate("MainWindow", "disconnect", nullptr));
        bt_usb1_con->setText(QApplication::translate("MainWindow", "connect", nullptr));
        bt_usb1_dis->setText(QApplication::translate("MainWindow", "disconnect", nullptr));
        label_113->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600; color:#729fcf;\">box barcode reader</span></p></body></html>", nullptr));
        motor->setTabText(motor->indexOf(barcode), QApplication::translate("MainWindow", "barcode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
