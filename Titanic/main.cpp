#include "Titanic.h"
#include "Data.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    Data *data = new Data();
    data->readFile("titanic.dbf");
    QApplication a(argc, argv);
    Titanic w(data);
    w.show();
    return a.exec();
}
