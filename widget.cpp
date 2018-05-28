#include "widget.h"
#include "ui_widget.h"
#include "mydialog.h"
//#include "QPushButton"

int value;

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

void Widget::on_pushButton_clicked()
{
    int value=ui->spinBox->value();
    //emit dlgReturn(value);

    MyDialog *mdl=new MyDialog();
    mdl->show();


}
