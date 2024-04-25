#include "dialog.h"
#include "ui_dialog.h"

extern QString hexValue;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText(tr("IEEE754格式为:0x%1").arg(hexValue));
}

Dialog::~Dialog()
{
    delete ui;
}
