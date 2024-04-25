#include "widget.h"
#include "dialog.h"
#include "./ui_widget.h"

QString hexValue;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    unsigned int num=0;
    float v1=ui->lineEdit->text().toFloat();
    num=*((unsigned int*)&v1);
    hexValue=QString::number(num,16).toUpper();
    Dialog *subwin=new Dialog(this);
    subwin->show();
}

void Widget::on_pushButton_2_clicked()
{
    unsigned long long num=0;
    double v2=ui->lineEdit->text().toDouble();
    num=*((unsigned long long*)&v2);
    hexValue=QString::number(num,16).toUpper();
    Dialog *subwin=new Dialog(this);
    subwin->show();
}
