#include "mypushbutton.h"
#include <QDebug>
#include <iostream>

using namespace std;


MyPushButton::MyPushButton(QWidget *parent) /// ????why Qwidget, not QPushButton
    : QPushButton{parent}
{
    qDebug() << "constructor";
//    std::cout << "constructor" << std::endl;
}

MyPushButton::~MyPushButton()
{
    qDebug() << "destructor";
//    std::cout << "destructor" << std::endl;
}
