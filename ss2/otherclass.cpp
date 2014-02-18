#include "otherclass.h"
#include <QDebug>
#include <QCoreApplication>

OtherClass::OtherClass(QCoreApplication *app) : QObject(0)
{
    this->app = app;
    connect(this, &OtherClass::otherSignal, this, &OtherClass::printCount);
}

void OtherClass::printCount(int c)
{
    qDebug() << "Count is" << c;
    if (c > 5)
        app->quit();
}
