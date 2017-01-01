#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    lbl=new QLabel("&Enter");
    line=new QLineEdit;
    lbl->setBuddy(line);
    cb1=new QCheckBox("Upper register");
    cb2=new QCheckBox("Invers");
    ok=new QPushButton("OK");
    ok->setEnabled(false);
    close=new QPushButton("exit");


    QHBoxLayout*layout=new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);

    QVBoxLayout*right=new QVBoxLayout;
    right->addLayout(layout);
    right->addWidget(cb1);
    right->addWidget(cb2);

    QVBoxLayout*left=new QVBoxLayout;
    left->addWidget(ok);
    left->addWidget(close);

    QHBoxLayout*major=new QHBoxLayout;
    major->addLayout(right);
    major->addLayout(left);


    connect(close,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(line,SIGNAL(textChanged(QString)),this,SLOT(TextChange(QString)));
    connect(ok,SIGNAL(clicked()),this,SLOT(okclicked()));

    setLayout(major);
    setWindowTitle("App");
}

void Widget::okclicked()
{
    if(!cb1->isChecked()&&!cb2->isChecked())  //output strng
        emit Simple(line->text());
   if(cb1->isChecked()&&!cb2->isChecked())   //output Upp Registr
       emit UpperRegister(line->text());
   if(cb2->isChecked()&&!cb1->isChecked())  //output
       emit Invers(line->text());

   if(cb1->isChecked()&&cb2->isChecked())  //output All
       emit UppRegInver(line->text());
}

void Widget::TextChange(QString str)
{
   ok->setEnabled(!str.isEmpty()); //call connect #2


}

Widget::~Widget()
{

}
