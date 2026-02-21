#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Add_clicked()
{
    QString str = ui->Add->text();
    addSubMulDivClickHandler(str[0].toLatin1());
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    if (state == 1) {
        ui->num1->setText(ui->num1->text() + QString::number(n));
    } else if (state == 2) {
        ui->num2->setText(ui->num2->text() + QString::number(n));
    }
}

void MainWindow::setActiveControls()
{

    if (state == 1) {
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->Add->setEnabled(false);
    } else if (state == 2) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->Add->setEnabled(false);
    } else if (state == 3) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->Add->setEnabled(true);
    }
}

void MainWindow::clearAndEnterClickHandler(QString which)
{
    if (which == "enter") {
        if (state >= 3) {
            state = 3;
        } else {
            state++;
        }
    } else if (which == "clear") {
        state = 1;
        ui->num1->clear();
        ui->num2->clear();
        ui->result->clear();
    }
    setActiveControls();
}

void MainWindow::addSubMulDivClickHandler(char operation)
{
    if (state != 3)
        return;

    int num1 = ui->num1->text().toInt();
    int num2 = ui->num2->text().toInt();
    int result = 0;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 == 0) {
            ui->result->setText("Error");
            return;
        }
        result = num1 / num2;
        break;

    default:
        return;
    }

    ui->result->setText(QString::number(result));
    state = 1;
    setActiveControls();
}


void MainWindow::on_Enter_clicked()
{
    QString str = ui->Enter->text();
    str = str.toLatin1();
    clearAndEnterClickHandler(str);
}


void MainWindow::on_Clear_clicked()
{
    QString str = ui->Clear->text();
    str = str.toLatin1();
    clearAndEnterClickHandler(str);
}


void MainWindow::on_Sub_clicked()
{
    QString str = ui->Sub->text();
    addSubMulDivClickHandler(str[0].toLatin1());
}


void MainWindow::on_Mul_clicked()
{
    QString str = ui->Mul->text();
    addSubMulDivClickHandler(str[0].toLatin1());
}


void MainWindow::on_Div_clicked()
{
    QString str = ui->Div->text();
    addSubMulDivClickHandler(str[0].toLatin1());
}

