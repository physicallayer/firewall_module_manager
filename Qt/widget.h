#pragma once
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QString>

#include "log_dialog.h"
#include "set_inbound_dialog.h"
#include "set_outbound_dialog.h"

#include <stdio.h>
#include <stdlib.h>

#define BUF_MAX_SIZE 100

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    Log_Dialog* logD;
    set_Inbound_Dialog* inboundD;
    set_Outbound_Dialog* outboundD;

private slots:
    void on_pb_getRule_clicked();

    void on_pb_getLog_clicked();

    void on_pb_setRule_clicked();

    void on_pb_getRule_2_clicked();

    void on_pb_setRule_2_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
