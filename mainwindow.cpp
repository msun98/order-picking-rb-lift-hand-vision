#include "mainwindow.h"
#include "ui_mainwindow.h"
Integrated_infomation Integrated_info;//헤더 클래스 사용한다고 선언.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    le_digital_in_on[0]  = ui->LE_D_IN_ON_0;
    le_digital_in_on[1]  = ui->LE_D_IN_ON_1;
    le_digital_in_on[2]  = ui->LE_D_IN_ON_2;
    le_digital_in_on[3]  = ui->LE_D_IN_ON_3;
    le_digital_in_on[4]  = ui->LE_D_IN_ON_4;
    le_digital_in_on[5]  = ui->LE_D_IN_ON_5;
    le_digital_in_on[6]  = ui->LE_D_IN_ON_6;
    le_digital_in_on[7]  = ui->LE_D_IN_ON_7;
    le_digital_in_on[8]  = ui->LE_D_IN_ON_8;
    le_digital_in_on[9]  = ui->LE_D_IN_ON_9;
    le_digital_in_on[10] = ui->LE_D_IN_ON_10;
    le_digital_in_on[11] = ui->LE_D_IN_ON_11;
    le_digital_in_on[12] = ui->LE_D_IN_ON_12;
    le_digital_in_on[13] = ui->LE_D_IN_ON_13;
    le_digital_in_on[14] = ui->LE_D_IN_ON_14;
    le_digital_in_on[15] = ui->LE_D_IN_ON_15;

    le_digital_in_off[0]  = ui->LE_D_IN_OFF_0;
    le_digital_in_off[1]  = ui->LE_D_IN_OFF_1;
    le_digital_in_off[2]  = ui->LE_D_IN_OFF_2;
    le_digital_in_off[3]  = ui->LE_D_IN_OFF_3;
    le_digital_in_off[4]  = ui->LE_D_IN_OFF_4;
    le_digital_in_off[5]  = ui->LE_D_IN_OFF_5;
    le_digital_in_off[6]  = ui->LE_D_IN_OFF_6;
    le_digital_in_off[7]  = ui->LE_D_IN_OFF_7;
    le_digital_in_off[8]  = ui->LE_D_IN_OFF_8;
    le_digital_in_off[9]  = ui->LE_D_IN_OFF_9;
    le_digital_in_off[10] = ui->LE_D_IN_OFF_10;
    le_digital_in_off[11] = ui->LE_D_IN_OFF_11;
    le_digital_in_off[12] = ui->LE_D_IN_OFF_12;
    le_digital_in_off[13] = ui->LE_D_IN_OFF_13;
    le_digital_in_off[14] = ui->LE_D_IN_OFF_14;
    le_digital_in_off[15] = ui->LE_D_IN_OFF_15;

    le_digital_out_on[0]  = ui->LE_D_OUT_ON_0;
    le_digital_out_on[1]  = ui->LE_D_OUT_ON_1;
    le_digital_out_on[2]  = ui->LE_D_OUT_ON_2;
    le_digital_out_on[3]  = ui->LE_D_OUT_ON_3;
    le_digital_out_on[4]  = ui->LE_D_OUT_ON_4;
    le_digital_out_on[5]  = ui->LE_D_OUT_ON_5;
    le_digital_out_on[6]  = ui->LE_D_OUT_ON_6;
    le_digital_out_on[7]  = ui->LE_D_OUT_ON_7;
    le_digital_out_on[8]  = ui->LE_D_OUT_ON_8;
    le_digital_out_on[9]  = ui->LE_D_OUT_ON_9;
    le_digital_out_on[10] = ui->LE_D_OUT_ON_10;
    le_digital_out_on[11] = ui->LE_D_OUT_ON_11;
    le_digital_out_on[12] = ui->LE_D_OUT_ON_12;
    le_digital_out_on[13] = ui->LE_D_OUT_ON_13;
    le_digital_out_on[14] = ui->LE_D_OUT_ON_14;
    le_digital_out_on[15] = ui->LE_D_OUT_ON_15;

    le_digital_out_off[0]  = ui->LE_D_OUT_OFF_0;
    le_digital_out_off[1]  = ui->LE_D_OUT_OFF_1;
    le_digital_out_off[2]  = ui->LE_D_OUT_OFF_2;
    le_digital_out_off[3]  = ui->LE_D_OUT_OFF_3;
    le_digital_out_off[4]  = ui->LE_D_OUT_OFF_4;
    le_digital_out_off[5]  = ui->LE_D_OUT_OFF_5;
    le_digital_out_off[6]  = ui->LE_D_OUT_OFF_6;
    le_digital_out_off[7]  = ui->LE_D_OUT_OFF_7;
    le_digital_out_off[8]  = ui->LE_D_OUT_OFF_8;
    le_digital_out_off[9]  = ui->LE_D_OUT_OFF_9;
    le_digital_out_off[10] = ui->LE_D_OUT_OFF_10;
    le_digital_out_off[11] = ui->LE_D_OUT_OFF_11;
    le_digital_out_off[12] = ui->LE_D_OUT_OFF_12;
    le_digital_out_off[13] = ui->LE_D_OUT_OFF_13;
    le_digital_out_off[14] = ui->LE_D_OUT_OFF_14;
    le_digital_out_off[15] = ui->LE_D_OUT_OFF_15;
    connect(&updateTimer, SIGNAL(timeout()), this, SLOT(onUpdate()));
    updateTimer.start(100);
    ///////////////////////////////////////////////////
    //ui->LE_IP->setText("10.0.2.7");
    //ui->LE_IP->setText("127.0.0.1");

    ui->LE_IP->setText("192.168.1.100");

    initFlag = false;
    cmdConfirmFlag = false;
    moveCmdFlag = false;
    moveCmdCnt = 0;


    memset(&systemStat, 0, sizeof(systemSTAT));
    systemStat.sdata.program_mode = -1;
    systemStat.sdata.robot_state = -1;

    SetStatus(&systemStat);
    connect(&timer, SIGNAL(timeout()), this, SLOT(requestDataPacket()));


    connect(&cmdSocket, SIGNAL(connected()), this, SLOT(onCmdConnected()));
    connect(&cmdSocket, SIGNAL(disconnected()), this, SLOT(onCmdDisconnected()));
    connect(&dataSocket, SIGNAL(connected()), this, SLOT(onDataConnected()));
    connect(&dataSocket, SIGNAL(disconnected()), this, SLOT(onDataDisconnected()));

    //connect(ui->BTN_CONNECT_COM, SIGNAL(clicked()), this, SLOT(on_BTN_CONNECT_COM_clicked()));
    connect(&systemTimer, SIGNAL(timeout()), this, SLOT(onSystemCheck()));
    systemTimer.start(100);

    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_INIT.json", initPos);
    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_VISION.json", visionPos);
    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_Gripper_ready.json", readyGripperPos);
    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_Gripper_graps.json", grapsGripperPos);

    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_putdown1.json", putdown1Pos);
    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_putdown2.json", putdown2Pos);
    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_pickingReady2.json", readyGripper2Pos);
    settings.ReadSettingFile("/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_picking2.json", grapsGripper2Pos);

    ////////////////////////////////////////////////////////////////////////////////
    connect(ui->bt_connect, SIGNAL(clicked()), this, SLOT(bt_connect()));
    connect(ui->bt_test, SIGNAL(clicked()), this, SLOT(bt_test()));

    // position control
    connect(ui->bt_homing, SIGNAL(clicked()), this, SLOT(bt_homing()));
    connect(ui->bt_move_pos, SIGNAL(clicked()), this, SLOT(bt_move_pos()));
    connect(ui->bt_set_maxVel_pos, SIGNAL(clicked()), this, SLOT(bt_set_maxVel_pos()));

    // RPM
    connect(ui->bt_move_rpm, SIGNAL(clicked()), this, SLOT(bt_move_rpm()));
    connect(ui->bt_rpmZero, SIGNAL(clicked()), this, SLOT(bt_rpmZero()));

    connect(&md_mot, SIGNAL(rev_DATA(QByteArray)), this, SLOT(rev_data(QByteArray)));
    connect(&md_mot, SIGNAL(write_log(QString)), this, SLOT(write_log(QString)));

    //connect(&udp_socket, SIGNAL(readyRead()), this, SLOT(readyRead_udp()));
    connect(&udp_socket, SIGNAL(connected()), this, SLOT(connected_udp()));
    connect(&udp_socket, SIGNAL(disconnected()), this, SLOT(disconnected_udp()));

    // tcp
    bool flag = tcp_server.listen(QHostAddress(QString("192.168.1.123")), 1978);
    std::cout << flag << std::endl;
    connect(&tcp_server, SIGNAL(newConnection()), this, SLOT(newConnection_tcp()));

    udp_socket.bind(QHostAddress(QString("10.108.1.52")), 4444);//ordroid go for lift(jog controll lift)

    QString lift_port;
    //    QString port = QString("ttyUSB0");
    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts())
    {
        bool lift = port.portName().contains("USB", Qt::CaseInsensitive);//이름이 바코드로 정해놓은 것만 들어오도록
        if (lift)
        {
            ui->cb_port->addItem(port.portName());
            lift_port = port.portName();
        }

        bool bar = port.portName().contains("ACM", Qt::CaseInsensitive);//이름이 바코드로 정해놓은 것만 들어오도록
        if (bar)
        {

            //barcode on
        //    qDebug()<<"eeeee : "<<ui->cb_usb1->currentText();
        //    ui->cb_usb_1->currentText();
//            barcode.bt_usb1_con(port);
            ui->cb_usb1->addItem(port.portName());
            ui->cb_usb2->addItem(port.portName());
        }
    }

