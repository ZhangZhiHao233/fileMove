#include "fileMove.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fileMove w;
    w.show();
    return a.exec();
}
