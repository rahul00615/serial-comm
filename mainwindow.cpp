#include "mainwindow.h"
#include "ui_mainwindow.h"


/************************************
 * variable Decelaration************
 * *********************************/
QSerialPort* serial;
QString text_to_send ="";
QByteArray ser_buff,disp_arr1,disp_arr2;
int timer_flag =0,port_flag = 0;
unsigned int count =0;
unsigned int next_len,comp_len;
static const char blankString[] = QT_TRANSLATE_NOOP("SettingsDialog", "N/A");
/*************************************/


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    serial = new QSerialPort(this);             //Create Object
    timer = new QTimer(this);

    initial_display_settings();
    connect(serial, SIGNAL(readyRead()),this, SLOT(on_Received_Data()));
    connect(timer,SIGNAL(timeout()),this,SLOT(loop_send_data()));
    ui->textBrowser->append("To check available Ports : click <Configure Port icon>");
    ui->radioButton_NMEA->setChecked(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_openport_clicked()
{
    serial ->setPortName(ui->comboBox_port->currentText());
    Baud_Settings(ui->comboBox_baud->currentText());
    serial ->setDataBits(QSerialPort::Data8);
    Parity_Settings(ui->comboBox_parity->currentText());
    StopBits_Settings(ui->comboBox_stopbits->currentText());
    serial ->setFlowControl(QSerialPort::NoFlowControl);
    serial ->open(QIODevice::ReadWrite);
    if(serial ->isOpen() == true){
        ui->label_port_status ->setText (ui->comboBox_port->currentText() + " :: " +
                               ui->comboBox_baud->currentText() + " , " +
                               ui->comboBox_parity->currentText() + " , " +
                               ui->comboBox_stopbits->currentText());
        qDebug() << "Port is Open";
        serial->flush();
        ui->textBrowser->setText("");
    }
     if(serial ->isOpen() == false){
         QMessageBox::information(this,"Warning","Port not Opened");
     }
     serial->clear();
     port_flag = 1;
}

void MainWindow::on_pushButton_closeport_clicked()
{
    serial->close();
    qDebug () << "Port is closed";
    ui->label_port_status ->setText ("Port Closed");
    ser_buff = "";
    disp_arr1 = "";
    disp_arr2 = "";
    timer_flag=0;
    port_flag = 0;
}

void MainWindow::on_Received_Data()
{
    /*************************ASCII************************************/

    QTime time = QTime::currentTime();
    QString time_str = time.toString("hh:mm:ss.zzz");
    if(ui->radioButton_NMEA->isChecked())
        {
        if(serial->canReadLine())
        {
        ser_buff = serial->readLine();
            count +=1;
            QString Sr_count;
            if((count<10))Sr_count = "000";
            if((count>=10) &(count<100))Sr_count = "00";
            if((count>=100) &(count<1000))Sr_count = "0";
            Sr_count= Sr_count.append(QString::number(count));
            QString str_count = QString::number(ser_buff.length());
            ui->textBrowser->append("(" + Sr_count + ")-(" + time_str +")-(bytes-" + str_count +"): " +ser_buff);
            ser_buff = "";
            if (count >= 9999)
            {
                count = 0;
                ui->textBrowser->clear();
            }
        }

        }
    else
    {
    short int len_value = ui->spinBox_len->value();
                if( ser_buff.length() < len_value){
                ser_buff += serial->readAll();
                }
                else
                {
                disp_arr2.append(ser_buff);
                int comp_len;
                comp_len = disp_arr2.length();
                while(comp_len >=len_value)
               {
               for(int i=0;i<len_value;i++)
               disp_arr1[i] = disp_arr2[i];
               count +=1;
               QString Sr_count;
               if((count<10))Sr_count = "000";
               if((count>=10) &(count<100))Sr_count = "00";
               if((count>=100) &(count<1000))Sr_count = "0";
               Sr_count= Sr_count.append(QString::number(count));
               QString str_count = QString::number(disp_arr1.length());
               if(ui->radioButton_ASCII->isChecked()){
               ui->textBrowser->append("(" + Sr_count + ")-(" + time_str +")-(bytes-" + str_count +"): " +disp_arr1);
               }
                if(ui->radioButton_Hex->isChecked()) {
                ui->textBrowser->append("(" + Sr_count + ")-(" + time_str +")-(bytes-" + str_count +"): " + (disp_arr1.toHex()).toUpper());
                }

                if (count >= 9999){
                count = 0;
                ui->textBrowser->clear();
                }                           //}
               comp_len = comp_len - len_value;
               disp_arr2.remove(0,(len_value));
               disp_arr1 ="";
               }
               ser_buff = "";
                }
  }
}


void MainWindow::on_pushButton_send_clicked()
{
    if(port_flag == 0)
    {
        QMessageBox::information(this,"Warning","Port Closed ! Can't send.");
        timer_flag = 0;
    }

    else
    {
            if(ui->checkBox_Looptime->isChecked())
            {
            timer->setInterval((ui->doubleSpinBox_looptime->value())*1000);
            timer->start();
            timer_flag=1;
            text_to_send = ui->lineEdit_txdata->text();
            if(ui->checkBox_CR->isChecked()){
                text_to_send = text_to_send.append("\r\n");
                //qDebug()<<"<Enter>";
                }

             }
            else
            {
            /******************************Hex***************************/
            timer_flag=0;
            if(ui->radioButton_Hex->isChecked()){
            QString text_to_send0 = ui->lineEdit_txdata->text();
            text_to_send = text_to_send0;
            text_to_send = text_to_send.toUpper();
            /****************Hex conversion**********/
            QByteArray array1 = text_to_send.toUtf8();
            array1.resize(2);
            array1[0] = 0xFF;
            array1[1] = 0xFF;

            QString str = "0x" + text_to_send;
            //qDebug() << str;
            QString value =  str.mid(2);    // "FFFF"   <- just the hex values!
            QByteArray array2 = QByteArray::fromHex(value.toLatin1());
            qDebug() << array2;
            qDebug() << array2.toHex().toUpper();
            serial->write(array2.toUpper());
            /*****************************ASCII******************************/
            if(ui->radioButton_NMEA->isChecked()||ui->radioButton_ASCII->isChecked()){
            text_to_send = ui->lineEdit_txdata->text();
            if(ui->checkBox_CR->isChecked()){
                text_to_send = text_to_send.append("\r\n");
                //qDebug()<<"<Enter>";
                }
            serial->write(text_to_send.toUtf8());
            qDebug () <<text_to_send;

            }

            }
            }
    }
}

void MainWindow::loop_send_data()
{

    if(timer_flag==1)
    {
        if(ui->radioButton_NMEA->isChecked()||ui->radioButton_ASCII->isChecked()){
        serial->write(text_to_send.toUtf8());
        qDebug () <<text_to_send;
        }

        if(ui->radioButton_Hex->isChecked()){
            text_to_send = text_to_send.toUpper();
            /****************Hex conversion**********/
            QString str = "0x" + text_to_send;
            QString value =  str.mid(2);    // "FFFF"   <- just the hex values!
            QByteArray array2 = QByteArray::fromHex(value.toLatin1());
            qDebug() << array2.toHex();
            serial->write(array2);
        }
    }

}

void MainWindow::on_actionClear_triggered()
{
    ui->textBrowser->setText("");
    ser_buff = disp_arr1 =disp_arr2 = "";
    count = 0;
}

void MainWindow::on_actionConfigure_Port_triggered()
{
    ui->comboBox_port->clear();
    ui->textBrowser->clear();
    QString description;
    QString manufacturer;
    QString serialNumber;
    int x = 0,idx=0;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        QStringList list;
        description = info.description();
        manufacturer = info.manufacturer();
        serialNumber = info.serialNumber();
        list << info.portName()
             << (!description.isEmpty() ? description : blankString)
             << (!manufacturer.isEmpty() ? manufacturer : blankString)
             << (!serialNumber.isEmpty() ? serialNumber : blankString)
             << info.systemLocation()
             << (info.vendorIdentifier() ? QString::number(info.vendorIdentifier(), 16) : blankString)
             << (info.productIdentifier() ? QString::number(info.productIdentifier(), 16) : blankString);

        ui->comboBox_port->addItem(list.first(), list);
        x =x +1;
       }
    ui->textBrowser->append("Available Ports info: \r\n");
    for(idx = 0;idx<x;idx++)
    {
    QStringList list = ui->comboBox_port->itemData(idx).toStringList();
    ui->textBrowser->append(tr("Description: %1").arg(list.count() > 1 ? list.at(1) : tr(blankString)));
    ui->textBrowser->append(tr("Manufacturer: %1").arg(list.count() > 2 ? list.at(2) : tr(blankString)));
    ui->textBrowser->append(tr("Serial number: %1").arg(list.count() > 3 ? list.at(3) : tr(blankString)));
    ui->textBrowser->append(tr("Port No.: %1").arg(list.count() > 4 ? list.at(4) : tr(blankString)));
    ui->textBrowser->append(tr("Vendor Identifier: %1").arg(list.count() > 5 ? list.at(5) : tr(blankString)));
    ui->textBrowser->append(tr("Product Identifier: %1").arg(list.count() > 6 ? list.at(6) : tr(blankString)));
    ui->textBrowser->append("\r\n");
    }
    ui->textBrowser->append("Select Port , Baud Rate , Parity , StopBits <and click Open>");

}

