#include "widget.h"
#include "ui_widget.h"
#include "dialog.h"
#include "math.h"
#include "QMessageBox"

QString str;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

double ppi_rgb(double a,double b,double c)
{
    return (sqrt(pow(a,2)+pow(b,2)))/c;
}

double ppi_pentile(double a,double b,double c)
{

    return sqrt((2*pow(a,2)+2*pow(b,2))/3)/c;
}

void Widget::on_pushButton_clicked()
{
    double v1=ui->comboBox->currentText().toDouble();
    double v2=ui->comboBox_2->currentText().toDouble();
    double v3=ui->doubleSpinBox->value();
    if(v3<3){
            QMessageBox msg;
            msg.setText("请输入有效的屏幕分辨率和大小数字");
            msg.setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
            msg.setDefaultButton(QMessageBox::Cancel);
            msg.exec();
        }else{
    double v4=ppi_rgb(v1,v2,v3);
    str=QString::number(v4,'f',0);
    Dialog *subwin=new Dialog(this);
    subwin->show();
    }
}

void Widget::on_pushButton_2_clicked()
{
    double v1=ui->comboBox->currentText().toDouble();
    double v2=ui->comboBox_2->currentText().toDouble();
    double v3=ui->doubleSpinBox->value();
    if(v3<3){
            QMessageBox msg;
            msg.setText("请输入有效的屏幕分辨率和大小数字");
            msg.setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
            msg.setDefaultButton(QMessageBox::Cancel);
            msg.exec();
        }else{
    double v4=ppi_pentile(v1,v2,v3);
    str=QString::number(v4,'f',0);
    Dialog *subwin=new Dialog(this);
    subwin->show();
    }
}
