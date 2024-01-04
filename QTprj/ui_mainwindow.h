/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *pushButton;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QDial *dial;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton9;
    QPushButton *pushButton_0;
    QPushButton *pushButtonD;
    QPushButton *pushButton7;
    QPushButton *pushButton_24;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonAC;
    QPushButton *pushButtonC;
    QPushButton *pushButtonEq;
    QPushButton *pushButton2;
    QPushButton *pushButton_29;
    QPushButton *pushButton_19;
    QPushButton *pushButtonM;
    QPushButton *pushButtonP;
    QPushButton *pushButtonMul;
    QPushButton *pushButton8;
    QPushButton *pushButton1;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_first;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_second;
    QLabel *label_eq;
    QLineEdit *lineEdit_result;
    QLabel *label_do;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1008, 501);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(430, 60, 96, 28));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(430, 100, 96, 28));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(430, 140, 96, 28));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 390, 101, 30));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(300, 60, 96, 28));
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(300, 100, 96, 28));
        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(300, 140, 96, 28));
        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(300, 180, 96, 28));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 60, 220, 196));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dial = new QDial(layoutWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(200);
        dial->setWrapping(true);
        dial->setNotchesVisible(true);

        verticalLayout->addWidget(dial);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(200);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);

        verticalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setWrapping(true);
        spinBox->setMaximum(200);

        verticalLayout->addWidget(spinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 300, 481, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget1);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_2->addWidget(pushButton_9);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(530, 190, 451, 140));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        gridLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButtonD = new QPushButton(gridLayoutWidget);
        pushButtonD->setObjectName(QString::fromUtf8("pushButtonD"));

        gridLayout->addWidget(pushButtonD, 3, 3, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton_24 = new QPushButton(gridLayoutWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        gridLayout->addWidget(pushButton_24, 2, 4, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButtonAC = new QPushButton(gridLayoutWidget);
        pushButtonAC->setObjectName(QString::fromUtf8("pushButtonAC"));

        gridLayout->addWidget(pushButtonAC, 0, 4, 1, 1);

        pushButtonC = new QPushButton(gridLayoutWidget);
        pushButtonC->setObjectName(QString::fromUtf8("pushButtonC"));

        gridLayout->addWidget(pushButtonC, 3, 0, 1, 1);

        pushButtonEq = new QPushButton(gridLayoutWidget);
        pushButtonEq->setObjectName(QString::fromUtf8("pushButtonEq"));

        gridLayout->addWidget(pushButtonEq, 3, 2, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        gridLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton_29 = new QPushButton(gridLayoutWidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));

        gridLayout->addWidget(pushButton_29, 3, 4, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout->addWidget(pushButton_19, 1, 4, 1, 1);

        pushButtonM = new QPushButton(gridLayoutWidget);
        pushButtonM->setObjectName(QString::fromUtf8("pushButtonM"));

        gridLayout->addWidget(pushButtonM, 1, 3, 1, 1);

        pushButtonP = new QPushButton(gridLayoutWidget);
        pushButtonP->setObjectName(QString::fromUtf8("pushButtonP"));

        gridLayout->addWidget(pushButtonP, 0, 3, 1, 1);

        pushButtonMul = new QPushButton(gridLayoutWidget);
        pushButtonMul->setObjectName(QString::fromUtf8("pushButtonMul"));

        gridLayout->addWidget(pushButtonMul, 2, 3, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        gridLayout->addWidget(pushButton1, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(530, 60, 101, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_first = new QLineEdit(horizontalLayoutWidget);
        lineEdit_first->setObjectName(QString::fromUtf8("lineEdit_first"));

        horizontalLayout_3->addWidget(lineEdit_first);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(720, 60, 261, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_second = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_second->setObjectName(QString::fromUtf8("lineEdit_second"));

        horizontalLayout_4->addWidget(lineEdit_second);

        label_eq = new QLabel(horizontalLayoutWidget_2);
        label_eq->setObjectName(QString::fromUtf8("label_eq"));

        horizontalLayout_4->addWidget(label_eq);

        lineEdit_result = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_result->setObjectName(QString::fromUtf8("lineEdit_result"));

        horizontalLayout_4->addWidget(lineEdit_result);

        label_do = new QLabel(centralwidget);
        label_do->setObjectName(QString::fromUtf8("label_do"));
        label_do->setGeometry(QRect(660, 90, 31, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1008, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(textChanged(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "LED1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "LED2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "LED3", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Num1", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Num 2", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "Num 3", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "Num 4", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "&Value", nullptr));
        lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "999", nullptr));
        lineEdit->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Do", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Re", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Mi", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Pa", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Sol", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Ra", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Si", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Do", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonD->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_24->setText(QString());
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButtonAC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButtonC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButtonEq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_29->setText(QString());
        pushButton_19->setText(QString());
        pushButtonM->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonP->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label_do->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
