#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QTextCodec>
#include <QString>
#include <QLineEdit>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