void MainWindow::on_actionSave_triggered()
{
    QFile myfile("log.txt");
    if(!myfile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "could not open the file log.txt !";
        return;
    }
    QTextStream out(&myfile);
    QTextDocument *doc = ui->textBrowser->document();
    out << doc->toPlainText();
    myfile.flush();
    myfile.close();
    QMessageBox::information(this,"Info","log.txt file Created");
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About R Comm"),
                             tr("<b>Developed By:</b>"
                              "<br></br>"
                              "<br>Rahul Singh</br>"
                              "<br></br>"
                              "<br>Version 1.0</br>"));
}

void MainWindow::on_actionClose_triggered()
{
    serial->close();
    qDebug () << "Port is closed";
    MainWindow::close();
}


/*********************************************
 * ********** Serial Com Settings************
 * ******************************************/

void MainWindow::initial_display_settings()
{
    ui ->comboBox_port->addItem("COM1");
    ui ->comboBox_port->addItem("COM2");
    ui ->comboBox_port->addItem("COM3"); /// /ttyAMA0
    ui ->comboBox_port->addItem("COM4");
    ui ->comboBox_port->addItem("COM5");
    ui ->comboBox_port->addItem("COM6");
    ui ->comboBox_port->addItem("COM7");
    ui ->comboBox_port->addItem("COM8");
    ui ->comboBox_port->addItem("COM9");
    ui ->comboBox_port->addItem("COM10");
    ui ->comboBox_port->addItem("COM11");
    ui ->comboBox_port->addItem("COM12");
    ui ->comboBox_port->addItem("COM13");
    ui ->comboBox_port->addItem("COM14");
    ui ->comboBox_port->addItem("COM15");
    ui ->comboBox_port->addItem("COM16");
    ui ->comboBox_port->addItem("COM17");
    ui ->comboBox_port->addItem("COM18");
    ui ->comboBox_port->addItem("COM19");
    ui ->comboBox_port->addItem("COM20");

   ui ->comboBox_baud->addItem("1200");
   ui ->comboBox_baud ->addItem("2400");
   ui ->comboBox_baud->addItem("4800");
   ui ->comboBox_baud->addItem("9600");
   ui ->comboBox_baud->addItem("19200");
   ui ->comboBox_baud->addItem("38400");
   ui ->comboBox_baud->addItem("57600");
   ui ->comboBox_baud->addItem("115200");

   ui ->comboBox_parity->addItem("None");
   ui ->comboBox_parity->addItem("Even");
   ui ->comboBox_parity->addItem("Odd");

   ui ->comboBox_stopbits->addItem("1");
   ui ->comboBox_stopbits->addItem("2");

}

