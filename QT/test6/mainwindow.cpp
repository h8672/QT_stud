#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
#include <QToolButton>
#include <QLabel>
#include <QMenuBar>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createStatusBar(){
    statusBar()->showMessage("Ready?");
    //statusBar()->hide();
}

void MainWindow::createToolBar(){
    //Create toolbar
    QToolBar *bar = new QToolBar("Toolbar");

    //Add label to toolbar
    QLabel *lbl = new QLabel("It's a label!");
    bar->addWidget(lbl);

    //Add button to toolbar
    QToolButton *btn = new QToolButton();
    btn->setText("Hello");
    btn->setToolTip("First tooltip!");
    btn->setIcon(QIcon("pic.jpg"));

    //QSize size;
    //size.setHeight(500);
    //size.setWidth(200);
    //btn->setIconSize(size);
    bar->addWidget(btn);

    //Add toolbar to window
    addToolBar(bar);

}

void MainWindow::createMenuBar(){
    //Käytä vanhaa menua
    QMenuBar *menuu = menuBar();
    //Make new menubar...
    //QMenuBar *menuu = new QMenuBar(this);
    //menuu->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

    QMenu *menuni = new QMenu();
    menuni->setTitle("Test from code");

    //Action eli toinen valinta menu ikkunaan
    menuni->addAction("test froom code");

    //Tekee actionin menuun, joka vastaa väliotsikkoa valinnoissa
    //Näkyy vain jos menu->show()
    menuni->addSection("test section from code");

    menuni->addAction("test froom code2");
    menuu->addMenu(menuni);

    menuni = new QMenu();
    menuni->setTitle("Test from code2");
    menuni->addAction("test froom code3");
    menuni->addAction("test froom code4");
    menuni->addAction("test froom code5");
    menuni->addAction("test froom code6");
    menuni->addAction("test froom code7");
    menuni->addAction("test froom code8");
    menuu->addMenu(menuni);

    //Näyttää toolbarin päällä menun, josta tulee droplista
    menuu->show();
    //menuu->showNormal();
    //menuu->setWindowTitle("umm...");
    setMenuBar(menuu);
}

void MainWindow::StatusBarText(QString text){
    statusBar()->showMessage(text);
}
