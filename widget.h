#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>
#include<QString>
#include<QMessageBox>
#include<QComboBox>
#include<QStringList>



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
private:
    QLabel*lbl;
    QCheckBox*cb1;
    QCheckBox*cb2;
    QPushButton*ok;
    QPushButton*close;
    QLineEdit*line;


    private slots:
       void okclicked();
        void TextChange(QString str);

signals:
        void UpperRegister(QString str);
        void Invers(QString str);
        void Simple(QString str);
        void UppRegInver(QString str);
public:
    ~Widget();
};
class str:public QObject
{
  Q_OBJECT
public slots:
    void Simple(QString str)
    {
      QMessageBox msg;
      msg.setText(str);
      msg.exec();
    }
    void Invers(QString str)
    {
        QString res=str;
        for(int i=str.size(),j=0;i>=0;--i,++j)
        {
            res[j]=str[i];
        }
        QMessageBox msg;
        msg.setText(res);
        msg.exec();
    }
    void UpperRistr(QString str)
    {
           str=str.toUpper();

        QMessageBox msg;
        msg.setText(str);
        msg.exec();
    }
    void UppRegInver(QString str)
    {
      QString res=str;

      for(int i=str.size(),j=0;i>=0;--i,++j)
      {
          res[j]=str[i];

      }
 res=res.toUpper();
      QMessageBox msg;
      msg.setText(res);
      msg.exec();
    }
};


#endif // WIDGET_H
