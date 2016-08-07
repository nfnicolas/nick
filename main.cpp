#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include"brains.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QObject* root=engine.rootObjects()[0];
    Brains *brains=new Brains(root);

    QObject::connect(root,SIGNAL(addition()),brains,SLOT(Addition()));

    return app.exec();
}

