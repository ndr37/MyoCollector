#include "myodata.h"
#include <QApplication>
#include "qcustomplot.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myodata w;
    w.show();

    return a.exec();
}
