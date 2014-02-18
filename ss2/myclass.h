#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
    Q_OBJECT

    public:
        explicit MyClass(QObject *parent = 0);

    signals:
        void someSignal(int count);

    public slots:
        void aSlot();

    private slots:
        void emitter();

    private:
        int count;
};

#endif // MYCLASS_H
