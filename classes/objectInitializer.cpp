#include "../headers/objectInitializer.hpp"

#include <QFile>
#include <QString>
#include <QDebug>



ObjectInitializer::ObjectInitializer()
{
    readStyleSheet(QFile("deltaStyleSheet.qss"));

    QFile File("");
    if (File.exists()){
        qDebug() << "file exists";
    } else {qDebug() << "file doesnt exist";}
    File.open(QFile::ReadOnly);
    QString FileString = QLatin1String(File.readAll());
    qDebug() << FileString;

    //"C:\Users\Clean\Documents\C++Projekte\DeltaAPPM-QT\resources\stylesheets\deltaStyleSheet.qss"
}

void ObjectInitializer::buttonInit(QAbstractButton *buttonToInit, bool enabled)
{
    buttonToInit->setEnabled(enabled);
    buttonToInit->setToolTip(buttonToInit->objectName());
    buttonToInit->setCursor(Qt::OpenHandCursor);
    buttonToInit->setStyleSheet(styleSheetString);
}

void ObjectInitializer::launcherButtonInit(QPushButton *buttonToInit, int width, int height, QString text, bool enabled)
{
    this->buttonInit(buttonToInit, enabled);
    buttonToInit->setFixedWidth(width);
    buttonToInit->setFixedHeight(height);
    buttonToInit->setText(text);
}

void ObjectInitializer::readStyleSheet(QFile styleSheet)
{
    styleSheet.open(QFile::ReadWrite);
    styleSheetString = QLatin1String(styleSheet.readAll());
}

QString ObjectInitializer::getStyleSheetString() const
{
    return styleSheetString;
}


