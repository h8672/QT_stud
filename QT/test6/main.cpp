#include "mainwindow.h"
#include <QApplication>
#include <QStatusBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.createStatusBar();
    //status.showMessage(tr("Ready?"));
    w.show();
    return a.exec();
}
