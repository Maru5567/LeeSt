/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNum;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbCoke;
    QPushButton *pbReset;
    QPushButton *pbTea;
    QPushButton *pbCoffee;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(542, 604);
        lcdNum = new QLCDNumber(Widget);
        lcdNum->setObjectName(QString::fromUtf8("lcdNum"));
        lcdNum->setGeometry(QRect(10, 0, 521, 191));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(20, 220, 161, 51));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(20, 280, 161, 51));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(20, 340, 161, 51));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(20, 400, 161, 51));
        pbCoke = new QPushButton(Widget);
        pbCoke->setObjectName(QString::fromUtf8("pbCoke"));
        pbCoke->setGeometry(QRect(290, 450, 191, 101));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        pbReset->setGeometry(QRect(20, 500, 161, 91));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));
        pbTea->setGeometry(QRect(290, 340, 191, 101));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setGeometry(QRect(290, 230, 191, 101));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbCoke->setText(QCoreApplication::translate("Widget", "Coke", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tea", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
