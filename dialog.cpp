#include "dialog.h"
#include "ui_dialog.h"
#include "widget.h"

extern QString str;
Dialog::Dialog(Ui::Widget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText(tr("PPI数值是：%1").arg(str));
    ui->lcdNumber->display(str);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    close();
    //Widget *w=new Widget;
    //w->show();
}