//    QString port = ui->cb_port->currentText();

//    barcode.bt_usb1_con(ui->cb_usb1->currentText());
    connect(ui->BTN_CONNECT_GRIPPER, SIGNAL(clicked()), this, SLOT(BTN_CONNECT_GRIPPER()));
    //ui on -> ketich communication on!
    // rb_5 , lift
    //순서문제로 인한 불 안들어옴....
    connect(&gripper, SIGNAL(msgSignal(bool)), this, SLOT(kitech_showUI_msg(bool)));

    if(gripper.connect_flag == false)
    {
        gripper.Gripper_Connect();
    }

//    kitech_showUI_msg();
//    qDebug()<<gripper.connect_flag;
    connect(&gripper, SIGNAL(msgSignal(bool)), this, SLOT(kitech_showUI_msg(bool)));

    qDebug() << "RB5 : cmd_connect_process";
    cmdSocket.connectToHost(QHostAddress(ui->LE_IP->text()), ui->textCmdPort->text().toInt());
    connect(&cmdSocket, SIGNAL(readyRead()), this, SLOT(onReadyCmdRead()));

    // connect
    dataSocket.connectToHost(QHostAddress(ui->LE_IP->text()), ui->textDataPort->text().toInt());
    connect(&dataSocket, SIGNAL(readyRead()), this, SLOT(onReadyDataRead()));
    timer.start(20);

    CobotInit();
    initFlag = true;

    if(lift_port.size() != 0)
    {
//         connect(ui->bt_connect, SIGNAL(clicked()), this, SLOT(bt_connect()));
        md_mot.open(lift_port);
        ui->bt_connect->setEnabled(false);
    }

    connect(ui->BTN_GRIPPER_CMD_WRITE, SIGNAL(clicked()), this, SLOT(BTN_GRIPPER_CMD_WRITE()));
    connect(ui->BTN_GRIPPER_ALLFOLD, SIGNAL(clicked()), this, SLOT(BTN_GRIPPER_ALLFOLD()));
    connect(ui->BTN_GRIPPER_GRASP, SIGNAL(clicked()), this, SLOT(BTN_GRIPPER_GRASP()));
    connect(ui->BTN_GRIPPER_VISION, SIGNAL(clicked()), this, SLOT(BTN_GRIPPER_VISION()));
    connect(ui->CB_GRIPPER_GE_CMD_WRITE, SIGNAL(clicked()), this, SLOT(CB_GRIPPER_GE_CMD_WRITE()));

    connect(ui->Pinch12_FOLD, SIGNAL(clicked()), this, SLOT(Pinch12_FOLD()));

    connect(ui->bt_usb1_con, SIGNAL(clicked()), this, SLOT(bt_usb1_con()));
    connect(ui->bt_usb2_con, SIGNAL(clicked()), this, SLOT(bt_usb2_con()));

    connect(&barcode, SIGNAL(msgSignal(QByteArray)), this, SLOT(barcode1_showUI_msg(QByteArray)));
    connect(&barcode, SIGNAL(msgSignal2(QByteArray)), this, SLOT(barcode2_showUI_msg(QByteArray)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::SetStatus(systemSTAT *input_stat){
    stat = input_stat;
}

int MainWindow::Get_RB5_state()
{
    return stat->sdata.robot_state;
}

void MainWindow::onUpdate(){
    if(stat->sdata.program_mode == 0){
        ui->LE_PG_MODE_REAL->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_PG_MODE_SIMULATION->setStyleSheet("QLineEdit{background-color:white}");
    }else if(stat->sdata.program_mode == 1){
        ui->LE_PG_MODE_REAL->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_PG_MODE_SIMULATION->setStyleSheet("QLineEdit{background-color:green}");
    }else{
        ui->LE_PG_MODE_REAL->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_PG_MODE_SIMULATION->setStyleSheet("QLineEdit{background-color:white}");
    }

    if(stat->sdata.robot_state == 1){
        ui->LE_ROBOT_STATE_IDLE->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_ROBOT_STATE_MOVING->setStyleSheet("QLineEdit{background-color:white}");
    }else if(stat->sdata.robot_state == 2){
        ui->LE_ROBOT_STATE_IDLE->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_ROBOT_STATE_MOVING->setStyleSheet("QLineEdit{background-color:white}");
    }else if(stat->sdata.robot_state == 3){
        ui->LE_ROBOT_STATE_IDLE->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_ROBOT_STATE_MOVING->setStyleSheet("QLineEdit{background-color:green}");
    }else{
        ui->LE_ROBOT_STATE_IDLE->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_ROBOT_STATE_MOVING->setStyleSheet("QLineEdit{background-color:white}");
    }


    if(stat->sdata.is_freedrive_mode == 1){
        ui->LE_ROBOT_STATUS_TEACHING->setStyleSheet("QLineEdit{background-color:green}");
    }else{
        ui->LE_ROBOT_STATUS_TEACHING->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.op_stat_collision_occur == 1){
        ui->LE_ROBOT_STATUS_EXT_COLLISION->setStyleSheet("QLineEdit{background-color:red}");
    }else{
        ui->LE_ROBOT_STATUS_EXT_COLLISION->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.op_stat_self_collision == 1){
        ui->LE_ROBOT_STATUS_SELF_COLLISION->setStyleSheet("QLineEdit{background-color:red}");
    }else{
        ui->LE_ROBOT_STATUS_SELF_COLLISION->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.op_stat_soft_estop_occur == 1){
        ui->LE_ROBOT_STATUS_PAUSED->setStyleSheet("QLineEdit{background-color:red}");
    }else{
        ui->LE_ROBOT_STATUS_PAUSED->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.op_stat_ems_flag != 0){
        ui->LE_ROBOT_STATUS_EMS->setStyleSheet("QLineEdit{background-color:red}");
    }else{
        ui->LE_ROBOT_STATUS_EMS->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.op_stat_sos_flag == 1){
        ui->LE_ROBOT_STATUS_SOS->setStyleSheet("QLineEdit{background-color:red}");
    }else{
        ui->LE_ROBOT_STATUS_SOS->setStyleSheet("QLineEdit{background-color:white}");
    }


    ui->LE_JNT_ENC_1->setText(QString().sprintf("%.3f", stat->sdata.jnt_ang[0]));
    ui->LE_JNT_ENC_2->setText(QString().sprintf("%.3f", stat->sdata.jnt_ang[1]));
    ui->LE_JNT_ENC_3->setText(QString().sprintf("%.3f", stat->sdata.jnt_ang[2]));
    ui->LE_JNT_ENC_4->setText(QString().sprintf("%.3f", stat->sdata.jnt_ang[3]));
    ui->LE_JNT_ENC_5->setText(QString().sprintf("%.3f", stat->sdata.jnt_ang[4]));
    ui->LE_JNT_ENC_6->setText(QString().sprintf("%.3f", stat->sdata.jnt_ang[5]));

    ui->LE_JNT_REF_1->setText(QString().sprintf("%.3f", stat->sdata.jnt_ref[0]));
    ui->LE_JNT_REF_2->setText(QString().sprintf("%.3f", stat->sdata.jnt_ref[1]));
    ui->LE_JNT_REF_3->setText(QString().sprintf("%.3f", stat->sdata.jnt_ref[2]));
    ui->LE_JNT_REF_4->setText(QString().sprintf("%.3f", stat->sdata.jnt_ref[3]));
    ui->LE_JNT_REF_5->setText(QString().sprintf("%.3f", stat->sdata.jnt_ref[4]));
    ui->LE_JNT_REF_6->setText(QString().sprintf("%.3f", stat->sdata.jnt_ref[5]));

    ui->LE_TCP_REF_X->setText(QString().sprintf("%.3f", stat->sdata.tcp_ref[0]));
    ui->LE_TCP_REF_Y->setText(QString().sprintf("%.3f", stat->sdata.tcp_ref[1]));
    ui->LE_TCP_REF_Z->setText(QString().sprintf("%.3f", stat->sdata.tcp_ref[2]));
    ui->LE_TCP_REF_RX->setText(QString().sprintf("%.3f", stat->sdata.tcp_ref[3]));
    ui->LE_TCP_REF_RY->setText(QString().sprintf("%.3f", stat->sdata.tcp_ref[4]));
    ui->LE_TCP_REF_RZ->setText(QString().sprintf("%.3f", stat->sdata.tcp_ref[5]));


    for(int i=0; i<16; i++){
        if(stat->sdata.digital_in[i] == 0){
            le_digital_in_off[i]->setStyleSheet("QLineEdit{background-color:green}");
            le_digital_in_on[i]->setStyleSheet("QLineEdit{background-color:white}");
        }else if(stat->sdata.digital_in[i] == 1){
            le_digital_in_off[i]->setStyleSheet("QLineEdit{background-color:white}");
            le_digital_in_on[i]->setStyleSheet("QLineEdit{background-color:green}");
        }else{
            le_digital_in_off[i]->setStyleSheet("QLineEdit{background-color:white}");
            le_digital_in_on[i]->setStyleSheet("QLineEdit{background-color:white}");
        }

        if(stat->sdata.digital_out[i] == 0){
            le_digital_out_off[i]->setStyleSheet("QLineEdit{background-color:green}");
            le_digital_out_on[i]->setStyleSheet("QLineEdit{background-color:white}");
        }else if(stat->sdata.digital_out[i] == 1){
            le_digital_out_off[i]->setStyleSheet("QLineEdit{background-color:white}");
            le_digital_out_on[i]->setStyleSheet("QLineEdit{background-color:green}");
        }else{
            le_digital_out_off[i]->setStyleSheet("QLineEdit{background-color:white}");
            le_digital_out_on[i]->setStyleSheet("QLineEdit{background-color:white}");
        }
    }

    ui->LE_A_IN_0->setText(QString().sprintf("%.3f", stat->sdata.analog_in[0]));
    ui->LE_A_IN_1->setText(QString().sprintf("%.3f", stat->sdata.analog_in[1]));
    ui->LE_A_IN_2->setText(QString().sprintf("%.3f", stat->sdata.analog_in[2]));
    ui->LE_A_IN_3->setText(QString().sprintf("%.3f", stat->sdata.analog_in[3]));

    ui->LE_A_OUT_0->setText(QString().sprintf("%.3f", stat->sdata.analog_out[0]));
    ui->LE_A_OUT_1->setText(QString().sprintf("%.3f", stat->sdata.analog_out[1]));
    ui->LE_A_OUT_2->setText(QString().sprintf("%.3f", stat->sdata.analog_out[2]));
    ui->LE_A_OUT_3->setText(QString().sprintf("%.3f", stat->sdata.analog_out[3]));



    if(fabs(stat->sdata.tfb_voltage_out) < 0.01){
        ui->LE_TV_0->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_TV_12->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TV_24->setStyleSheet("QLineEdit{background-color:white}");
    }else if(fabs(stat->sdata.tfb_voltage_out-12.0) < 0.01){
        ui->LE_TV_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TV_12->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_TV_24->setStyleSheet("QLineEdit{background-color:white}");
    }else if(fabs(stat->sdata.tfb_voltage_out-24.0) < 0.01){
        ui->LE_TV_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TV_12->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TV_24->setStyleSheet("QLineEdit{background-color:green}");
    }else{
        ui->LE_TV_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TV_12->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TV_24->setStyleSheet("QLineEdit{background-color:white}");
    }


    if(stat->sdata.tfb_digital_out[0] == 0){
        ui->LE_TD_OUT_ON_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_OUT_OFF_0->setStyleSheet("QLineEdit{background-color:green}");
    }else if(stat->sdata.tfb_digital_out[0] == 1){
        ui->LE_TD_OUT_ON_0->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_TD_OUT_OFF_0->setStyleSheet("QLineEdit{background-color:white}");
    }else{
        ui->LE_TD_OUT_ON_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_OUT_OFF_0->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.tfb_digital_out[1] == 0){
        ui->LE_TD_OUT_ON_1->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_OUT_OFF_1->setStyleSheet("QLineEdit{background-color:green}");
    }else if(stat->sdata.tfb_digital_out[1] == 1){
        ui->LE_TD_OUT_ON_1->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_TD_OUT_OFF_1->setStyleSheet("QLineEdit{background-color:white}");
    }else{
        ui->LE_TD_OUT_ON_1->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_OUT_OFF_1->setStyleSheet("QLineEdit{background-color:white}");
    }


    if(stat->sdata.tfb_digital_in[0] == 0){
        ui->LE_TD_IN_ON_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_IN_OFF_0->setStyleSheet("QLineEdit{background-color:green}");
    }else if(stat->sdata.tfb_digital_in[0] == 1){
        ui->LE_TD_IN_ON_0->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_TD_IN_OFF_0->setStyleSheet("QLineEdit{background-color:white}");
    }else{
        ui->LE_TD_IN_ON_0->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_IN_OFF_0->setStyleSheet("QLineEdit{background-color:white}");
    }
    if(stat->sdata.tfb_digital_in[1] == 0){
        ui->LE_TD_IN_ON_1->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_IN_OFF_1->setStyleSheet("QLineEdit{background-color:green}");
    }else if(stat->sdata.tfb_digital_in[1] == 1){
        ui->LE_TD_IN_ON_1->setStyleSheet("QLineEdit{background-color:green}");
        ui->LE_TD_IN_OFF_1->setStyleSheet("QLineEdit{background-color:white}");
    }else{
        ui->LE_TD_IN_ON_1->setStyleSheet("QLineEdit{background-color:white}");
        ui->LE_TD_IN_OFF_1->setStyleSheet("QLineEdit{background-color:white}");
    }


    ui->LE_TA_IN_0->setText(QString().sprintf("%.3f", stat->sdata.tfb_analog_in[0]));
    ui->LE_TA_IN_1->setText(QString().sprintf("%.3f", stat->sdata.tfb_analog_in[1]));

}

void MainWindow::newConnection_tcp()
{
    QTcpSocket *clientSocket = tcp_server.nextPendingConnection();
    connect(clientSocket, SIGNAL(readyRead()), this, SLOT(readyRead_tcp()));

}

void MainWindow::readyRead_tcp()
{
    QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray data = sender->readAll();

    if(data[0] == char(0x01))
    {
        printf("data is 0x01\n");
        md_mot.move_position(3000);
    }
    else if(data[0] == char(0x02))
    {
        printf("data is 0x02\n");
        md_mot.move_position(1500);
    }
    else if(data[0] == char(0x03))
    {
        printf("data is 0x03\n");
        md_mot.move_position(100);
        BTN_GRIPPER_VISION();
    }
    else if(data[0] == char(0x04))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move pickingReady1\n");
            MoveJoint(readyGripperPos._joint_1, readyGripperPos._joint_2 , readyGripperPos._joint_3 , readyGripperPos._joint_4, readyGripperPos._joint_5, readyGripperPos._joint_6, -1, -1);
            //            BTN_GRIPPER_VISION();
        }
        printf("data is 0x04\n");
    }
    else if(data[0] == char(0x05))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move picking1\n");
            MoveJoint(grapsGripperPos._joint_1, grapsGripperPos._joint_2 , grapsGripperPos._joint_3 , grapsGripperPos._joint_4, grapsGripperPos._joint_5, grapsGripperPos._joint_6, -1, -1);
            BTN_GRIPPER_ALLFOLD();
        }
        printf("data is 0x05\n");
    }


    else if(data[0] == char(0x06))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move putdown1\n");
            MoveJoint(putdown1Pos._joint_1, putdown1Pos._joint_2 , putdown1Pos._joint_3 , putdown1Pos._joint_4, putdown1Pos._joint_5, putdown1Pos._joint_6, -1, -1);
            //            BTN_GRIPPER_VISION();

        }
        printf("data is 0x06\n");
    }
    else if(data[0] == char(0x07))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move putdown2\n");
            MoveJoint(putdown2Pos._joint_1, putdown2Pos._joint_2 , putdown2Pos._joint_3 , putdown2Pos._joint_4, putdown2Pos._joint_5, putdown2Pos._joint_6, -1, -1);
            //            BTN_GRIPPER_VISION();
            Pinch12_FOLD();
        }
        printf("data is 0x07\n");
    }
    else if(data[0] == char(0x08))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move readyGripper2Pos\n");
            MoveJoint(readyGripper2Pos._joint_1, readyGripper2Pos._joint_2 , readyGripper2Pos._joint_3 , readyGripper2Pos._joint_4, readyGripper2Pos._joint_5, readyGripper2Pos._joint_6, -1, -1);
        }
        printf("data is 0x08\n");
    }
    else if(data[0] == char(0x09))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move grapsGripper2Pos\n");
            MoveJoint(grapsGripper2Pos._joint_1, grapsGripper2Pos._joint_2 , grapsGripper2Pos._joint_3 , grapsGripper2Pos._joint_4, grapsGripper2Pos._joint_5, grapsGripper2Pos._joint_6, -1, -1);
            //            BTN_GRIPPER_VISION();
        }
        printf("data is 0x09\n");
    }

    else if(data[0] == char(0x10))
    {
        if(systemStat.sdata.robot_state == 1)
        {
            printf("move init\n");
            MoveJoint(initPos._joint_1, initPos._joint_2 , initPos._joint_3 , initPos._joint_4, initPos._joint_5, initPos._joint_6, -1, -1);
            //            BTN_GRIPPER_VISION();
        }
        printf("data is 0x10\n");
    }
}


