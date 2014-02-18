/* Compile with:
 * mkdir build && cd build && qmake .. && make
 */

#include <QCoreApplication>
#include <QTimer>
#include <QDebug>

void func_slot()
{
    qDebug() << "This is a function that can be used as a slot";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer t1;
    QTimer t2;

    t1.setInterval(2000);
    t1.start();
    QObject::connect(&t1, &QTimer::timeout, func_slot);

    t2.setInterval(5000);
    t2.start();
    t2.connect(&t2, &QTimer::timeout, &a, &QCoreApplication::quit);

    return a.exec();
}
