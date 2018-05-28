#include "dialog.h"
#include "ui_dialog.h"
#include "widget.h"
extern QString str;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lineEdit->setText(str);
}

Dialog::~Dialog()
{
    delete ui;
}
