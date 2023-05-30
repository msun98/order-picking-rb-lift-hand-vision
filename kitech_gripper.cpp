#include "kitech_gripper.h"


Kitech_gripper::Kitech_gripper(QObject *parent) : QObject(parent)
{
//    Kitech_Client = new QTcpSocket();

//    IP_GRIPPER.ip = "192.168.1.151";
//    IP_GRIPPER.port = 7788;
//    connect(Kitech_Client, SIGNAL(connected()), this, SLOT(onKitechConnected()));
//    connect(this, SIGNAL(Gripper_Connect()), this, SLOT(msgSignal(bool connect_flag)));

}



void Kitech_gripper::Gripper_Connect()
{
//    if(!Integrated_info.init_gripper)
//    {
//        Kitech_Client->connectToHost(QHostAddress(IP_GRIPPER.ip), IP_GRIPPER.port);
//        connect(Kitech_Client, SIGNAL(readyRead()), this, SLOT(onReadyCmdRead()));
//        connect_flag = true;
//        write_log(Integrated_info, "[Gripper] Server conneting...\n");
//    }

//    qDebug()<<"ddddd";
    sockaddr_in server_addr;
    bzero((char*)&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr("192.168.1.151");
    server_addr.sin_port = htons(7788);

    // connection
    tmp_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(tmp_fd < 0)
    {
        printf("socket create failed\n");
        return;
    }

    int status = ::connect(tmp_fd, (sockaddr*)&server_addr, sizeof(server_addr));
    if(status < 0)
    {
        qDebug()<<"socket connection failed\n";
        onKitechdisConnected();
//        connect(Kitech_Client, SIGNAL(disconnected()), this, SLOT(onKitechdisConnected()));
//        emit msgSignal(connect_flag);
        return;
    }

    qDebug()<<"socket connected\n";
    onKitechConnected();
//    emit msgSignal(connect_flag);
//    connect(Kitech_Client, SIGNAL(disconnected()), this, SLOT(onKitechdisConnected()));

//    connect(Kitech_Client, SIGNAL(connected()), this, SLOT(onKitechConnected()));
}

void Kitech_gripper::onReadyCmdRead()
{
//    QByteArray Read_Data = Kitech_Client->readAll();
//    Integrated_info.kitech_res = QString(Read_Data);
}

void Kitech_gripper::onKitechConnected()
{
//    qDebug()<<"ddddwwwwwwwwww";
    Integrated_info.init_gripper = true;
    connect_flag = true;
//        qDebug()<<"ddddwwwwwwwwww"<<connect_flag;
    emit msgSignal(connect_flag);
    write_log(Integrated_info, "[Gripper] Server connected.\n");
}

void Kitech_gripper::onKitechdisConnected()
{
    Integrated_info.init_gripper = false;
    connect_flag = false;
    emit msgSignal(connect_flag);
    write_log(Integrated_info, "[Gripper] Server disconnected.\n");
}

void Kitech_gripper::write_log(Integrated_infomation& Ii, const QString& text)
{
    Ii.Log_info.append(text);
    emit SIGNAL_LOG_WRITE();
}

