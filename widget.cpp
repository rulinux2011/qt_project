#include "widget.h"
#include "ui_widget.h"
#include "mydialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyDialog *m=new MyDialog;
    connect(m,SIGNAL(dlgReturn(int)),this,SLOT(showValue(int)));
    m->show();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showValue(int value){
    ui->label->setText(tr("获取的信息是：%1").arg(value));
}
