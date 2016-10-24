#include "mainwindow.h"
#include <QApplication>
#include <QStatusBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.createToolBar();
    //status.showMessage(tr("Ready?"));
    w.createStatusBar();
    //w.StatusBarText("Omg! it works!");
    //Tehdään tai lisätään vanhaan menuun objekteja
    w.createMenuBar();
    w.show();
    return a.exec();
}
