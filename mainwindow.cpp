#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameboard.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gameboard Board;

}

MainWindow::~MainWindow()
{
    delete ui;
}
