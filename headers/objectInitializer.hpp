#pragma once
#include "qpushbutton.h"
#include <QFile>
#ifndef OBJECTINITIALIZER_H
#define OBJECTINITIALIZER_H


class ObjectInitializer
{
public:
    ObjectInitializer();
    void launcherButtonInit(QPushButton *buttonToInit, int width = 100, int height = 75, QString text = "noTextfound", bool enabled = true);


    QString getStyleSheetString() const;

private:

    QString styleSheetString;
    void readStyleSheet(QFile styleSheet); //Add Default
    void buttonInit(QAbstractButton *buttonToInit, bool enabled = true);

};

#endif // OBJECTINITIALIZER_H
