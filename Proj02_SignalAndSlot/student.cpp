#include "student.h"
#include <QDebug>

Student::Student(QObject *parent)
    : QObject{parent}
{

}

void Student::treat()
{
    qDebug() << "treat!";
}

void Student::treat(QString foodName)
{
    qDebug() << "treat_qstring:" << foodName.toUtf8().data();
}
