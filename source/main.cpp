#include "../headers/mainwindow.hpp"
#include "../headers/functions.hpp"
#include "../headers/globalVariables.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication appApplication(argc, argv);

    //Translation
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "DeltaAPPM-QT_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            appApplication.installTranslator(&translator);
            break;
        }
    }

    qDebug() << "Debug Message!" << iGlobalInt; //! Debug delete

    //MainWindow Init
    MainWindow mwWindow;
    mwWindow.showInit();

    return appApplication.exec();
}
