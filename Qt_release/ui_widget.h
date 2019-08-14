/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pb_getRule;
    QPushButton *pb_setRule;
    QListWidget *list_Rule;
    QPushButton *pb_getLog;
    QListWidget *list_Rule2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pb_getRule_2;
    QPushButton *pb_setRule_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1165, 572);
        pb_getRule = new QPushButton(Widget);
        pb_getRule->setObjectName(QStringLiteral("pb_getRule"));
        pb_getRule->setGeometry(QRect(100, 480, 101, 61));
        QFont font;
        font.setPointSize(13);
        pb_getRule->setFont(font);
        pb_setRule = new QPushButton(Widget);
        pb_setRule->setObjectName(QStringLiteral("pb_setRule"));
        pb_setRule->setGeometry(QRect(300, 480, 101, 61));
        pb_setRule->setFont(font);
        list_Rule = new QListWidget(Widget);
        list_Rule->setObjectName(QStringLiteral("list_Rule"));
        list_Rule->setGeometry(QRect(10, 50, 491, 411));
        pb_getLog = new QPushButton(Widget);
        pb_getLog->setObjectName(QStringLiteral("pb_getLog"));
        pb_getLog->setGeometry(QRect(520, 220, 101, 51));
        QFont font1;
        font1.setPointSize(13);
        font1.setStrikeOut(false);
        pb_getLog->setFont(font1);
        pb_getLog->setMouseTracking(false);
        pb_getLog->setAutoFillBackground(false);
        pb_getLog->setStyleSheet(QStringLiteral(""));
        list_Rule2 = new QListWidget(Widget);
        list_Rule2->setObjectName(QStringLiteral("list_Rule2"));
        list_Rule2->setGeometry(QRect(640, 50, 511, 411));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 9, 111, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(840, 10, 131, 31));
        label_2->setFont(font2);
        pb_getRule_2 = new QPushButton(Widget);
        pb_getRule_2->setObjectName(QStringLiteral("pb_getRule_2"));
        pb_getRule_2->setGeometry(QRect(740, 490, 101, 61));
        pb_getRule_2->setFont(font);
        pb_setRule_2 = new QPushButton(Widget);
        pb_setRule_2->setObjectName(QStringLiteral("pb_setRule_2"));
        pb_setRule_2->setGeometry(QRect(940, 490, 101, 61));
        pb_setRule_2->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pb_getRule->setText(QApplication::translate("Widget", "GET Rule", Q_NULLPTR));
        pb_setRule->setText(QApplication::translate("Widget", "SET Rule", Q_NULLPTR));
        pb_getLog->setText(QApplication::translate("Widget", "GET LOG", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "INBOUND", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "OUTBOUND", Q_NULLPTR));
        pb_getRule_2->setText(QApplication::translate("Widget", "GET Rule", Q_NULLPTR));
        pb_setRule_2->setText(QApplication::translate("Widget", "SET Rule", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