//void MainWindow::connected_seiral()
//{
////    jog_timer.start(100);
//}

//void MainWindow::disconnected_seiral()
//{
////    jog_timer.stop();
//}

//void MainWindow::connected_udp()
//{
//    //jog_timer.stop();
//}

//void MainWindow::disconnected_udp()
//{
//    //jog_timer.stop();
//}

void MainWindow::readyRead_udp()
{
    if(udp_socket.hasPendingDatagrams())
    {
        QByteArray _buf;
        _buf.resize(udp_socket.pendingDatagramSize());

        QHostAddress sender; quint16 senderPort;
        udp_socket.readDatagram(_buf.data(), _buf.size(), &sender, &senderPort);

        if(_buf.size() > 0)
        {
            buf.append(_buf);

            if(buf.size() < 2)
            {
                return;
            }

            bool is_header = false;
            for(int p = 0; p < buf.size()-1; p++)
            {
                // header check
                if(buf[p] == (char)0xFF && buf[p+1] == (char)0xFD)
                {
                    buf.remove(0, p);
                    is_header = true;
                    break;
                }
            }

            // 11 3*4 +8 20 25
            const int packet_size = 28;
            if(is_header && buf.size() >= packet_size)
            {
                if(buf[packet_size-2] == (char)0x01 && buf[packet_size-1] == (char)0x02)
                {
                    uchar* body = (uchar*)buf.data();
                    // body parsing
                    //uchar id = body[2];
                    float lx, ly, rx, ry; uint8_t btn[8];

                    memcpy(&lx, &body[2], 4);
                    memcpy(&ly, &body[6], 4);
                    memcpy(&rx, &body[10], 4);
                    memcpy(&ry, &body[14], 4);
                    memcpy(&btn, &body[18], 8);

                    // remove current packet
                    buf.remove(0, packet_size);

                    if(btn[6] == 1)
                    {
                        md_mot.move_rpm(1000);
                    }
                    else if(btn[7] == 1)
                    {
                        md_mot.move_rpm(-1000);
                    }
                    else if(btn[6] == 0 && btn[7] == 0)
                    {
                        md_mot.move_rpm(0);
                    }
                }
            }
        }
    }
}

