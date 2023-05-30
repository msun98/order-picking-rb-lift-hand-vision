#pragma once

#include <QByteArray>
#include <QString>
#include <QTcpSocket>

#include <unistd.h>
#include <iostream>

#define MAX_MC              6
#define RT_TIMER_PERIOD_MS  2
#define COMMAND_CANID           0x01

enum DIR
{
    CW = 0,
    CCW = 1
};

enum PID
{
    PID_MAIN_DATA = 193

};

struct motor_cmd
{
    // init motor
    QByteArray REQ_MAIN_DATA;       // PID 193

    QByteArray RELEASE_LIMIT_SW;    // PID 17

    // set motor (homing)
    QByteArray INIT_SET;            // PID 183
    QByteArray INIT_SET_CCW;        // PID 35
    QByteArray INIT_SET_CW;         // PID 35

    // set motor
    QByteArray POSI_MAX_VEL; // PID176

    // move motor
    QByteArray MOVE_TOP; // PID243
    QByteArray MOVE_MID; // PID243
    QByteArray MOVE_BOT; // PID243

    motor_cmd()
    {
        // PID_REQ_PID_DATA
        REQ_MAIN_DATA.resize(7);
        REQ_MAIN_DATA[0] = 0xb7;
        REQ_MAIN_DATA[1] = 0xac;
        REQ_MAIN_DATA[2] = 0x01;
        REQ_MAIN_DATA[3] = 0x04; // PID 4
        REQ_MAIN_DATA[4] = 0x01;
        REQ_MAIN_DATA[5] = 0xc1;
        REQ_MAIN_DATA[6] = 0xd6;

        // PID_FUNC_CMD_TYPE (for homing)
        INIT_SET.resize(8);
        INIT_SET[0] = 0xb7;
        INIT_SET[1] = 0xac;
        INIT_SET[2] = 0x01;
        INIT_SET[3] = 0xb7; // PID 183
        INIT_SET[4] = 0x02;
        INIT_SET[5] = 0x03;
        INIT_SET[6] = 0x00;
        INIT_SET[7] = 0xe0;

        // PID_INIT_SET
        INIT_SET_CW.resize(7);
        INIT_SET_CW[0] = 0xb7;
        INIT_SET_CW[1] = 0xac;
        INIT_SET_CW[2] = 0x01;
        INIT_SET_CW[3] = 0x23; // PID 35
        INIT_SET_CW[4] = 0x01;
        INIT_SET_CW[5] = 0x02; // 0x01 : CCW(+), 0x02 : CW(-)
        INIT_SET_CW[6] = 0x76;

        // PID_INIT_SET
        INIT_SET_CCW.resize(7);
        INIT_SET_CCW[0] = 0xb7;
        INIT_SET_CCW[1] = 0xac;
        INIT_SET_CCW[2] = 0x01;
        INIT_SET_CCW[3] = 0x23; // PID 35
        INIT_SET_CCW[4] = 0x01;
        INIT_SET_CCW[5] = 0x01; // 0x01 : CCW(+), 0x02 : CW(-)
        INIT_SET_CCW[6] = 0x77;

        // PID_USE_LIMIT_SW
        RELEASE_LIMIT_SW.resize(7);
        RELEASE_LIMIT_SW[0] = 0xb7;
        RELEASE_LIMIT_SW[1] = 0xac;
        RELEASE_LIMIT_SW[2] = 0x01;
        RELEASE_LIMIT_SW[3] = 0x11; // PID 17
        RELEASE_LIMIT_SW[4] = 0x01;
        RELEASE_LIMIT_SW[5] = 0x00; // limit clear
        RELEASE_LIMIT_SW[6] = 0x8a;

        // POSI_CMD (not encoder, hall sensor)
        MOVE_TOP.resize(10);
        MOVE_TOP[0] = 0xb7;
        MOVE_TOP[1] = 0xac;
        MOVE_TOP[2] = 0x01;
        MOVE_TOP[3] = 0xf3; // PID 243
        MOVE_TOP[4] = 0x04;
        MOVE_TOP[5] = 0xa0; // DATA0 (little endian)
        MOVE_TOP[6] = 0x0f; //
        MOVE_TOP[7] = 0x00; //
        MOVE_TOP[8] = 0x00; // DATA3 -> 4000
        MOVE_TOP[9] = 0xf6;

        MOVE_MID.resize(10);
        MOVE_MID[0] = 0xb7;
        MOVE_MID[1] = 0xac;
        MOVE_MID[2] = 0x01;
        MOVE_MID[3] = 0xf3; // PID 243
        MOVE_MID[4] = 0x04;
        MOVE_MID[5] = 0xd0; // DATA0 (little endian)
        MOVE_MID[6] = 0x07; //
        MOVE_MID[7] = 0x00; //
        MOVE_MID[8] = 0x00; // DATA3 -> 2000
        MOVE_MID[9] = 0xce;

        MOVE_BOT.resize(10);
        MOVE_BOT[0] = 0xb7;
        MOVE_BOT[1] = 0xac;
        MOVE_BOT[2] = 0x01;
        MOVE_BOT[3] = 0xf3; // PID 243
        MOVE_BOT[4] = 0x04;
        MOVE_BOT[5] = 0x00; // DATA0 (little endian)
        MOVE_BOT[6] = 0x00; //
        MOVE_BOT[7] = 0x00; //
        MOVE_BOT[8] = 0x00; // DATA3 -> 0
        MOVE_BOT[9] = 0xa5;
    }


};
extern motor_cmd MD_CMD;

