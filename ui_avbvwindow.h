/********************************************************************************
** Form generated from reading UI file 'avbvwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVBVWINDOW_H
#define UI_AVBVWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_avbvWindow
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *avNum;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *bvNum;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_start;
    QPushButton *pushButton_CE;
    QPushButton *pushButton_back;

    void setupUi(QWidget *avbvWindow)
    {
        if (avbvWindow->objectName().isEmpty())
            avbvWindow->setObjectName(QString::fromUtf8("avbvWindow"));
        avbvWindow->resize(400, 300);
        widget = new QWidget(avbvWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 40, 401, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        avNum = new QLineEdit(widget);
        avNum->setObjectName(QString::fromUtf8("avNum"));

        horizontalLayout->addWidget(avNum);

        widget_2 = new QWidget(avbvWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 100, 401, 61));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        bvNum = new QLineEdit(widget_2);
        bvNum->setObjectName(QString::fromUtf8("bvNum"));

        horizontalLayout_2->addWidget(bvNum);

        label_3 = new QLabel(avbvWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 10, 51, 20));
        widget_3 = new QWidget(avbvWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 180, 401, 51));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_start = new QPushButton(widget_3);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));

        horizontalLayout_3->addWidget(pushButton_start);

        pushButton_CE = new QPushButton(widget_3);
        pushButton_CE->setObjectName(QString::fromUtf8("pushButton_CE"));

        horizontalLayout_3->addWidget(pushButton_CE);

        pushButton_back = new QPushButton(widget_3);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout_3->addWidget(pushButton_back);


        retranslateUi(avbvWindow);

        QMetaObject::connectSlotsByName(avbvWindow);
    } // setupUi

    void retranslateUi(QWidget *avbvWindow)
    {
        avbvWindow->setWindowTitle(QCoreApplication::translate("avbvWindow", "av bv \350\275\254\346\215\242", nullptr));
        label->setText(QCoreApplication::translate("avbvWindow", " AV\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("avbvWindow", "BV\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("avbvWindow", "\350\275\254\346\215\242\345\231\250", nullptr));
        pushButton_start->setText(QCoreApplication::translate("avbvWindow", "Start!", nullptr));
        pushButton_CE->setText(QCoreApplication::translate("avbvWindow", "CE", nullptr));
        pushButton_back->setText(QCoreApplication::translate("avbvWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class avbvWindow: public Ui_avbvWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVBVWINDOW_H
