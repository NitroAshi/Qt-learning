#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <Qdebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->actionnew->setIcon(QIcon());
    connect(ui->actionnew, &QAction::triggered,[=](){
        QFileDialog::getOpenFileName(this, "Open File",
                                     "/Users/nitro/Dev/Qt/Qt-learning",
                                     "(*.md)");
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