void MainWindow::bt_connect()
{
    QString port = ui->cb_port->currentText();
    if(port.size() != 0)
    {
        md_mot.open(port);
    }
}

void MainWindow::bt_homing()
{
    if(!md_mot.motor.isOpen())
    {
        printf("motor not connect.\n");
        return;
    }

    if(ui->ch_dir->isChecked())
    {
        md_mot.homing(CCW);
    }
    else
    {
        md_mot.homing(CW);
    }

}

void MainWindow::bt_move_pos()
{
    int pos = ui->sb_move_pos->value();
    md_mot.move_position(pos);
}

void MainWindow::bt_rpmZero()
{
    md_mot.move_rpm(0);
}

void MainWindow::bt_set_maxVel_pos()
{
    int vel = ui->sb_max_vel_pos->value();
    md_mot.set_maxVel_pos(vel);
}

void MainWindow::bt_move_rpm()
{
    int rpm = ui->sb_rpm->value();
    md_mot.move_rpm(rpm);
}

void MainWindow::rev_data(QByteArray data)
{
    if(data.size() == 23)
    {
        // qDebug() << data;
        short rpm;
        memcpy(&rpm, data.data() + 5, 2);
        ui->le_rpm->setText(QString::number(rpm));

        short armp = 0;
        memcpy(&armp, data.data() + 7, 2);
        ui->le_armp->setText(QString::number(armp));
        qDebug() << armp;

        short controlType = 0;
        memcpy(&controlType, data.data() + 9, 1);
        if(controlType == 0)
        {
            ui->le_controlType->setText(QString("stop"));
        }
        else if(controlType == 1)
        {
            ui->le_controlType->setText(QString("speed"));
        }
        else if(controlType == 2)
        {
            ui->le_controlType->setText(QString("posi"));
        }
        else if(controlType == 3)
        {
            ui->le_controlType->setText(QString("open loop"));
        }
        else if(controlType == 4)
        {
            ui->le_controlType->setText(QString("tq"));
        }

        short rpmStd;
        memcpy(&rpmStd, data.data() + 10, 2);
        ui->le_rpmStd->setText(QString::number(rpmStd));

        int pos;
        memcpy(&pos, data.data() + 15, 4);
        ui->le_pos->setText(QString::number(pos));

        int temp = 0;
        memcpy(&temp, data.data() + 20, 1);
        ui->le_temp->setText(QString::number(temp));
    }
}

