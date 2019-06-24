/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionClear;
    QAction *actionConfigure_Port;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_port;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_baud;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_parity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_stopbits;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_openport;
    QPushButton *pushButton_closeport;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_NMEA;
    QRadioButton *radioButton_ASCII;
    QRadioButton *radioButton_Hex;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *spinBox_len;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_Looptime;
    QDoubleSpinBox *doubleSpinBox_looptime;
    QCheckBox *checkBox_CR;
    QLabel *label_7;
    QLabel *label_port_status;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_txdata;
    QPushButton *pushButton_send;
    QTextBrowser *textBrowser;
    QLabel *label_8;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(675, 492);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(657, 492));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/images/logger.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionConfigure_Port = new QAction(MainWindow);
        actionConfigure_Port->setObjectName(QStringLiteral("actionConfigure_Port"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure_Port->setIcon(icon4);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_9 = new QVBoxLayout(centralWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_7 = new QHBoxLayout(groupBox);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        comboBox_port = new QComboBox(groupBox);
        comboBox_port->setObjectName(QStringLiteral("comboBox_port"));

        horizontalLayout->addWidget(comboBox_port);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_baud = new QComboBox(groupBox);
        comboBox_baud->setObjectName(QStringLiteral("comboBox_baud"));

        horizontalLayout_2->addWidget(comboBox_baud);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_parity = new QComboBox(groupBox);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        horizontalLayout_3->addWidget(comboBox_parity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_stopbits = new QComboBox(groupBox);
        comboBox_stopbits->setObjectName(QStringLiteral("comboBox_stopbits"));

        horizontalLayout_4->addWidget(comboBox_stopbits);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_openport = new QPushButton(groupBox);
        pushButton_openport->setObjectName(QStringLiteral("pushButton_openport"));

        horizontalLayout_6->addWidget(pushButton_openport);

        pushButton_closeport = new QPushButton(groupBox);
        pushButton_closeport->setObjectName(QStringLiteral("pushButton_closeport"));

        horizontalLayout_6->addWidget(pushButton_closeport);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_3);


        horizontalLayout_13->addWidget(groupBox);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(350, 200));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_NMEA = new QRadioButton(groupBox_2);
        radioButton_NMEA->setObjectName(QStringLiteral("radioButton_NMEA"));
        radioButton_NMEA->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(radioButton_NMEA);

        radioButton_ASCII = new QRadioButton(groupBox_2);
        radioButton_ASCII->setObjectName(QStringLiteral("radioButton_ASCII"));
        radioButton_ASCII->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(radioButton_ASCII);

        radioButton_Hex = new QRadioButton(groupBox_2);
        radioButton_Hex->setObjectName(QStringLiteral("radioButton_Hex"));
        radioButton_Hex->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(radioButton_Hex);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_5->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        spinBox_len = new QSpinBox(groupBox_2);
        spinBox_len->setObjectName(QStringLiteral("spinBox_len"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_len->sizePolicy().hasHeightForWidth());
        spinBox_len->setSizePolicy(sizePolicy1);
        spinBox_len->setMinimumSize(QSize(60, 20));
        spinBox_len->setMaximumSize(QSize(60, 20));
        spinBox_len->setMinimum(1);
        spinBox_len->setValue(10);

        horizontalLayout_5->addWidget(spinBox_len);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_12->addWidget(groupBox_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(200, 150));
        horizontalLayout_10 = new QHBoxLayout(groupBox_3);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        checkBox_Looptime = new QCheckBox(groupBox_3);
        checkBox_Looptime->setObjectName(QStringLiteral("checkBox_Looptime"));
        checkBox_Looptime->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(checkBox_Looptime);

        doubleSpinBox_looptime = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_looptime->setObjectName(QStringLiteral("doubleSpinBox_looptime"));
        doubleSpinBox_looptime->setMinimum(0.01);
        doubleSpinBox_looptime->setValue(1);

        horizontalLayout_8->addWidget(doubleSpinBox_looptime);


        verticalLayout_5->addLayout(horizontalLayout_8);

        checkBox_CR = new QCheckBox(groupBox_3);
        checkBox_CR->setObjectName(QStringLiteral("checkBox_CR"));
        checkBox_CR->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_5->addWidget(checkBox_CR);


        horizontalLayout_10->addLayout(verticalLayout_5);


        horizontalLayout_11->addWidget(groupBox_3);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_11->addWidget(label_7);


        verticalLayout_6->addLayout(horizontalLayout_11);

        label_port_status = new QLabel(centralWidget);
        label_port_status->setObjectName(QStringLiteral("label_port_status"));
        label_port_status->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_6->addWidget(label_port_status);


        horizontalLayout_12->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lineEdit_txdata = new QLineEdit(centralWidget);
        lineEdit_txdata->setObjectName(QStringLiteral("lineEdit_txdata"));

        horizontalLayout_9->addWidget(lineEdit_txdata);

        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout_9->addWidget(pushButton_send);


        verticalLayout_7->addLayout(horizontalLayout_9);


        horizontalLayout_13->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_13);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QLatin1String("color: rgb(0, 255, 0);\n"
"selection-color: rgb(0, 0, 127);\n"
"background-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_8->addWidget(textBrowser);


        verticalLayout_9->addLayout(verticalLayout_8);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(657, 0));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(0, 0, 127);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_9->addWidget(label_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 675, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy2);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionClose);
        menuSettings->addAction(actionClear);
        menuSettings->addAction(actionConfigure_Port);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionConfigure_Port);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Alt+X", 0));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", 0));
        actionClear->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionConfigure_Port->setText(QApplication::translate("MainWindow", "Configure Port", 0));
        actionConfigure_Port->setShortcut(QApplication::translate("MainWindow", "Alt+C", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Port Settings", 0));
        label->setText(QApplication::translate("MainWindow", "Com Port", 0));
        label_2->setText(QApplication::translate("MainWindow", "Baud Rate", 0));
        label_3->setText(QApplication::translate("MainWindow", "Parity   ", 0));
        label_4->setText(QApplication::translate("MainWindow", "Stop Bits", 0));
        pushButton_openport->setText(QApplication::translate("MainWindow", "Open", 0));
        pushButton_closeport->setText(QApplication::translate("MainWindow", "Close", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Received Data Format", 0));
        radioButton_NMEA->setText(QApplication::translate("MainWindow", "NMEA", 0));
        radioButton_ASCII->setText(QApplication::translate("MainWindow", "ASCII", 0));
        radioButton_Hex->setText(QApplication::translate("MainWindow", "HEX", 0));
        label_5->setText(QApplication::translate("MainWindow", "Length", 0));
        spinBox_len->setPrefix(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Transmit Data Settings", 0));
        checkBox_Looptime->setText(QApplication::translate("MainWindow", "Loop Time", 0));
        checkBox_CR->setText(QApplication::translate("MainWindow", "<CR><LF>", 0));
        label_7->setText(QString());
        label_port_status->setText(QString());
        pushButton_send->setText(QApplication::translate("MainWindow", "Send", 0));
        label_8->setText(QApplication::translate("MainWindow", "smarthsystems07@gmail.com", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
