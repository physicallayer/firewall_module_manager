#include "log_dialog.h"
#include "ui_log_dialog.h"

Log_Dialog::Log_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Log_Dialog)
{
    ui->setupUi(this);
    FILE* fp = NULL;
    char buf[BUF_MAX_SIZE] = {0, };
    char* str;
    int row = 0;
    QString qstr;
    fp = fopen("./log.txt", "r");
    if(fp == NULL){
        perror("File Open ERROR!");
        close();
    }
    while((str = fgets(buf, sizeof(buf), fp)) != NULL){
        qstr = QString(buf);
        ui->listWidget->insertItem(row, qstr);
    }

    fclose(fp);
    ui->listWidget->show();
}

Log_Dialog::~Log_Dialog()
{
    delete ui;
}
