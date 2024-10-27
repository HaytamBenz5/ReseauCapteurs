/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *MotorBox;
    QWidget *DistanceBrightnessBox;
    QLabel *label;
    QPushButton *OnOffButton;
    QPushButton *autoToggleButton;
    QLineEdit *MotorSpeed;
    QWidget *SensorValues;
    QGroupBox *windSpeedvalue;
    QLabel *windSpeedLabel;
    QLabel *label_16;
    QPushButton *setSpeed;
    QWidget *threeDbox;
    QRadioButton *BrightnessRadio;
    QLabel *uniteLabel;
    QGroupBox *groupBox;
    QLabel *DistanceBrightnessValue;
    QRadioButton *DistanceRadio;
    QLabel *label_2;
    QGroupBox *HumidityValue;
    QLabel *HumidityLabel;
    QGroupBox *TemperatureValue;
    QLabel *temperaturelabel;
    QGroupBox *PressureValue;
    QLabel *PressureLabel;
    QGroupBox *phiValue;
    QLabel *phiLabel;
    QGroupBox *ThetaValue;
    QLabel *ThetaLabel;
    QGroupBox *PsiValue;
    QLabel *PsiLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 700);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(900, 700));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color : #FFFFF;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(900, 700));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 901, 581));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(10, 0, 10, 0);
        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 2, 0, 1, 1);

        MotorBox = new QWidget(gridLayoutWidget);
        MotorBox->setObjectName(QString::fromUtf8("MotorBox"));
        DistanceBrightnessBox = new QWidget(MotorBox);
        DistanceBrightnessBox->setObjectName(QString::fromUtf8("DistanceBrightnessBox"));
        DistanceBrightnessBox->setGeometry(QRect(-10, -10, 441, 591));
        label = new QLabel(DistanceBrightnessBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 75 italic 16pt \"Noto Sans\"; \n"
"text-decoration: underline;\n"
"color: rgb(128, 128, 168);"));
        OnOffButton = new QPushButton(DistanceBrightnessBox);
        OnOffButton->setObjectName(QString::fromUtf8("OnOffButton"));
        OnOffButton->setGeometry(QRect(110, 260, 91, 31));
        OnOffButton->setCursor(QCursor(Qt::PointingHandCursor));
        OnOffButton->setStyleSheet(QString::fromUtf8("background-color: #74D4E2;\n"
"color: rgb(255, 255, 255);"));
        autoToggleButton = new QPushButton(DistanceBrightnessBox);
        autoToggleButton->setObjectName(QString::fromUtf8("autoToggleButton"));
        autoToggleButton->setGeometry(QRect(240, 260, 101, 31));
        autoToggleButton->setCursor(QCursor(Qt::PointingHandCursor));
        autoToggleButton->setStyleSheet(QString::fromUtf8("background-color: #FD9501;\n"
"color: rgb(255, 255, 255);"));
        MotorSpeed = new QLineEdit(DistanceBrightnessBox);
        MotorSpeed->setObjectName(QString::fromUtf8("MotorSpeed"));
        MotorSpeed->setGeometry(QRect(80, 200, 141, 31));
        SensorValues = new QWidget(DistanceBrightnessBox);
        SensorValues->setObjectName(QString::fromUtf8("SensorValues"));
        SensorValues->setGeometry(QRect(10, -20, 431, 201));
        windSpeedvalue = new QGroupBox(SensorValues);
        windSpeedvalue->setObjectName(QString::fromUtf8("windSpeedvalue"));
        windSpeedvalue->setGeometry(QRect(40, 120, 341, 51));
        windSpeedvalue->setStyleSheet(QString::fromUtf8(""));
        windSpeedvalue->setFlat(false);
        windSpeedLabel = new QLabel(windSpeedvalue);
        windSpeedLabel->setObjectName(QString::fromUtf8("windSpeedLabel"));
        windSpeedLabel->setGeometry(QRect(10, 20, 63, 31));
        label_16 = new QLabel(SensorValues);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(110, 30, 221, 16));
        setSpeed = new QPushButton(DistanceBrightnessBox);
        setSpeed->setObjectName(QString::fromUtf8("setSpeed"));
        setSpeed->setGeometry(QRect(240, 200, 101, 31));
        setSpeed->setCursor(QCursor(Qt::PointingHandCursor));
        setSpeed->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 118, 123);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(MotorBox, 0, 0, 1, 1);

        threeDbox = new QWidget(gridLayoutWidget);
        threeDbox->setObjectName(QString::fromUtf8("threeDbox"));
        threeDbox->setMaximumSize(QSize(900, 300));
        threeDbox->setFocusPolicy(Qt::WheelFocus);
        BrightnessRadio = new QRadioButton(threeDbox);
        BrightnessRadio->setObjectName(QString::fromUtf8("BrightnessRadio"));
        BrightnessRadio->setGeometry(QRect(240, 260, 112, 31));
        BrightnessRadio->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        uniteLabel = new QLabel(threeDbox);
        uniteLabel->setObjectName(QString::fromUtf8("uniteLabel"));
        uniteLabel->setGeometry(QRect(390, 220, 41, 31));
        groupBox = new QGroupBox(threeDbox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 220, 361, 31));
        DistanceBrightnessValue = new QLabel(groupBox);
        DistanceBrightnessValue->setObjectName(QString::fromUtf8("DistanceBrightnessValue"));
        DistanceBrightnessValue->setGeometry(QRect(20, -10, 311, 51));
        DistanceBrightnessValue->setStyleSheet(QString::fromUtf8(""));
        DistanceRadio = new QRadioButton(threeDbox);
        DistanceRadio->setObjectName(QString::fromUtf8("DistanceRadio"));
        DistanceRadio->setGeometry(QRect(80, 260, 112, 31));
        DistanceRadio->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        DistanceRadio->setChecked(true);
        label_2 = new QLabel(threeDbox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 30, 191, 21));
        HumidityValue = new QGroupBox(threeDbox);
        HumidityValue->setObjectName(QString::fromUtf8("HumidityValue"));
        HumidityValue->setGeometry(QRect(170, 60, 91, 51));
        HumidityLabel = new QLabel(HumidityValue);
        HumidityLabel->setObjectName(QString::fromUtf8("HumidityLabel"));
        HumidityLabel->setGeometry(QRect(10, 20, 63, 31));
        TemperatureValue = new QGroupBox(threeDbox);
        TemperatureValue->setObjectName(QString::fromUtf8("TemperatureValue"));
        TemperatureValue->setGeometry(QRect(160, 110, 111, 51));
        temperaturelabel = new QLabel(TemperatureValue);
        temperaturelabel->setObjectName(QString::fromUtf8("temperaturelabel"));
        temperaturelabel->setGeometry(QRect(0, 20, 63, 31));
        PressureValue = new QGroupBox(threeDbox);
        PressureValue->setObjectName(QString::fromUtf8("PressureValue"));
        PressureValue->setGeometry(QRect(170, 160, 91, 51));
        PressureLabel = new QLabel(PressureValue);
        PressureLabel->setObjectName(QString::fromUtf8("PressureLabel"));
        PressureLabel->setGeometry(QRect(0, 20, 63, 31));

        gridLayout->addWidget(threeDbox, 0, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        phiValue = new QGroupBox(centralwidget);
        phiValue->setObjectName(QString::fromUtf8("phiValue"));
        phiValue->setGeometry(QRect(400, 600, 91, 31));
        phiLabel = new QLabel(phiValue);
        phiLabel->setObjectName(QString::fromUtf8("phiLabel"));
        phiLabel->setGeometry(QRect(10, 10, 71, 16));
        ThetaValue = new QGroupBox(centralwidget);
        ThetaValue->setObjectName(QString::fromUtf8("ThetaValue"));
        ThetaValue->setGeometry(QRect(510, 600, 91, 31));
        ThetaLabel = new QLabel(ThetaValue);
        ThetaLabel->setObjectName(QString::fromUtf8("ThetaLabel"));
        ThetaLabel->setGeometry(QRect(10, 10, 71, 16));
        PsiValue = new QGroupBox(centralwidget);
        PsiValue->setObjectName(QString::fromUtf8("PsiValue"));
        PsiValue->setGeometry(QRect(610, 600, 81, 31));
        PsiLabel = new QLabel(PsiValue);
        PsiLabel->setObjectName(QString::fromUtf8("PsiLabel"));
        PsiLabel->setGeometry(QRect(10, 10, 41, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 630, 41, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 620, 61, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(630, 630, 51, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 600, 181, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "IHM Bus CAN", nullptr));
        label->setText(QString());
        OnOffButton->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        autoToggleButton->setText(QCoreApplication::translate("MainWindow", "mode auto", nullptr));
        MotorSpeed->setPlaceholderText(QCoreApplication::translate("MainWindow", "Vitesse perso", nullptr));
        windSpeedvalue->setTitle(QCoreApplication::translate("MainWindow", "Vitesse vent (Km/h)", nullptr));
        windSpeedLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Contr\303\264le du Moteur DYN_ANEMO", nullptr));
        setSpeed->setText(QCoreApplication::translate("MainWindow", "send", nullptr));
        BrightnessRadio->setText(QCoreApplication::translate("MainWindow", "Luminosit\303\251", nullptr));
        uniteLabel->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        groupBox->setTitle(QString());
        DistanceBrightnessValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        DistanceBrightnessValue->setProperty("title", QVariant(QCoreApplication::translate("MainWindow", "Mode Capteur", nullptr)));
        DistanceRadio->setText(QCoreApplication::translate("MainWindow", "Distance", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "VL6180X_PRESS_HUM_TEMP", nullptr));
        HumidityValue->setTitle(QCoreApplication::translate("MainWindow", "Humidit\303\251 (%)", nullptr));
        HumidityLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        TemperatureValue->setTitle(QCoreApplication::translate("MainWindow", "Temp\303\251rature (\302\260C)", nullptr));
        temperaturelabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        PressureValue->setTitle(QCoreApplication::translate("MainWindow", "Pression (hPa)", nullptr));
        PressureLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        phiValue->setTitle(QString());
        phiLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ThetaValue->setTitle(QString());
        ThetaLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        PsiValue->setTitle(QString());
        PsiLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Phi \317\206", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Theta \316\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Psi \316\250", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MPU9250 :acc\303\251l\303\251rom\303\250tre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
