#include "destination.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    destination w;
    w.show();

    return a.exec();
}
