#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include "gameboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gameboard board;
    board.show();
    //MainWindow w;
    //w.show();
    return a.exec();
}
