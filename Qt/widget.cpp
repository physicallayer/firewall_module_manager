#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pb_load->setEnabled(false);
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
    fp = fopen("/etc/firewall/in.rule", "r");
    if(fp == NULL){
        perror("File Open ERROR!");
        ED = new error_Dialog(this);
        ED->show();
    }
    else{
        while((str = fgets(buf, sizeof(buf), fp)) != NULL){
            qstr = QString(buf);
            ui->list_Rule->insertItem(row, qstr);
        }
        ui->pb_load->setEnabled(true);
        fclose(fp);
    }
}

void Widget::on_pb_setRule_clicked()
{
    inboundD = new set_Inbound_Dialog(this);
    inboundD->show();
    isE = true;
}

void Widget::on_pb_getLog_clicked()
{
    FILE* fp = NULL;
    fp = fopen("/etc/firewall/pass.log", "r");
    if(fp == NULL){
        perror("File Open ERROR!");
    }
    else{
        logD = new Log_Dialog(this);
        logD->show();
    }
}

void Widget::on_pb_getRule_2_clicked()
{
    ui->list_Rule2->clear();
    FILE* fp = NULL;
    char buf[BUF_MAX_SIZE] = {0, };
    char* str;
    int row = 0;
    QString qstr;
    fp = fopen("/etc/firewall/out.rule", "r");
    if(fp == NULL){
        perror("File Open ERROR!");
        ED = new error_Dialog(this);
        ED->show();
    }
    else{
        while((str = fgets(buf, sizeof(buf), fp)) != NULL){
            qstr = QString(buf);
            ui->list_Rule2->insertItem(row, qstr);
        }
        ui->pb_load->setEnabled(true);
        fclose(fp);
    }
}

void Widget::on_pb_setRule_2_clicked()
{
   outboundD = new set_Outbound_Dialog(this);
   outboundD->show();
   isE = true;
}

void Widget::on_pb_load_clicked() // LOAD
{
    FILE* fp1 = NULL;
    if((fp1 = popen("sudo rmmod firewall.ko", "r")) == NULL){
        perror("ERROR rmmod firewall.ko");
        return ;
    }
    pclose(fp1);

    FILE* fp2 = NULL;
    if((fp2 = popen("sudo insmod firewall.ko", "r")) == NULL){
        perror("ERROR insmod firewall.ko");
        return ;
    }
    pclose(fp2);
    ui->pb_load->setEnabled(false);
}
