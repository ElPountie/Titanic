#include "Titanic.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Titanic w;
    w.show();
    return a.exec();
}
