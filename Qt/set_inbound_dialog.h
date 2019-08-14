#ifndef SET_INBOUND_DIALOG_H
#define SET_INBOUND_DIALOG_H

#pragma once
#include <QDialog>
#include <QString>
#include "error_dialog.h"

namespace Ui {
class set_Inbound_Dialog;
}

class set_Inbound_Dialog : public QDialog
{
    Q_OBJECT
    error_Dialog* ED;

public:
    explicit set_Inbound_Dialog(QWidget *parent = 0);
    ~set_Inbound_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::set_Inbound_Dialog *ui;
};

#endif // SET_INBOUND_DIALOG_H
