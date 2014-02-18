#include "myclass.h"
#include <QTimer>
#include <QDebug>

MyClass::MyClass(QObject *parent) : QObject(parent), count(0)
{
}

void MyClass::aSlot()
{
    qDebug() << "aSlot() ran";
    count++;
    QTimer::singleShot(500, this, SLOT(emitter()));
}

void MyClass::emitter()
{
    qDebug() << "emitter() ran";
    emit someSignal(count);
}
