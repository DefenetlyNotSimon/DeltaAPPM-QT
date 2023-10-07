QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    $$PWD/source/main.cpp \
    $$PWD/interface/mainwindow.cpp \
    $$PWD/functions/functions.cpp \
    $$PWD/globalVariables/globalVariables.cpp

HEADERS += \
    $$PWD/headers/mainwindow.hpp \
    $$PWD/headers/functions.hpp \
    $$PWD/headers/globalVariables.hpp


FORMS += \
    $$PWD/forms/mainwindow.ui

TRANSLATIONS += \
    $$PWD/translations/DeltaAPPM-QT_de_DE.ts
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
    $$PWD/other/versionHistory.txt