void MainWindow::bt_test()
{
    md_mot.test_pid();
}


void MainWindow::write_log(QString str)
{
    ui->te_data->append(str);
}

void MainWindow::onSystemCheck()
{
    // base speed change
    //qDebug() << "************** " << systemStat.sdata.robot_state ;

    Joint_info_now[0] = systemStat.sdata.jnt_ang[0];
    Joint_info_now[1] = systemStat.sdata.jnt_ang[1];
    Joint_info_now[2] = systemStat.sdata.jnt_ang[2];
    Joint_info_now[3] = systemStat.sdata.jnt_ang[3];
    Joint_info_now[4] = systemStat.sdata.jnt_ang[4];
    Joint_info_now[5] = systemStat.sdata.jnt_ang[5];

    float spd = (float)ui->HS_BASE_SPEED->value()/100.0;
    if(fabs(spd - systemStat.sdata.default_speed) > 0.005)
    {
        if(speed_changed == true)
        {
            // value changed
            BaseSpeedChange(spd);
            speed_changed = false;
        }
        else
        {
            float spd = systemStat.sdata.default_speed;
            ui->HS_BASE_SPEED->setValue(spd*100);
        }
    }


    // check initialize status
    if(initFlag == true)
    {
        int init_info = systemStat.sdata.init_state_info;
        switch(init_info)
        {
        case INIT_STAT_INFO_VOLTAGE_CHECK:
            ui->LE_INIT_POWER->setStyleSheet("QLineEdit{background-color:yellow}");
            ui->LE_INIT_DEVICE->setStyleSheet("QLineEdit{background-color:red}");
            ui->LE_INIT_SYSTEM->setStyleSheet("QLineEdit{background-color:red}");
            ui->LE_INIT_ROBOT->setStyleSheet("QLineEdit{background-color:red}");
            break;
        case INIT_STAT_INFO_DEVICE_CHECK:
            ui->LE_INIT_POWER->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_DEVICE->setStyleSheet("QLineEdit{background-color:yellow}");
            ui->LE_INIT_SYSTEM->setStyleSheet("QLineEdit{background-color:red}");
            ui->LE_INIT_ROBOT->setStyleSheet("QLineEdit{background-color:red}");
            break;
        case INIT_STAT_INFO_FIND_HOME:
            ui->LE_INIT_POWER->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_DEVICE->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_SYSTEM->setStyleSheet("QLineEdit{background-color:yellow}");
            ui->LE_INIT_ROBOT->setStyleSheet("QLineEdit{background-color:red}");
            break;
        case INIT_STAT_INFO_VARIABLE_CHECK:
            ui->LE_INIT_POWER->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_DEVICE->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_SYSTEM->setStyleSheet("QLineEdit{background-color:yellow}");
            ui->LE_INIT_ROBOT->setStyleSheet("QLineEdit{background-color:red}");
            break;
        case INIT_STAT_INFO_COLLISION_ON:
            ui->LE_INIT_POWER->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_DEVICE->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_SYSTEM->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_ROBOT->setStyleSheet("QLineEdit{background-color:yellow}");
            break;
        case INIT_STAT_INFO_INIT_DONE:
            ui->LE_INIT_POWER->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_DEVICE->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_SYSTEM->setStyleSheet("QLineEdit{background-color:green}");
            ui->LE_INIT_ROBOT->setStyleSheet("QLineEdit{background-color:green}");
            initFlag = false;
            break;
        case INIT_STAT_INFO_NOACT:
        default:
            break;
        }
    }
}

int MainWindow::IsMotionIdle()
{
    return ((cmdConfirmFlag == true) && (systemStat.sdata.robot_state == 1));
}


