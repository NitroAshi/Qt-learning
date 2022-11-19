#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPushButton>
#include "mypushbutton.h"

mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mywidget)
{
    ui->setupUi(this);
//    QPushButton * btn = new QPushButton;
////    btn->show();

//    btn->setParent(this);
//    btn->setText("1st-btn");

    QPushButton* btn2 = new QPushButton("2nd-btn", this);
    btn2->move(100, 100);

//    resize(600, 400);
    setFixedSize(600, 400);
    setWindowTitle("1st_title");

    MyPushButton* myBtn = new MyPushButton;
    myBtn->setText("my_btn");
    myBtn->move(200, 0);
    myBtn->setParent(this);

//    connect(myBtn, &MyPushButton::clicked, this, &mywidget::close);
    connect(myBtn, &QPushButton::clicked, this, &QWidget::close);

}

mywidget::~mywidget()
{
    delete ui;
}

