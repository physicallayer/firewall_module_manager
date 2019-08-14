/********************************************************************************
** Form generated from reading UI file 'error_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_DIALOG_H
#define UI_ERROR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_error_Dialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *error_Dialog)
    {
        if (error_Dialog->objectName().isEmpty())
            error_Dialog->setObjectName(QStringLiteral("error_Dialog"));
        error_Dialog->resize(413, 280);
        label = new QLabel(error_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 70, 121, 91));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(error_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 190, 101, 41));

        retranslateUi(error_Dialog);

        QMetaObject::connectSlotsByName(error_Dialog);
    } // setupUi

    void retranslateUi(QDialog *error_Dialog)
    {
        error_Dialog->setWindowTitle(QApplication::translate("error_Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("error_Dialog", "ERROR!", Q_NULLPTR));
        pushButton->setText(QApplication::translate("error_Dialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class error_Dialog: public Ui_error_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_DIALOG_H
