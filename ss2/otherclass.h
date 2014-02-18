#ifndef OTHERCLASS_H
#define OTHERCLASS_H

#include <QObject>

class QCoreApplication;

class OtherClass : public QObject
{
    Q_OBJECT

    public:
        explicit OtherClass(QCoreApplication *app);

    signals:
        void otherSignal(int counting);

    private slots:
        void printCount(int c);

    private:
        QCoreApplication *app;
};

#endif // OTHERCLASS_H
