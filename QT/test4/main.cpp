//#include <QtCore>
#include <QApplication>
#include <QQmlApplicationEngine>

//#include <QWebEngineView>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    //MainWindow window;
    //window.show();
    //QWebEngineView *view = new QWebEngineView(parent);
    //view->load(QUrl("http://www.qt.io/"));
    //view->show();


    return app.exec();
}
