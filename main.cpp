#include "mainwindow.h"

#include <QApplication>
#include "md_motor.h"

Q_DECLARE_METATYPE(std::vector<double>)

motor_cmd MD_CMD;

int main(int argc, char *argv[])
{

    qRegisterMetaType<std::vector<double>>();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
