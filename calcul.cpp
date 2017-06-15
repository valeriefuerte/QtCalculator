#include "calcul.h"
#include "ui_calcul.h"

calcul::calcul(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calcul)
{
    ui->setupUi(this);
}

calcul::~calcul()
{
    delete ui;
}

//QPushButton()



void calcul::on_pushButton_result_clicked()
{
    b = ui->textEdit->toPlainText();
    ui->textEdit->clear();

    bool ok;
    A = a.toDouble(&ok);
    B = b.toDouble(&ok);

    switch (operation) {
    case 1: //+
        res = A + B;
        break;
    case 2: //-
        res = A - B;
        break;
    case 3: //*
        res = A * B;
        break;
    case 4: // /
        res = A / B;
        break;
    }

    result = QString::number(res);
    ui->textEdit->setText(result);
}

void calcul::on_pushButton_0_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="0";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_1_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="1";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_2_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="2";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_3_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="3";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_4_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="4";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_5_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="5";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_6_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="6";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_7_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="7";
    ui->textEdit->setText(s);
//    ui->textEdit->append("7");
}

void calcul::on_pushButton_8_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="8";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_9_clicked()
{
    QString s = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    s+="9";
    ui->textEdit->setText(s);
}

void calcul::on_pushButton_C_clicked()
{
    ui->textEdit->clear();
}

void calcul::on_pushButton_addition_clicked()
{
    a = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    operation = 1;
}

void calcul::on_pushButton_subtract_clicked()
{
    a = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    operation = 2;
}

void calcul::on_pushButton_multiply_clicked()
{
    a = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    operation = 3;
}

void calcul::on_pushButton_divide_clicked()
{
    a = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    operation = 4;
}
