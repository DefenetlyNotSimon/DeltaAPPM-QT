#include "../headers/launcherWindow.hpp"
#include "headers/createprojectdialog.hpp"
#include "headers/functions.hpp"
#include "headers/objectInitializer.hpp"
#include "ui_launcherWindow.h"

#include <QDebug>


LauncherWindow::LauncherWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

int LauncherWindow::showInit(QString showInitOutput){
    show();
    qDebug() << showInitOutput;
    qDebug() << "Button Text1" << ui->closeButton->text();
    return 1;
}

void LauncherWindow::initMWButton()
{

    ObjectInitializer launcherInit;
    int launcherButtonWidth = 150;
    int launcherButtonHeight = 75;

    QPushButton *newPrjButton = ui->newPrjButton;
    QPushButton *openPrjButton = ui->openPrjButton;
    QPushButton *settingsButton = ui->settingsButton;
    QPushButton *closeButton = ui->closeButton;



    launcherInit.launcherButtonInit(newPrjButton,launcherButtonWidth,launcherButtonHeight, "New project");
    launcherInit.launcherButtonInit(openPrjButton,launcherButtonWidth,launcherButtonHeight, "Open project", false);
    launcherInit.launcherButtonInit(settingsButton,launcherButtonWidth,launcherButtonHeight, "Settings");
    launcherInit.launcherButtonInit(closeButton,launcherButtonWidth,launcherButtonHeight, "Close");
}

void LauncherWindow::on_closeButton_released()
{
    QApplication::quit();
}

void LauncherWindow::on_newPrjButton_released()
{
    openCreateWindow();
}



LauncherWindow::~LauncherWindow()
{
    delete ui;
}



