#pragma once
#ifndef SET_OUTBOUND_DIALOG_H
#define SET_OUTBOUND_DIALOG_H

#include <QDialog>
#include <QString>
#include "error_dialog.h"

namespace Ui {
class set_Outbound_Dialog;
}

class set_Outbound_Dialog : public QDialog
{
    Q_OBJECT
    error_Dialog* ED;

public:
    explicit set_Outbound_Dialog(QWidget *parent = 0);
    ~set_Outbound_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::set_Outbound_Dialog *ui;
};

#endif // SET_OUTBOUND_DIALOG_H
