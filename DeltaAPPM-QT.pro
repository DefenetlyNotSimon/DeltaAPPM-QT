QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    $$PWD/source/main.cpp \
    $$PWD/source/launcherWindow.cpp \
    $$PWD/functions/functions.cpp \
    $$PWD/globalVariables/globalVariables.cpp \
    $$PWD/source/createprojectdialog.cpp \
    $$PWD/classes/objectInitializer.cpp \


HEADERS += \
    $$PWD/headers/launcherWindow.hpp \
    $$PWD/headers/functions.hpp \
    $$PWD/headers/globalVariables.hpp \
    $$PWD/headers/createprojectdialog.hpp \
    $$PWD/headers/objectInitializer.hpp


FORMS += \
    $$PWD/interface/launcherWindow.ui \
    $$PWD/interface/createprojectdialog.ui

TRANSLATIONS += \
    $$PWD/resources/translations/DeltaAPPM-QT_de_DE.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md \
    $$PWD/other/codingStyleConventions.txt \
    $$PWD/other/deltaPublicImage.txt \
    $$PWD/other/versionHistory.txt \
    $$PWD/other/colors \
    $$PWD/resources/deltaStyle.qss \
    $$PWD/resources/stylesheets/deltaStyleSheet.qss \
    $$PWD/classes/deltaStyleSheet.qss \
    $$PWD/classes/test.txt \
    source/test.txt \
    test.txt

RESOURCES += \
    $$PWD/resources/deltaResources.qrc
