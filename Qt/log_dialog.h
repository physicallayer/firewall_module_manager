#pragma once
#ifndef LOG_DIALOG_H
#define LOG_DIALOG_H

#include <QDialog>

#include <stdio.h>
#include <stdlib.h>
#include "error_dialog.h"

#define BUF_MAX_SIZE 100

namespace Ui {
class Log_Dialog;
}

class Log_Dialog : public QDialog
{
    Q_OBJECT
    error_Dialog* ED;

public:
    explicit Log_Dialog(QWidget *parent = 0);
    ~Log_Dialog();

private slots:

private:
    Ui::Log_Dialog *ui;
};

#endif // LOG_DIALOG_H
