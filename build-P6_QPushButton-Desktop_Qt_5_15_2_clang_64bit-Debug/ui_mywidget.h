/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mywidget
{
public:

    void setupUi(QWidget *mywidget)
    {
        if (mywidget->objectName().isEmpty())
            mywidget->setObjectName(QString::fromUtf8("mywidget"));
        mywidget->resize(800, 600);

        retranslateUi(mywidget);

        QMetaObject::connectSlotsByName(mywidget);
    } // setupUi

    void retranslateUi(QWidget *mywidget)
    {
        mywidget->setWindowTitle(QCoreApplication::translate("mywidget", "mywidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mywidget: public Ui_mywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
