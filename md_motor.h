#ifndef MD_MOTOR_H
#define MD_MOTOR_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QtDebug>

#include <iostream>

#include "global_defines.h"

class MD_MOTOR : public QObject
{
    Q_OBJECT
public:
    explicit MD_MOTOR(QObject *parent = nullptr);

    QSerialPort motor;

    bool init_flag = true;
    int rev_data_size = 0;
    QByteArray rev_data;

    void open(QString port);
    void req_data();
    void test_pid();

    void set_maxVel_pos(unsigned short val);

    void move_rpm(short val);

    void move_position(int val);
    void move_top_position();
    void move_mid_position();
    void move_bot_position();

    void homing(int dir);
    void write_data(int pid, int data);

    void checkSum(QByteArray &data);

signals:
    void rev_DATA(QByteArray data);
    void write_log(QString str);

private slots:
    void onReadyCmdRead();
};

#endif // MD_MOTOR_H
