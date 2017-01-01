#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    str*s=new str;
    QObject::connect(&w,SIGNAL(Simple(QString)),s,SLOT(Simple(QString)));
    QObject::connect(&w,SIGNAL(Invers(QString)),s,SLOT(Invers(QString)));
    QObject::connect(&w,SIGNAL(UpperRegister(QString)),s,SLOT(UpperRistr(QString)));
    QObject::connect(&w,SIGNAL(UppRegInver(QString)), s,SLOT(UppRegInver(QString)));

    return a.exec();
}
