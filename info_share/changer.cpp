#include "changer.h"
#include <QTimer>
#include <ctime>

Changer::Changer(QQuickItem *parent) : QQuickItem(parent)
{
    QTimer *t = new QTimer(this);
    t->start(2000);
    connect(t, &QTimer::timeout, this, &Changer::changeColor);
    qsrand(time(NULL));
}

void Changer::changeColor()
{
    int r = qrand() % 256;
    int g = qrand() % 256;
    int b = qrand() % 256;

    _color = QString("#%1%2%3").arg(r, 0, 16).arg(g, 0, 16).arg(b, 0, 16);
    emit colorChanged(_color);
}
