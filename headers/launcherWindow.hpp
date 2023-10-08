#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class LauncherWindow : public QMainWindow
{
    Q_OBJECT

public:
    LauncherWindow(QWidget *parent = nullptr);
    ~LauncherWindow();
    int showInit(QString showInitOutput = "Window initialized");
    void initMWButton();
    
private slots:
    void on_closeButton_released();

    void on_newPrjButton_released();

private:
    Ui::MainWindow *ui;
    
};
#endif // MAINWINDOW_H
