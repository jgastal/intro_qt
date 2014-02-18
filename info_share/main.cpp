#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "changer.h"

int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    qmlRegisterType<Changer>("Changer", 1, 0, "Changer");
    engine.load(QUrl("qrc:/qml/main.qml"));

    return app.exec();
}
