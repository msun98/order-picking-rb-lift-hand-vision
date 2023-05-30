#ifndef BARCODE_H
#define BARCODE_H

#include <QObject>
#include <QHostAddress>
#include <iostream>
#include <QSerialPort>
#include <QSerialPortInfo>

class Barcode: public QObject
{
    Q_OBJECT

public:
    explicit Barcode(QObject *parent = nullptr);

    void bt_usb1_con(QString bar1);
    void bt_usb2_con(QString bar2);

    QSerialPort* m_serialPort1 = nullptr;
    QSerialPort* m_serialPort2 = nullptr;

private slots:
    void readData_1();
    void readData_2();

signals:
    void msgSignal(QByteArray msg);
    void msgSignal2(QByteArray msg);
//    void handleError();
};

#endif // BARCODE_H
