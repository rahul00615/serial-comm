#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include <QCoreApplication>
#include <QSerialPortInfo>
//#include <QStandardItemModel>
#include <QFile>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void initial_display_settings();

    void on_actionClear_triggered();

    void on_actionConfigure_Port_triggered();

    void on_actionSave_triggered();

    void on_actionAbout_triggered();

    void on_pushButton_openport_clicked();

    void on_pushButton_closeport_clicked();

    void on_pushButton_send_clicked();

    void on_actionClose_triggered();

    void on_Received_Data();

    void loop_send_data();

    void Baud_Settings(QString);

    void Parity_Settings(QString);

    void StopBits_Settings(QString);

private:
    Ui::MainWindow *ui;
    QSerialPort* serial1;
    QTimer *timer;
};

#endif // MAINWINDOW_H
