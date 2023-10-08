#include "../headers/launcherWindow.hpp"
#include "../headers/functions.hpp"
#include "../headers/globalVariables.hpp"
#include "headers/objectInitializer.hpp"



#include <QApplication>
#include <QLocale>
#include <QTranslator>

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



    //VAR

    //launcherWindow Init
    LauncherWindow launcherWindow;
    launcherWindow.showInit();

    //launcherWindow Buttons Init
    launcherWindow.initMWButton();


    //DEBUG FILESHIT
    QFile file2(QCoreApplication::applicationDirPath() + "test.txt");
    QFile File("test.txt");
    if (file2.exists()){
        qDebug() << "file exists2";
    } else {qDebug() << "file doesnt exist2";}
    file2.open(QFile::ReadOnly);
    QString FileString = QLatin1String(file2.readAll());
    qDebug() << FileString;







    return appApplication.exec();
}
