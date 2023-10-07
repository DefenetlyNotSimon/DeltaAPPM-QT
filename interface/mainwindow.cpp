#include "../headers/mainwindow.hpp"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

int MainWindow::showInit(QString showInitOutput){
    show();
    qDebug() << showInitOutput;
    return 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

