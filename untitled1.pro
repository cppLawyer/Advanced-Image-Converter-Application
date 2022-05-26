QT += core gui
# the binary's .pro

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = AdvancedImageConverter
RC_ICONS = icon.ico
CONFIG += c++20
VERSION = 3.0.0
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += C:\Users\Abdel\Desktop\OwnSoftware\depend32bit\include
LIBS += "C:\Users\Abdel\Desktop\OwnSoftware\depend32bit\*.lib"


SOURCES += \
    main.cpp \
    mainwindow.cpp\

HEADERS += \
   mainwindow.h\

FORMS += \
    mainwindow.ui \

