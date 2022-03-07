#include "mainwindow.h"
#include "Magick++.h"
#include <QDir>
#include <QApplication>

int main(int argc, char *argv[])
{

    Magick::InitializeMagick((QCoreApplication::applicationDirPath().toStdString()).c_str());
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
