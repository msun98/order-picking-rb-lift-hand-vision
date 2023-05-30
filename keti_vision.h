#ifndef KETI_VISION_H
#define KETI_VISION_H

#include <QObject>
#include <QTcpSocket>
#include <QByteArray>
#include <QHostAddress>

#include <opencv2/imgcodecs.hpp>

#include "Common_header.h"
#include "option_writer.h"

class Keti_vision : public QObject
{
    Q_OBJECT

public:
    explicit Keti_vision(QObject *parent = nullptr);

    Option_Writer settings;

    bool connect_flag = false;

    ipInfo IP_VISION;
    QTcpSocket *Keti_Client;

    int X, Y, Z;

    void write_log(Integrated_infomation& Ii, const QString& text);

    void saveEstimated_GrapsPoints(const QString& path);
    void loadEstimated_GrapsPoints(const QString& path);
    void Vision_Connect();

signals:
    void SIGNAL_LOG_WRITE();

    void msgSignal(bool connect_flag);

public slots:
    void onReadyCmdRead();

    void onKetiConnected();

    void onKetidisConnected();

};

#endif // KETI_VISION_H
