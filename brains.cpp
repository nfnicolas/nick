#include "brains.h"

Brains::Brains(QObject *parent) : QObject(parent)
{

}

void Brains::Addition()
{
    QObject*textinput1=this->parent()->findChild<QObject*>("textinput1");
    QObject*textinput2=this->parent()->findChild<QObject*>("textinput2");
    QObject*memo=this->parent()->findChild<QObject*>("memo");

    QString firstArgument=(textinput1->property("text")).toString();
    QString secondArgument=(textinput2->property("text")).toString();

    int firstArgument1=firstArgument.toInt();
    int secondArgument1=secondArgument.toInt();

    int resultNumber=firstArgument1+secondArgument1;

    QString result=QString::number(resultNumber);

    memo->setProperty("text",firstArgument+"+"+secondArgument+"="+result);

}

