#include "md_motor.h"

MD_MOTOR::MD_MOTOR(QObject *parent) : QObject(parent)
{
    connect(&motor, SIGNAL(readyRead()), this, SLOT(onReadyCmdRead()));
}

void MD_MOTOR::open(QString port)
{
    if(motor.isOpen())
    {
        motor.close();
    }

    motor.setPortName(port);
    motor.setBaudRate(QSerialPort::Baud19200);
    motor.setDataBits(QSerialPort::Data8);
    motor.setStopBits(QSerialPort::OneStop);
    motor.setParity(QSerialPort::NoParity);

    if(!motor.open(QIODevice::ReadWrite))
    {
        std::cout<<"motor connection failed.\n"<<std::endl;
    }
    else
    {
        std::cout<<"motor connection successed.\n"<<std::endl;
        write_log(QString("motor connection successed.\n"));
        usleep(100*100);
        motor.write(MD_CMD.RELEASE_LIMIT_SW);
    }
}

void MD_MOTOR::req_data()
{
    if(!motor.isOpen())
    {
        return;
    }

    motor.write(MD_CMD.REQ_MAIN_DATA);
}

void MD_MOTOR::set_maxVel_pos(unsigned short val)
{
    // PID 176
    QByteArray POSI_MAX_VEL;
    POSI_MAX_VEL.resize(7);
    POSI_MAX_VEL[0] = 0xb7;
    POSI_MAX_VEL[1] = 0xac;
    POSI_MAX_VEL[2] = 0x01;
    POSI_MAX_VEL[3] = 0xb0;
    POSI_MAX_VEL[4] = 0x02;

    memcpy(POSI_MAX_VEL.data() + 5, &val, 2);
    checkSum(POSI_MAX_VEL);
    motor.write(POSI_MAX_VEL);
    qDebug() << POSI_MAX_VEL;
}

void MD_MOTOR::move_position(int val)
{
    if(!motor.isOpen())
    {
        printf("motor not connected.\n");
        return;
    }

    QByteArray move;
    move.resize(9);
    move[0] = 0xb7;
    move[1] = 0xac;
    move[2] = 0x01;
    move[3] = 0xf3;
    move[4] = 0x04;

    memcpy(move.data() + 5, &val, 4);
    checkSum(move);
    motor.write(move);

    QString str = "motor run, POS : " + QString::number(val);
    write_log(str);
}

void MD_MOTOR::move_top_position()
{
    if(!motor.isOpen())
    {
        printf("motor not connected.\n");
        return;
    }
}

void MD_MOTOR::move_mid_position()
{
    if(!motor.isOpen())
    {
        printf("motor not connected.\n");
        return;
    }
}

void MD_MOTOR::move_bot_position()
{
    if(!motor.isOpen())
    {
        printf("motor not connected.\n");
        return;
    }
}

void MD_MOTOR::homing(int dir)
{
    if(!motor.isOpen())
    {
        printf("motor not connected.\n");
        return;
    }

    printf("motor homing.\n");

    if(dir == CCW)
    {
        motor.write(MD_CMD.RELEASE_LIMIT_SW);
        motor.write(MD_CMD.INIT_SET);
        usleep(1000*100);
        motor.write(MD_CMD.INIT_SET_CCW);
    }
    else
    {
        motor.write(MD_CMD.RELEASE_LIMIT_SW);
        motor.write(MD_CMD.INIT_SET);
        usleep(1000*100);
        motor.write(MD_CMD.INIT_SET_CW);
    }
}

void MD_MOTOR::write_data(int pid, int data)
{

}

void MD_MOTOR::onReadyCmdRead()
{
    QByteArray _rev_data = motor.readAll();
    //qDebug() << _rev_data;

    if(_rev_data.size() == 23 && _rev_data[0] == 0xac)
    {
        emit MD_MOTOR::rev_DATA(_rev_data);
    }

    else if(_rev_data.size() == 14 && _rev_data[0] == 0xac)
    {
        emit MD_MOTOR::rev_DATA(_rev_data);
    }

    /*if(init_flag)
    {
        init_flag = false;
        return;
    }

    rev_data_size -= _rev_data.size();
    if(rev_data_size > 0)
    {
        rev_data.append(_rev_data);
    }
    else
    {
        rev_data.append(_rev_data.chopped(_rev_data.size() - rev_data_size));
        int pid = rev_data[3];
        if(pid == PID_MAIN_DATA)
        {
            QByteArray main_data;
            main_data.append(rev_data.data()+5, 17);
            emit MD_MOTOR::rev_DATA(main_data);
        }
        else
        {
            int data_len;
            QByteArray data;
            data.append(rev_data.data()+5, data_len);
            emit MD_MOTOR::rev_DATA(data);
        }
    }*/
}

void MD_MOTOR::checkSum(QByteArray &data)
{
    uchar cs = 0;
    for(int i =0; i<data.size(); ++i)
    {
        cs += *(data.data() + i);
    }
    cs = ~cs;
    cs = cs + 1;
    //qDebug() << cs;
    data.append(cs);
}

void MD_MOTOR::move_rpm(short val)
{
    if(!motor.isOpen())
    {
        write_log(QString("motor not connected."));
        return;
    }

    QByteArray move;
    move.resize(7);
    move[0] = 0xb7;
    move[1] = 0xac;
    move[2] = 0x01;
    move[3] = 0x82;
    move[4] = 0x02;

    memcpy(move.data() + 5, &val, 2);
    checkSum(move);

    //qDebug() << move;
    motor.write(move);
    QString str = "motor run, RPM : " + QString::number(val);
    write_log(str);
}

void MD_MOTOR::test_pid()
{
    motor.write(MD_CMD.RELEASE_LIMIT_SW);
}
