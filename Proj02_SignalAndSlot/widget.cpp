#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->zt = new Teacher(this);  // ????
    this->st = new Student(this);

    this->resize(600, 400);

    QPushButton* btn = new QPushButton("Over", this);

//    void(Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
//    void(Student:: *studentSlot)(QString) = &Student::treat;
////    connect(zt, &Teacher::hungry, st, &Student::treat);
//    connect(zt, teacherSignal, st, studentSlot);
//    classIsOver();
//    connect(btn, &QPushButton::clicked, this, &Widget::classIsOver);


    void(Teacher:: *teacherSignal2)(void) = &Teacher::hungry;
    void(Student:: *studentSlot2)(void) = &Student::treat;
    connect(zt, teacherSignal2, st, studentSlot2);
    connect(btn, &QPushButton::clicked, zt, teacherSignal2);





}

void Widget::classIsOver()
{
//    emit zt->hungry();
    emit zt->hungry("Paper");
}

Widget::~Widget()
{
    delete ui;
}

