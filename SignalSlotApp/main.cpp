#include <QApplication>

#include "mainwindow.h"

//created By Kurtvuran

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
