/********************************************************************************
** Form generated from reading UI file 'set_outbound_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_OUTBOUND_DIALOG_H
#define UI_SET_OUTBOUND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_set_Outbound_Dialog
{
public:
    QLineEdit *lineEdit_7;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label_3;

    void setupUi(QDialog *set_Outbound_Dialog)
    {
        if (set_Outbound_Dialog->objectName().isEmpty())
            set_Outbound_Dialog->setObjectName(QStringLiteral("set_Outbound_Dialog"));
        set_Outbound_Dialog->resize(580, 652);
        lineEdit_7 = new QLineEdit(set_Outbound_Dialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 510, 411, 61));
        label = new QLabel(set_Outbound_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 81, 41));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_4 = new QLabel(set_Outbound_Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 280, 101, 41));
        label_4->setFont(font);
        label_7 = new QLabel(set_Outbound_Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 520, 61, 41));
        label_7->setFont(font);
        lineEdit_6 = new QLineEdit(set_Outbound_Dialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 430, 411, 61));
        lineEdit_2 = new QLineEdit(set_Outbound_Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 100, 411, 61));
        label_6 = new QLabel(set_Outbound_Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 440, 131, 41));
        QFont font1;
        font1.setPointSize(11);
        label_6->setFont(font1);
        lineEdit_3 = new QLineEdit(set_Outbound_Dialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 180, 411, 61));
        lineEdit_5 = new QLineEdit(set_Outbound_Dialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 350, 411, 61));
        label_2 = new QLabel(set_Outbound_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 81, 41));
        label_2->setFont(font);
        pushButton = new QPushButton(set_Outbound_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 590, 131, 51));
        pushButton->setFont(font);
        label_5 = new QLabel(set_Outbound_Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 360, 121, 41));
        label_5->setFont(font);
        lineEdit = new QLineEdit(set_Outbound_Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 411, 61));
        lineEdit_4 = new QLineEdit(set_Outbound_Dialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 270, 411, 61));
        label_3 = new QLabel(set_Outbound_Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 91, 41));
        label_3->setFont(font);

        retranslateUi(set_Outbound_Dialog);

        QMetaObject::connectSlotsByName(set_Outbound_Dialog);
    } // setupUi

    void retranslateUi(QDialog *set_Outbound_Dialog)
    {
        set_Outbound_Dialog->setWindowTitle(QApplication::translate("set_Outbound_Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("set_Outbound_Dialog", "Interface", Q_NULLPTR));
        label_4->setText(QApplication::translate("set_Outbound_Dialog", "Source Port", Q_NULLPTR));
        label_7->setText(QApplication::translate("set_Outbound_Dialog", "Policy", Q_NULLPTR));
        label_6->setText(QApplication::translate("set_Outbound_Dialog", "Destination Port", Q_NULLPTR));
        label_2->setText(QApplication::translate("set_Outbound_Dialog", "Protocol", Q_NULLPTR));
        pushButton->setText(QApplication::translate("set_Outbound_Dialog", "Submit", Q_NULLPTR));
        label_5->setText(QApplication::translate("set_Outbound_Dialog", "Destination IP", Q_NULLPTR));
        label_3->setText(QApplication::translate("set_Outbound_Dialog", "Source IP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class set_Outbound_Dialog: public Ui_set_Outbound_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_OUTBOUND_DIALOG_H
