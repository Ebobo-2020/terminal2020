#include "mainwindow.h"
#include <QApplication>
#include "glavwindows.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GlavWindows w;
    w.show();

    return a.exec();
}
