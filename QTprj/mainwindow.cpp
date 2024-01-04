#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <wiringPi.h>
#include <softTone.h>
#include <softPwm.h>
#include "qmath.h"

#define LED1 21
#define LED2 5
#define LED3 22
#define LED4 26
#define DIG1 18
#define DIG2 23
#define DIG3 24
#define DIG4 6
#define A 25
#define B 12
#define C 17
#define D 27
#define E 4
#define F 16
#define G 13
#define DP 19
#define pinPiezo 20
const int melody[] = {131, 147, 165, 175, 196, 220, 247, 262};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(LED1, OUTPUT);

    if(checked == true){
        digitalWrite(LED1, HIGH);
    }else{
        digitalWrite(LED1, LOW);
    }
}

void MainWindow::on_checkBox_2_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(LED2, OUTPUT);

    if(checked == true){
        digitalWrite(LED2, HIGH);
    }else{
        digitalWrite(LED2, LOW);
    }
}

void MainWindow::on_checkBox_3_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(LED3, OUTPUT);

    if(checked == true){
        digitalWrite(LED3, HIGH);
    }else{
        digitalWrite(LED3, LOW);
    }
}

void MainWindow::on_checkBox_4_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(DIG1, OUTPUT);
    pinMode(DIG2, OUTPUT);
    pinMode(DIG3, OUTPUT);
    pinMode(DIG4, OUTPUT);
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);

    if(checked == true){
        digitalWrite(DIG1, LOW);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, HIGH);
        digitalWrite(B, HIGH);
        digitalWrite(C, HIGH);
    }else{
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, HIGH);
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);
        digitalWrite(E, LOW);
        digitalWrite(F, LOW);
        digitalWrite(G, LOW);
        digitalWrite(DP, LOW);
    }
}

void MainWindow::on_checkBox_5_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(DIG1, OUTPUT);
    pinMode(DIG2, OUTPUT);
    pinMode(DIG3, OUTPUT);
    pinMode(DIG4, OUTPUT);
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);

    if(checked == true){
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, LOW);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, HIGH);
        digitalWrite(A, HIGH);
        digitalWrite(B, HIGH);
        digitalWrite(G, HIGH);
        digitalWrite(E, HIGH);
        digitalWrite(D, HIGH);
    }else{
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, HIGH);
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);
        digitalWrite(E, LOW);
        digitalWrite(F, LOW);
        digitalWrite(G, LOW);
        digitalWrite(DP, LOW);
    }
}

void MainWindow::on_checkBox_6_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(DIG1, OUTPUT);
    pinMode(DIG2, OUTPUT);
    pinMode(DIG3, OUTPUT);
    pinMode(DIG4, OUTPUT);
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);

    if(checked == true){
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, LOW);
        digitalWrite(DIG4, HIGH);
        digitalWrite(A, HIGH);
        digitalWrite(B, HIGH);
        digitalWrite(G, HIGH);
        digitalWrite(C, HIGH);
        digitalWrite(D, HIGH);
    }else{
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, HIGH);
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);
        digitalWrite(E, LOW);
        digitalWrite(F, LOW);
        digitalWrite(G, LOW);
        digitalWrite(DP, LOW);
    }
}

void MainWindow::on_checkBox_7_toggled(bool checked)
{
    wiringPiSetupGpio();
    pinMode(DIG1, OUTPUT);
    pinMode(DIG2, OUTPUT);
    pinMode(DIG3, OUTPUT);
    pinMode(DIG4, OUTPUT);
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);

    if(checked == true){
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, LOW);
        digitalWrite(B, HIGH);
        digitalWrite(C, HIGH);
        digitalWrite(F, HIGH);
        digitalWrite(G, HIGH);
    }else{
        digitalWrite(DIG1, HIGH);
        digitalWrite(DIG2, HIGH);
        digitalWrite(DIG3, HIGH);
        digitalWrite(DIG4, HIGH);
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);
        digitalWrite(E, LOW);
        digitalWrite(F, LOW);
        digitalWrite(G, LOW);
        digitalWrite(DP, LOW);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[0]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_3_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[1]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_4_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[2]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_5_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[3]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_6_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[4]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_7_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[5]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_8_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[6]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_pushButton_9_clicked()
{
    wiringPiSetupGpio();
    softToneCreate(pinPiezo);
    softToneWrite(pinPiezo, melody[7]);
    delay(250);
    softToneWrite(pinPiezo, 0);
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    wiringPiSetupGpio();
    softPwmCreate(LED4, 0, 200);
    int value = arg1.toInt();

    if(value >= 0 || value <= 200){
        ui->dial->setValue(value);
        ui->spinBox->setValue(value);
        softPwmWrite(LED4, value);
    }

    ui->spinBox->blockSignals(true);
    ui->dial->setValue(arg1.toInt());
    ui->spinBox->blockSignals(false);

}

void MainWindow::on_pushButton_0_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "0");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "0");
    }
}

void MainWindow::on_pushButton1_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "1");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "1");
    }
}

void MainWindow::on_pushButton2_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "2");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "2");
    }
}

void MainWindow::on_pushButton3_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "3");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "3");
    }
}

void MainWindow::on_pushButton4_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "4");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "4");
    }
}

void MainWindow::on_pushButton5_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "5");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "5");
    }
}

void MainWindow::on_pushButton6_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "6");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "6");
    }
}

void MainWindow::on_pushButton7_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "7");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "7");
    }
}

void MainWindow::on_pushButton8_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "8");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "8");
    }
}

void MainWindow::on_pushButton9_clicked()
{
    if(QString::compare(ui->label_do->text(), "") == 0){
        ui->lineEdit_first->setText(ui->lineEdit_first->text() + "9");
    }
    else{
        ui->lineEdit_second->setText(ui->lineEdit_second->text() + "9");
    }
}

void MainWindow::on_pushButtonP_clicked()
{
    ui->label_do->setText("+");
}


void MainWindow::on_pushButtonM_clicked()
{
    ui->label_do->setText("-");
}

void MainWindow::on_pushButtonMul_clicked()
{
    ui->label_do->setText("*");
}

void MainWindow::on_pushButtonD_clicked()
{
    ui->label_do->setText("/");
}

void MainWindow::on_pushButtonAC_clicked()
{
    ui->lineEdit_first->setText("");
    ui->label_do->setText("");
    ui->lineEdit_second->setText("");
    ui->lineEdit_result->setText("");
}

void MainWindow::on_pushButtonEq_clicked()
{
    first = ui->lineEdit_first->text().toDouble();
    second = ui->lineEdit_second->text().toDouble();

    if(ui->label_do->text() == "+"){
        ui->lineEdit_result->setText(QString::number(first + second));
    }
    else if(ui->label_do->text() == "-"){
        ui->lineEdit_result->setText(QString::number(first - second));
    }
    else if(ui->label_do->text() == "*"){
        ui->lineEdit_result->setText(QString::number(first * second));
    }
    else if(ui->label_do->text() == "/"){
        ui->lineEdit_result->setText(QString::number(first / second));
    }
}

