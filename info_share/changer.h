#ifndef CHANGER_H
#define CHANGER_H

#include <QQuickItem>

class Changer : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString color MEMBER _color NOTIFY colorChanged)

    public:
        explicit Changer(QQuickItem *parent = 0);

    signals:
        void colorChanged(QString newColor);

    private slots:
        void changeColor();

    private:
        QString _color;
};

#endif // CHANGER_H
