#ifndef BRAINS_H
#define BRAINS_H

#include <QObject>
#include<QVariant>

class Brains : public QObject
{
    Q_OBJECT
public:
    explicit Brains(QObject *parent = 0);

signals:

public slots:
    void Addition();
};

#endif // BRAINS_H
