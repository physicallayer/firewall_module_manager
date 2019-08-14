/********************************************************************************
** Form generated from reading UI file 'log_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_DIALOG_H
#define UI_LOG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Log_Dialog
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *Log_Dialog)
    {
        if (Log_Dialog->objectName().isEmpty())
            Log_Dialog->setObjectName(QStringLiteral("Log_Dialog"));
        Log_Dialog->resize(601, 441);
        listWidget = new QListWidget(Log_Dialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(15, 11, 571, 421));

        retranslateUi(Log_Dialog);

        QMetaObject::connectSlotsByName(Log_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Log_Dialog)
    {
        Log_Dialog->setWindowTitle(QApplication::translate("Log_Dialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Log_Dialog: public Ui_Log_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_DIALOG_H
