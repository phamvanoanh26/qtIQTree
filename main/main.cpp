#include "testqt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testQT w;
    w.show();
    return a.exec();
}
