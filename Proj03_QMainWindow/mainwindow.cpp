#include "mainwindow.h"
#include <QMenuBar>
#include <QDebug>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600, 400);

    QMenuBar* bar = menuBar();
    setMenuBar(bar);
    bar->setNativeMenuBar(false); //macOS
    QMenu* fileMenu = bar->addMenu("File");
    QMenu* editMenu = bar->addMenu("Edit");

    QAction* newAction = fileMenu->addAction("New");

    fileMenu->addAction("New");
    fileMenu->addSeparator();
    fileMenu->addAction("Open");

    qDebug() << "aaa";

    QToolBar* toolBar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea, toolBar); //Qt::枚举值
    toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    toolBar->setFloatable(false);


}

MainWindow::~MainWindow()
{
}