void MainWindow::CobotInit()
{
    QString text;
    text.sprintf("mc jall init");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::ProgramMode_Real()
{
    QString text;
    text.sprintf("pgmode real");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::ProgramMode_Simulation()
{
    QString text;
    text.sprintf("pgmode simulation");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::MoveJoint(float joint1, float joint2, float joint3, float joint4, float joint5, float joint6, float spd, float acc)
{
    QString text;
    text.sprintf("jointall %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", spd, acc, joint1, joint2, joint3, joint4, joint5, joint6);
    moveCmdFlag = true;
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3; //run
}
void MainWindow::MoveTCP(float x, float y, float z, float rx, float ry, float rz, float spd, float acc)
{
    QString text;
    text.sprintf("movetcp %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", spd, acc, x, y, z, rx, ry, rz);
    moveCmdFlag = true;
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3; //run
}
void MainWindow::MoveCircle_ThreePoint(int type, float x1, float y1, float z1, float rx1, float ry1, float rz1, float x2, float y2, float z2, float rx2, float ry2, float rz2, float spd, float acc)
{
    QString text;
    char buf[15];
    if(type == 0)
    {
        sprintf(buf, "intended");
    }
    else if(type == 1)
    {
        sprintf(buf, "constant");
    }
    else if(type == 2)
    {
        sprintf(buf, "radial");
    }
    text.sprintf("movecircle threepoints %s %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                 buf, spd, acc, x1, y1, z1, rx1, ry1, rz1, x2, y2, z2, rx2, ry2, rz2);
    moveCmdFlag = true;
    cmdConfirmFlag =false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3;
}
void MainWindow::MoveCircle_Axis(int type, float cx, float cy, float cz, float ax, float ay, float az, float rot_angle, float spd, float acc)
{
    QString text;
    char buf[15];
    if(type == 0)
    {
        sprintf(buf, "intended");
    }
    else if(type == 1)
    {
        sprintf(buf, "constant");
    }
    else if(type == 2)
    {
        sprintf(buf, "radial");
    }
    text.sprintf("movecircle axis %s %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                 buf, spd, acc, rot_angle, cx, cy, cz, ax, ay, az);
    moveCmdFlag = true;
    cmdConfirmFlag =false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3;
}
void MainWindow::MoveJointBlend_Clear()
{
    QString text;
    text.sprintf("blend_jnt clear_pt");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::MoveJointBlend_AddPoint(float joint1, float joint2, float joint3, float joint4, float joint5, float joint6, float spd, float acc)
{
    QString text;
    text.sprintf("blend_jnt add_pt %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", spd, acc, joint1, joint2, joint3, joint4, joint5, joint6);
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3; //run
}
void MainWindow::MoveJointBlend_MovePoint()
{
    QString text;
    text.sprintf("blend_jnt move_pt");
    moveCmdFlag = true;
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3;
}
void MainWindow::MoveTCPBlend_Clear()
{
    QString text;
    text.sprintf("blend_tcp clear_pt");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::MoveTCPBlend_AddPoint(float radius, float x, float y, float z, float rx, float ry, float rz, float spd, float acc)
{
    QString text;
    text.sprintf("blend_tcp add_pt %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", spd, acc, radius, x, y, z, rx, ry, rz);
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3; //run
}
void MainWindow::MoveTCPBlend_MovePoint()
{
    QString text;
    text.sprintf("blend_tcp move_pt");
    moveCmdFlag = true;
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
    systemStat.sdata.robot_state = 3;
}
void MainWindow::ControlBoxDigitalOut(int d0, int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int d10, int d11, int d12, int d13, int d14, int d15)
{
    QString text;
    text.sprintf("digital_out %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15);
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::ControlBoxAnalogOut(float a0, float a1, float a2, float a3)
{
    QString text;
    text.sprintf("analog_out %.3f, %.3f, %.3f, %.3f", a0, a1, a2, a3);
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::ToolOut(int volt, int d0, int d1)
{
    int temp_volt = volt;
    if((temp_volt != 12) && (temp_volt != 24))
    {
        temp_volt = 0;
    }

    QString text;
    text.sprintf("tool_out %d, %d, %d", temp_volt, d0, d1);
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::BaseSpeedChange(float spd)
{
    QString text;
    if(spd > 1.0)
    {
        spd = 1.0;
    }
    if(spd < 0.0)
    {
        spd = 0.0;
    }
    text.sprintf("sdw default_speed %.3f", spd);
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::MotionPause()
{
    QString text;
    text.sprintf("task pause");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::MotionHalt()
{
    QString text;
    text.sprintf("task stop");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::MotionResume()
{
    QString text;
    text.sprintf("task resume_a");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}
void MainWindow::CollisionResume()
{
    QString text;
    text.sprintf("task resume_b");
    cmdConfirmFlag = false;
    cmdSocket.write(text.toStdString().c_str(), text.toStdString().length());
}


// connect & disconnect ------------------
void MainWindow::onCmdConnected()
{
    ui->BTN_CONNECT_COM->setText("Disconnect");
}
void MainWindow::onCmdDisconnected()
{
    ui->BTN_CONNECT_COM->setText("Connect");
}
void MainWindow::onDataConnected()
{
    ui->BTN_CONNECT_DATA->setText("Disconnect");
}
void MainWindow::onDataDisconnected()
{
    ui->BTN_CONNECT_DATA->setText("Connect");
}
// ---------------------------------------


void MainWindow::onReadyCmdRead()
{
    QByteArray datas = cmdSocket.readAll();
    //qDebug() << "start!";

    if(QString(datas.data()).compare("The command was executed\n") == 0)
    {
        qDebug() << "The command was executed.";
        cmdConfirmFlag = true;
        if(moveCmdFlag == true)
        {
            moveCmdCnt = 5;
            systemStat.sdata.robot_state = 3;
            moveCmdFlag = false;
        }
    }
    else
    {
        print(QString::fromLocal8Bit(datas.data(),datas.length()));
    }
}
void MainWindow::print(QString value)
{
    QString str = ui->textPrint->toPlainText();
    ui->textPrint->setText(str+value);
    QScrollBar *sb = ui->textPrint->verticalScrollBar();
    sb->setValue(sb->maximum());
}
void MainWindow::onReadyDataRead()
{

    QByteArray datas = dataSocket.readAll();
    recvBuf +=datas;

    while(recvBuf.length() > 4 )
    {
        if( recvBuf[0] == '$')
        {
            int size = ((int)((unsigned char)recvBuf[2]<<8)|(int)((unsigned char)recvBuf[1]));
            if(size <= recvBuf.length() )
            {
                int templen = recvBuf.length();
                if(3 == recvBuf[3])
                {
                    if(moveCmdCnt > 0)
                    {
                        moveCmdCnt--;
                    }
                    else
                    {
                        memcpy(&systemStat,recvBuf.data(),sizeof(systemSTAT));
                    }
                    recvBuf.remove(0,sizeof(systemSTAT));
                    //qDebug() << "***************** robot_state " <<  systemStat.sdata.robot_state ;
                    //                    float spd = systemStat.sdata.default_speed;
                    //                    ui->HS_BASE_SPEED->setValue(spd*100);
                    //                    ui->LB_BASE_SPEED->setText(QString().sprintf("%.1f%%", spd*100.0));

                    //                    char buf[256];
                    //                    sprintf(buf, "stat: %d, %d, %d", size, templen, sizeof(systemSTAT));
                    //                    sprintf(buf, "pgmode, movecnt: %d, %d\n", systemStat.sdata.program_mode, moveCmdCnt);
                    //                    print(buf);
                    //                    print("systemStat Data Received\n");

                }
                else if(4 == recvBuf[3])
                {
                    memcpy(&systemConfig,recvBuf.data(),sizeof(systemCONFIG));
                    recvBuf.remove(0,sizeof(systemCONFIG));
                    QString str = ui->textPrint->toPlainText();

                    //   print("systemConfig Data Received\n");

                }
                else if(10 == recvBuf[3])
                {
                    memcpy(&systemPopup,recvBuf.data(),sizeof(systemPOPUP));
                    recvBuf.remove(0,sizeof(systemPOPUP));

                    //  print("systemPopup Data Received\n");
                }
                else
                {
                    recvBuf.remove(0,1);
                }

            }

        }
        else
        {
            recvBuf.remove(0,1);
        }
    }


}

void MainWindow::requestDataPacket()
{
    //dataSocket.write("regcfg");
    dataSocket.write("reqdata");
}



void MainWindow::on_BTN_CONNECT_COM_clicked()
{
    if(ui->BTN_CONNECT_COM->text() == "Connect")
    {
        // connect
        qDebug() << "RB5 : cmd_connect_process";
        cmdSocket.connectToHost(QHostAddress(ui->LE_IP->text()), ui->textCmdPort->text().toInt());
        connect(&cmdSocket, SIGNAL(readyRead()), this, SLOT(onReadyCmdRead()));
    }
    else
    {
        // disconnect
        cmdSocket.close();
    }
}

void MainWindow::on_BTN_CONNECT_DATA_clicked()
{
    if(ui->BTN_CONNECT_DATA->text() == "Connect")
    {
        // connect
        dataSocket.connectToHost(QHostAddress(ui->LE_IP->text()), ui->textDataPort->text().toInt());
        connect(&dataSocket, SIGNAL(readyRead()), this, SLOT(onReadyDataRead()));
        timer.start(20);
    }
    else
    {
        // disconnect
        timer.stop();
        dataSocket.close();
    }
}

void MainWindow::on_BTN_COBOT_INIT_clicked()
{
    CobotInit();
    initFlag = true;
}

void MainWindow::on_BTN_MODE_REAL_clicked()
{
    ProgramMode_Real();
}

void MainWindow::on_BTN_MODE_SIMULATION_clicked()
{
    ProgramMode_Simulation();
}

void MainWindow::on_BTN_CLEAR_clicked()
{
    ui->textPrint->clear();
}

void MainWindow::on_HS_BASE_SPEED_valueChanged(int value)
{
    float spd = (float)value/100.0;
    ui->LB_BASE_SPEED->setText(QString().sprintf("%.1f%%", spd*100.0));
    speed_changed = true;
}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    posInfo so;

    so._joint_1 = systemStat.sdata.jnt_ref[0];
    so._joint_2 = systemStat.sdata.jnt_ref[1];
    so._joint_3 = systemStat.sdata.jnt_ref[2];
    so._joint_4 = systemStat.sdata.jnt_ref[3];
    so._joint_5 = systemStat.sdata.jnt_ref[4];
    so._joint_6 = systemStat.sdata.jnt_ref[5];
    so._acc = -1;
    so._spd = -1;

    std::string path = "setting_RB5.json";
    settings.WriteSettingFile(path, so);


    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));
}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_INIT_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    initPos._joint_1 = systemStat.sdata.jnt_ref[0];
    initPos._joint_2 = systemStat.sdata.jnt_ref[1];
    initPos._joint_3 = systemStat.sdata.jnt_ref[2];
    initPos._joint_4 = systemStat.sdata.jnt_ref[3];
    initPos._joint_5 = systemStat.sdata.jnt_ref[4];
    initPos._joint_6 = systemStat.sdata.jnt_ref[5];
    initPos._acc = -1;
    initPos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_INIT.json";
    settings.WriteSettingFile(path, initPos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));
}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_VISION_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    visionPos._joint_1 = systemStat.sdata.jnt_ref[0];
    visionPos._joint_2 = systemStat.sdata.jnt_ref[1];
    visionPos._joint_3 = systemStat.sdata.jnt_ref[2];
    visionPos._joint_4 = systemStat.sdata.jnt_ref[3];
    visionPos._joint_5 = systemStat.sdata.jnt_ref[4];
    visionPos._joint_6 = systemStat.sdata.jnt_ref[5];
    visionPos._acc = -1;
    visionPos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_VISION.json";
    settings.WriteSettingFile(path, visionPos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_READY_GRIPPER_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    readyGripperPos._joint_1 = systemStat.sdata.jnt_ref[0];
    readyGripperPos._joint_2 = systemStat.sdata.jnt_ref[1];
    readyGripperPos._joint_3 = systemStat.sdata.jnt_ref[2];
    readyGripperPos._joint_4 = systemStat.sdata.jnt_ref[3];
    readyGripperPos._joint_5 = systemStat.sdata.jnt_ref[4];
    readyGripperPos._joint_6 = systemStat.sdata.jnt_ref[5];
    readyGripperPos._acc = -1;
    readyGripperPos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_Gripper_ready.json";
    settings.WriteSettingFile(path, readyGripperPos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_GRAPS_GRIPPER_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    grapsGripperPos._joint_1 = systemStat.sdata.jnt_ref[0];
    grapsGripperPos._joint_2 = systemStat.sdata.jnt_ref[1];
    grapsGripperPos._joint_3 = systemStat.sdata.jnt_ref[2];
    grapsGripperPos._joint_4 = systemStat.sdata.jnt_ref[3];
    grapsGripperPos._joint_5 = systemStat.sdata.jnt_ref[4];
    grapsGripperPos._joint_6 = systemStat.sdata.jnt_ref[5];
    grapsGripperPos._acc = -1;
    grapsGripperPos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_Gripper_graps.json";
    settings.WriteSettingFile(path, grapsGripperPos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}

void MainWindow::on_BTN_MOVE_JOINT_INIT_clicked()
{
    MoveJoint(initPos._joint_1, initPos._joint_2 , initPos._joint_3 , initPos._joint_4, initPos._joint_5, initPos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOVE_JOINT_VISION_clicked()
{
    qDebug() << visionPos._joint_1;
    MoveJoint(visionPos._joint_1, visionPos._joint_2 , visionPos._joint_3 , visionPos._joint_4, visionPos._joint_5, visionPos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOVE_JOINT_READY_GRIPPER_clicked()
{
    MoveJoint(readyGripperPos._joint_1, readyGripperPos._joint_2, readyGripperPos._joint_3, readyGripperPos._joint_4,  readyGripperPos._joint_5, readyGripperPos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOVE_JOINT_GRAPS_GRIPPER_clicked()
{
    MoveJoint(grapsGripperPos._joint_1, grapsGripperPos._joint_2, grapsGripperPos._joint_3, grapsGripperPos._joint_4, grapsGripperPos._joint_5, grapsGripperPos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOTION_PAUSE_clicked()
{
    MotionPause();
}

void MainWindow::on_BTN_MOTION_RESUME_clicked()
{
    MotionResume();
}

void MainWindow::on_BTN_MOTION_HALT_clicked()
{
    MotionHalt();
}

void MainWindow::on_BTN_COLLISION_RESUME_clicked()
{
    CollisionResume();
}
////////////////////////////////////////////////////////////////

void MainWindow::keti_showUI_msg(bool connect_flag)
{
    if (connect_flag==true)
    {
        ui->le_keti->setStyleSheet("background-color:green");
        qDebug()<<"green";
    }

    else
    {
        ui->le_kitech->setStyleSheet("background-color:red");
    }
}

void MainWindow::kitech_showUI_msg(bool connect_flag)
{
    qDebug()<<"hi";
    if (connect_flag==true)
    {

        ui->le_kitech->setStyleSheet("background-color:green");
    }

    else
    {
        ui->le_kitech->setStyleSheet("background-color:red");
    }
}


void MainWindow::BTN_GRIPPER_CMD_WRITE()
{
    // all cmd write in hand
    if(Integrated_info.init_gripper == true)
    {
        auto text = ui->LE_GRIPPER_CMD->text();
        qDebug()<<text;
        std::string msg = text.toUtf8().constData();

        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);
        QString Log = "[Gripper] cmd : " + text;
        QByteArray br = text.toUtf8();

        //        _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
//        gripper.Kitech_Client->write(br);
    }
    else
    {
        //        _log.PrintLog("Not connected KITECH yet.", ui->TE_GLOBAL_LOG, "red", true);
    }
}

void MainWindow::BTN_GRIPPER_HOLD()
{

    // preset unfold(gripper ready) pos cmd
    if(Integrated_info.init_gripper == true)
    {
        QString text("Rg0");
        qDebug()<<text;
        std::string msg = text.toUtf8().constData();
        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);

        QByteArray br1 = text.toUtf8();
//        gripper.Kitech_Client->write(br1);
    }
}

void MainWindow::BTN_GRIPPER_ALLFOLD()
{

    // preset unfold(gripper ready) pos cmd
    if(Integrated_info.init_gripper == true)
    {
        BTN_GRIPPER_HOLD();
//        gripper.Kitech_Client->flush();//
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        QString text("Rm9");
         qDebug()<<text;
        std::string msg = text.toUtf8().constData();
        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);

//        start_old = clock(); // 시간 측정 시작
//        bool flag_old = true;

//        //        qDebug()<<"start"<<start;

//        while(flag_old)
//        {

//            if(result_old>1000000)
//            {
//                //                Pinch12_FOLD();
//                QString text("Rm9");
//                qDebug()<<text;
//                QString Log = "[Gripper] cmd : " + text;
//                QByteArray br = text.toUtf8();

//                //            _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
////                gripper.Kitech_Client->write(br);

////                gripper.Kitech_Client->flush();//
//                flag_old = false;
//            }
//            end_old = clock(); // 시간 측정 끝
//            result_old = double(end_old-start_old);

//        }
//        start = clock(); // 시간 측정 시작
//        bool flag = true;

//        //        qDebug()<<"start"<<start;

//        while(flag)
//        {

//            if(result>300)
//            {
//                QString text("Gg9");
//                qDebug()<<text;
//                QString Log = "[Gripper] cmd : " + text;
//                QByteArray br = text.toUtf8();

//                //            _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
////                gripper.Kitech_Client->write(br);
//                flag = false;
//            }
//            end = clock(); // 시간 측정 끝
//            result = double(end-start);
//        }

    }
    else
    {
        //        _log.PrintLog("Not connected KITECH yet.", ui->TE_GLOBAL_LOG, "red", true);
    }
}

void MainWindow::Pinch12_FOLD()
{

    // preset unfold(gripper ready) pos cmd
    if(Integrated_info.init_gripper == true)
    {
        QString text("Gi9");
        qDebug()<<text;
        std::string msg = text.toUtf8().constData();

        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);
        QString Log = "[Gripper] cmd : " + text;
//        QByteArray br = text.toUtf8();

        //        _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
//        gripper.Kitech_Client->write(br);
    }
    else
    {
//                _log.PrintLog("Not connected KITECH yet.", ui->TE_GLOBAL_LOG, "red", true);
    }
}


void MainWindow::BTN_GRIPPER_GRASP()
{
    // preset graps pos cmd in free grapMode & power
    if(Integrated_info.init_gripper == true)
    {
        QString grap = ui->CB_GRIPPER_GRAPS->currentText();
        QString powe = ui->CB_GRIPPER_POWER->currentText();

        QString text = "G" + grap + powe ;
//        QByteArray data = text.toLocal8Bit();
        std::string msg = text.toUtf8().constData();

        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);


        //        ControlBoxDigitalOut(1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
//        qDebug()<<ba;
//        QString Log = "[Gripper] cmd : " + text;
//        QByteArray br = text.toUtf8();

//        //        _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
//        gripper.Kitech_Client->write(br);
    }
    else
    {
        //        _log.PrintLog("Not connected KITECH yet.", ui->TE_GLOBAL_LOG, "red", true);
    }
}

void MainWindow::BTN_GRIPPER_VISION()
{
    // preset vision pos cmd
    if(Integrated_info.init_gripper == true)
    {
        QString text("Rs");
        qDebug()<<text;
        std::string msg = text.toUtf8().constData();

        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);
        QString Log = "[Gripper] cmd : " + text;
        QByteArray br = text.toUtf8();

        //        _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
//        gripper.Kitech_Client->write(br);
    }
    else
    {
        //        _log.PrintLog("Not connected KITECH yet.", ui->TE_GLOBAL_LOG, "red", true);
    }
}

void MainWindow::CB_GRIPPER_GE_CMD_WRITE()
{
    //    ControlBoxDigitalOut(1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    // preset gripper pos cmd in free mode & grapMode & power
    if(Integrated_info.init_gripper == true)
    {
        auto mode = ui->CB_GRIPPER_GE_MODE->currentText();
        auto grap = ui->CB_GRIPPER_GE_GRAPS->currentText();
        auto powe = ui->CB_GRIPPER_GE_POWER->currentText();

        QString text = mode  + grap + powe;
        std::string msg = text.toUtf8().constData();

        ::send(gripper.tmp_fd, msg.data(), msg.size(), 0);
        //        ControlBoxDigitalOut(1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
        qDebug()<<text;
        QString Log = "[Gripper] cmd : " + text;
        QByteArray br = text.toUtf8();

        //        _log.PrintLog(Log.toStdString(), ui->TE_GLOBAL_LOG, "green", true);
//        gripper.Kitech_Client->write(br);
    }
    else
    {
        //        _log.PrintLog("Not connected KITECH yet.", ui->TE_GLOBAL_LOG, "red", true);
    }
}

void MainWindow::BTN_CONNECT_GRIPPER()
{
    gripper.Gripper_Connect();

}

void MainWindow::on_BTN_MOVE_JOINT_INIT_2_clicked()
{
    MoveJoint(putdown1Pos._joint_1, putdown1Pos._joint_2 , putdown1Pos._joint_3 , putdown1Pos._joint_4, putdown1Pos._joint_5, putdown1Pos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOVE_JOINT_INIT_3_clicked()
{
    MoveJoint(putdown2Pos._joint_1, putdown2Pos._joint_2 , putdown2Pos._joint_3 , putdown2Pos._joint_4, putdown2Pos._joint_5, putdown2Pos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOVE_JOINT_INIT_4_clicked()
{
    MoveJoint(readyGripper2Pos._joint_1, readyGripper2Pos._joint_2 , readyGripper2Pos._joint_3 , readyGripper2Pos._joint_4, readyGripper2Pos._joint_5, readyGripper2Pos._joint_6, -1, -1);
}

void MainWindow::on_BTN_MOVE_JOINT_INIT_5_clicked()
{
    MoveJoint(grapsGripper2Pos._joint_1, grapsGripper2Pos._joint_2 , grapsGripper2Pos._joint_3 , grapsGripper2Pos._joint_4, grapsGripper2Pos._joint_5, grapsGripper2Pos._joint_6, -1, -1);
}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_PD1_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    putdown1Pos._joint_1 = systemStat.sdata.jnt_ref[0];
    putdown1Pos._joint_2 = systemStat.sdata.jnt_ref[1];
    putdown1Pos._joint_3 = systemStat.sdata.jnt_ref[2];
    putdown1Pos._joint_4 = systemStat.sdata.jnt_ref[3];
    putdown1Pos._joint_5 = systemStat.sdata.jnt_ref[4];
    putdown1Pos._joint_6 = systemStat.sdata.jnt_ref[5];
    putdown1Pos._acc = -1;
    putdown1Pos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_putdown1.json";
    settings.WriteSettingFile(path, putdown1Pos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_PD2_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    putdown2Pos._joint_1 = systemStat.sdata.jnt_ref[0];
    putdown2Pos._joint_2 = systemStat.sdata.jnt_ref[1];
    putdown2Pos._joint_3 = systemStat.sdata.jnt_ref[2];
    putdown2Pos._joint_4 = systemStat.sdata.jnt_ref[3];
    putdown2Pos._joint_5 = systemStat.sdata.jnt_ref[4];
    putdown2Pos._joint_6 = systemStat.sdata.jnt_ref[5];
    putdown2Pos._acc = -1;
    putdown2Pos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_putdown2.json";
    settings.WriteSettingFile(path, putdown2Pos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_RG2_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    readyGripper2Pos._joint_1 = systemStat.sdata.jnt_ref[0];
    readyGripper2Pos._joint_2 = systemStat.sdata.jnt_ref[1];
    readyGripper2Pos._joint_3 = systemStat.sdata.jnt_ref[2];
    readyGripper2Pos._joint_4 = systemStat.sdata.jnt_ref[3];
    readyGripper2Pos._joint_5 = systemStat.sdata.jnt_ref[4];
    readyGripper2Pos._joint_6 = systemStat.sdata.jnt_ref[5];
    readyGripper2Pos._acc = -1;
    readyGripper2Pos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_pickingReady2.json";
    settings.WriteSettingFile(path, readyGripper2Pos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}

void MainWindow::on_BTN_GET_JOINT_AND_TCP_G2_clicked()
{
    ui->LE_JOINT_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                                 systemStat.sdata.jnt_ref[0], systemStat.sdata.jnt_ref[1], systemStat.sdata.jnt_ref[2],
            systemStat.sdata.jnt_ref[3], systemStat.sdata.jnt_ref[4], systemStat.sdata.jnt_ref[5]));

    grapsGripper2Pos._joint_1 = systemStat.sdata.jnt_ref[0];
    grapsGripper2Pos._joint_2 = systemStat.sdata.jnt_ref[1];
    grapsGripper2Pos._joint_3 = systemStat.sdata.jnt_ref[2];
    grapsGripper2Pos._joint_4 = systemStat.sdata.jnt_ref[3];
    grapsGripper2Pos._joint_5 = systemStat.sdata.jnt_ref[4];
    grapsGripper2Pos._joint_6 = systemStat.sdata.jnt_ref[5];
    grapsGripper2Pos._acc = -1;
    grapsGripper2Pos._spd = -1;

    std::string path = "/home/rainbow/LIFT_PROG/build-LIFT_PROG-Desktop-Release/setting_RB5_picking2.json";
    settings.WriteSettingFile(path, grapsGripper2Pos);

    ui->LE_TCP_LIST->setText(QString().sprintf("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f",
                                               systemStat.sdata.tcp_ref[0], systemStat.sdata.tcp_ref[1], systemStat.sdata.tcp_ref[2],
            systemStat.sdata.tcp_ref[3], systemStat.sdata.tcp_ref[4], systemStat.sdata.tcp_ref[5]));

}


//////////barcode//////////

void MainWindow::bt_usb1_con()
{
    barcode.bt_usb1_con(ui->cb_usb1->currentText());
    ui->bt_usb1_con->setEnabled(false);
    ui->bt_usb1_dis->setEnabled(true);
}

void MainWindow::bt_usb2_con()
{
    barcode.bt_usb2_con(ui->cb_usb2->currentText());
    ui->bt_usb2_con->setEnabled(false);
    ui->bt_usb2_dis->setEnabled(true);
}
void MainWindow::barcode1_showUI_msg(QByteArray msg)
{
    ui->te_usb1->setText(msg);
}
void MainWindow::barcode2_showUI_msg(QByteArray msg)
{
    ui->te_usb2->setText(msg);
}
