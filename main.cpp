#include "widget.h"
#include <QApplication>
#include "mydialog.h"
#include "widget.h"
#include "ui_widget.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDialog w;
    w.show();





    return a.exec();
}
