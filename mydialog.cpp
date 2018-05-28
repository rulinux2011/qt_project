#include "mydialog.h"
#include "ui_mydialog.h"
#include "widget.h"
#include "QPushButton"

extern int value;
MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{

    ui->setupUi(this);
    ui->label->setText(tr("获取的值是:").arg(value));
}

MyDialog::~MyDialog()
{
    delete ui;
}

/*

void MyDialog::showValue(int value){

    ui->label->setText(tr("获取的值是:").arg(value));
}

*/

