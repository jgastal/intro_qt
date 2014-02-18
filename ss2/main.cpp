/* Compile with:
 * mkdir build && cd build && qmake .. && make
 */

#include <QCoreApplication>
#include <QTimer>
#include "myclass.h"
#include "otherclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyClass mc;
    OtherClass oc(&a);
    QTimer t1;

    t1.setInterval(3000);
    t1.start();
    QObject::connect(&t1, &QTimer::timeout, &mc, &MyClass::aSlot);

    oc.connect(&mc, &MyClass::someSignal, &oc, &OtherClass::otherSignal);

    return a.exec();
}

