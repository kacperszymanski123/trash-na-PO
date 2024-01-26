#include "select.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    select w;
    w.show();
    return a.exec();
}
