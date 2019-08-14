#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pb_getRule_clicked()
{
    ui->list_Rule->clear();
    FILE* fp = NULL;
    char buf[BUF_MAX_SIZE] = {0, };
    char* str;
    int row = 0;
    QString qstr;
    fp = fopen("./inbound.txt", "r");
    if(fp == NULL){
        perror("File Open ERROR!");
        exit(0);
    }
    while((str = fgets(buf, sizeof(buf), fp)) != NULL){
        qstr = QString(buf);
        ui->list_Rule->insertItem(row, qstr);
    }

    fclose(fp);
}

void Widget::on_pb_setRule_clicked()
{
    FILE* fp = NULL;
    QString str;
    fp = fopen("./inbound.txt", "a");
    if(fp == NULL){
        perror("File Open ERROR!");
        exit(0);
    }
    str = ui->line_Rule->text();
    fprintf(fp, "%s\n", (const char *)str.toStdString().c_str());
    fclose(fp);
}

void Widget::on_pb_clear_clicked()
{
    ui->list_Rule->clear();
}

void Widget::on_pb_getLog_clicked()
{
    logD = new Log_Dialog(this);
    logD->show();
}

void Widget::on_pb_getRule_2_clicked()
{
    ui->list_Rule2->clear();
    FILE* fp = NULL;
    char buf[BUF_MAX_SIZE] = {0, };
    char* str;
    int row = 0;
    QString qstr;
    fp = fopen("./outbound.txt", "r");
    if(fp == NULL){
        perror("File Open ERROR!");
        exit(0);
    }
    while((str = fgets(buf, sizeof(buf), fp)) != NULL){
        qstr = QString(buf);
        ui->list_Rule2->insertItem(row, qstr);
    }

    fclose(fp);
}

void Widget::on_pb_setRule_2_clicked()
{
    FILE* fp = NULL;
    QString str;
    fp = fopen("./outbound.txt", "a");
    if(fp == NULL){
        perror("File Open ERROR!");
        exit(0);
    }
    str = ui->line_Rule2->text();
    fprintf(fp, "%s\n", (const char *)str.toStdString().c_str());
    fclose(fp);
}

void Widget::on_pb_clear_2_clicked()
{
    ui->list_Rule2->clear();
}