void MainWindow::Baud_Settings(QString ch)
{
    if(ch == "1200"){
        serial ->setBaudRate(QSerialPort::Baud1200);
        qDebug () << ch;
       }
    else if(ch == "2400"){
        serial ->setBaudRate(QSerialPort::Baud2400);
        qDebug () << ch;
    }
    else if(ch == "4800"){
        serial ->setBaudRate(QSerialPort::Baud4800);
        qDebug () << ch;
    }
    else if(ch == "9600"){
        serial ->setBaudRate(QSerialPort::Baud9600);
        qDebug () << ch;
    }
    else if(ch == "19200"){
        serial ->setBaudRate(QSerialPort::Baud19200);
        qDebug () << ch;
    }
    else if(ch == "38400"){
        serial ->setBaudRate(QSerialPort::Baud38400);
        qDebug () << ch;
    }
    else if(ch == "57600"){
        serial ->setBaudRate(QSerialPort::Baud57600);
        qDebug () << ch;
    }
    else if(ch == "115200"){
        serial ->setBaudRate(QSerialPort::Baud115200);
        qDebug () << ch;
    }
    else {
        serial ->setBaudRate(QSerialPort::Baud9600);
        qDebug () << ch;
    }
}


void MainWindow::Parity_Settings(QString ch)
{
    if(ch == "None"){
        serial ->setParity(QSerialPort::NoParity);
        qDebug () << ch;
       }
    else if(ch == "Even"){
        serial ->setParity(QSerialPort::EvenParity);
        qDebug () << ch;
    }
    else if(ch == "Odd"){
        serial ->setParity(QSerialPort::OddParity);
        qDebug () << ch;
    }
    else {
        serial ->setParity(QSerialPort::NoParity);
        qDebug () << ch;
    }
}

void MainWindow::StopBits_Settings(QString ch)
{
    if(ch == "1"){
        serial ->setStopBits(QSerialPort::OneStop);
        qDebug () << ch;
       }
    else if(ch == "2"){
        serial ->setStopBits(QSerialPort::TwoStop);
        qDebug () << ch;    }
    else {
        serial ->setStopBits(QSerialPort::OneStop);
        qDebug () << ch;
    }
}
