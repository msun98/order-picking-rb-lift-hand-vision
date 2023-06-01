#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QUdpSocket>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtNetwork>
#include <QScrollBar>
#include <QLineEdit>

#include <iostream>

#include "Common_header.h"
#include "option_writer.h"
#include "global_defines.h"
#include "md_motor.h"
#include "keti_vision.h"
#include "kitech_gripper.h"
#include "barcode.h"

////for using linux socket
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <arpa/inet.h>

#include <time.h> //몇 초 후에 값을 주기 위함.

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    systemSTAT  *stat;
    QLineEdit   *le_digital_in_on[16];
    QLineEdit   *le_digital_in_off[16];
    QLineEdit   *le_digital_out_on[16];
    QLineEdit   *le_digital_out_off[16];
    void SetStatus(systemSTAT *input_stat);
    /////////////////////////////////////////////////////////////////////////////

    clock_t start, end;
    double result;

    clock_t start_old, end_old;
    double result_old;

    systemSTAT systemStat;

    Option_Writer settings;

    float Joint_info_now[6];

    QTcpSocket cmdSocket;
    QTcpSocket dataSocket;
    systemCONFIG systemConfig;
    systemPOPUP  systemPopup;

    int cmdConfirmFlag;
    int moveCmdFlag;
    int moveCmdCnt;

    posInfo initPos;
    posInfo visionPos;
    posInfo readyGripperPos;
    posInfo grapsGripperPos;

    posInfo putdown1Pos;
    posInfo putdown2Pos;
    posInfo readyGripper2Pos;
    posInfo grapsGripper2Pos;

    QByteArray recvBuf;
    QTimer timer;

    QTimer logicTimer;
    QTimer systemTimer;

    void print(QString value);

    bool initFlag;
    bool speed_changed = false;

    int Get_RB5_state();
    void CobotInit();
    void MoveJoint(float joint1, float joint2, float joint3, float joint4, float joint5, float joint6, float spd = -1, float acc = -1);
    void MoveTCP(float x, float y, float z, float rx, float ry, float rz, float spd = -1, float acc = -1);
    void MoveCircle_ThreePoint(int type, float x1, float y1, float z1, float rx1, float ry1, float rz1, float x2, float y2, float z2, float rx2, float ry2, float rz2, float spd = -1, float acc = -1);
    void MoveCircle_Axis(int type, float cx, float cy, float cz, float ax, float ay, float az, float rot_angle, float spd, float acc);
    void MoveJointBlend_Clear();
    void MoveJointBlend_AddPoint(float joint1, float joint2, float joint3, float joint4, float joint5, float joint6, float spd = -1, float acc = -1);
    void MoveJointBlend_MovePoint();
    void MoveTCPBlend_Clear();
    void MoveTCPBlend_AddPoint(float radius, float x, float y, float z, float rx, float ry, float rz, float spd = -1, float acc = -1);
    void MoveTCPBlend_MovePoint();
    void ControlBoxDigitalOut(int d0, int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int d10, int d11, int d12, int d13, int d14, int d15);
    void ControlBoxAnalogOut(float a0, float a1, float a2, float a3);
    void ToolOut(int volt, int d0, int d1);
    void ProgramMode_Real();
    void ProgramMode_Simulation();
    void BaseSpeedChange(float spd);
    void MotionPause();
    void MotionHalt();
    void MotionResume();
    void CollisionResume();
    int IsMotionIdle();

    void BTN_GRIPPER_HOLD();


    // -------------------------------------

    ///////////////////////////////////////////////////////////////////////////
    MD_MOTOR md_mot;

    QTimer jog_timer;
    QByteArray buf;

    QTcpServer tcp_server;
    QTcpSocket* tcp_socket;


    Keti_vision vision;
    Kitech_gripper gripper;
    Barcode barcode;


private:
    Ui::MainWindow *ui;
    QTimer  updateTimer;
    QUdpSocket udp_socket;

public slots:
    void onSystemCheck();

    void onReadyCmdRead();
    void onReadyDataRead();
    void requestDataPacket();

    void onCmdConnected();
    void onCmdDisconnected();
    void onDataConnected();
    void onDataDisconnected();

    void onUpdate();

    /////////////////////////

    void keti_showUI_msg(bool connect_flag);
    void kitech_showUI_msg(bool connect_flag);
     void barcode1_showUI_msg(QByteArray msg);
     void barcode2_showUI_msg(QByteArray msg);

    // kitech
    void BTN_GRIPPER_CMD_WRITE();
    void BTN_GRIPPER_ALLFOLD();
    void BTN_GRIPPER_GRASP();
    void BTN_GRIPPER_VISION();
    void CB_GRIPPER_GE_CMD_WRITE();
    void Pinch12_FOLD();
//    void kitech_showUI_msg();

//    void bt_connect();
    void bt_usb1_con();
    void bt_usb2_con();

private slots:

    void bt_connect();
    void bt_test();
    void bt_rpmZero();

    // position control
    void bt_homing();
    void bt_move_pos();
    void bt_set_maxVel_pos();

    // RPM
    void bt_move_rpm();

    // received data
    void rev_data(QByteArray data);
    void write_log(QString str);

//    void connected_seiral();
//    void disconnected_seiral();

    void readyRead_udp();
//    void connected_udp();
//    void disconnected_udp();

    void newConnection_tcp();
    void readyRead_tcp();

    void on_BTN_CONNECT_COM_clicked();
    void on_BTN_CONNECT_DATA_clicked();
    void on_BTN_COBOT_INIT_clicked();
    void on_BTN_MODE_REAL_clicked();
    void on_BTN_MODE_SIMULATION_clicked();
    void on_BTN_CLEAR_clicked();
    void on_BTN_MOTION_PAUSE_clicked();
    void on_BTN_MOTION_RESUME_clicked();
    void on_BTN_MOTION_HALT_clicked();
    void on_BTN_COLLISION_RESUME_clicked();
    void on_BTN_MOVE_JOINT_INIT_clicked();
    void on_BTN_MOVE_JOINT_VISION_clicked();
    void on_BTN_MOVE_JOINT_READY_GRIPPER_clicked();
    void on_BTN_MOVE_JOINT_GRAPS_GRIPPER_clicked();
    void on_BTN_GET_JOINT_AND_TCP_clicked();
    void on_BTN_GET_JOINT_AND_TCP_INIT_clicked();
    void on_BTN_GET_JOINT_AND_TCP_VISION_clicked();
    void on_BTN_GET_JOINT_AND_TCP_READY_GRIPPER_clicked();
    void on_BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER_clicked();
    void on_HS_BASE_SPEED_valueChanged(int value);

    void BTN_CONNECT_GRIPPER();
    void on_BTN_MOVE_JOINT_INIT_2_clicked();
    void on_BTN_MOVE_JOINT_INIT_3_clicked();
    void on_BTN_MOVE_JOINT_INIT_4_clicked();
    void on_BTN_MOVE_JOINT_INIT_5_clicked();
    void on_BTN_GET_JOINT_AND_TCP_PD1_clicked();
    void on_BTN_GET_JOINT_AND_TCP_PD2_clicked();
    void on_BTN_GET_JOINT_AND_TCP_RG2_clicked();
    void on_BTN_GET_JOINT_AND_TCP_G2_clicked();
};
#endif // MAINWINDOW_H
