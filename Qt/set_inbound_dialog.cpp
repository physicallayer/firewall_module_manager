#include "set_inbound_dialog.h"
#include "ui_set_inbound_dialog.h"

set_Inbound_Dialog::set_Inbound_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set_Inbound_Dialog)
{
    ui->setupUi(this);
}

set_Inbound_Dialog::~set_Inbound_Dialog()
{
    delete ui;
}

void set_Inbound_Dialog::on_pushButton_clicked()
{
    FILE* fp = NULL; int a = 0; int count = 0; int count_all = 0;
    if((fp = fopen("./in.rule", "a+")) == NULL){
        ED = new error_Dialog(this);
        ED->show();
        perror("FILE in.rule open ERROR");
        exit(0);
    }

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* interface = (char*)malloc(20);
    if(interface == NULL){
        perror("MALLOC ERROR in interface");
        exit(0);
    }
    QString str1 = ui->lineEdit->text();
    if(str1 != NULL){
        sprintf(interface, "%s", (const char *)str1.toStdString().c_str());
        if((a = strlen(interface)) > 18){
            ui->label->setText("OFB");
            count++;
        }
        fputs(interface, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* protocol = (char*)malloc(20);
    if(protocol == NULL){
        perror("MALLOC ERROR in protocol");
        exit(0);
    }
    QString str2 = ui->lineEdit_2->text();
    if(str2 != NULL){
        sprintf(protocol, "%s", (const char *)str2.toStdString().c_str());
        if((a = strlen(protocol)) > 18){
            ui->label_2->setText("OFB");
            count++;
        }
        fputs(protocol, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* sip = (char*)malloc(20);
    if(sip == NULL){
        perror("MALLOC ERROR in sip");
        exit(0);
    }
    QString str3 = ui->lineEdit_3->text();
    if(str3 != NULL){
        sprintf(sip, "%s", (const char *)str3.toStdString().c_str());
        if((a = strlen(sip)) > 18){
            ui->label_3->setText("OFB");
            count++;
        }
        fputs(sip, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* sport = (char*)malloc(20);
    if(sport == NULL){
        perror("MALLOC ERROR in sport");
        exit(0);
    }
    QString str4 = ui->lineEdit_4->text();
    if(str4 != NULL){
        sprintf(sport, "%s", (const char *)str4.toStdString().c_str());
        if((a = strlen(sport)) > 18){
            ui->label_4->setText("OFB");
            count++;
        }
        fputs(sport, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* dip = (char*)malloc(20);
    if(dip == NULL){
        perror("MALLOC ERROR in dip");
        exit(0);
    }
    QString str5 = ui->lineEdit_5->text();
    if(str5 != NULL){
        sprintf(dip, "%s", (const char *)str5.toStdString().c_str());
        if((a = strlen(dip)) > 18){
            ui->label_5->setText("OFB");
            count++;
        }
        fputs(dip, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* dport = (char*)malloc(20);
    if(dport == NULL){
        perror("MALLOC ERROR in dport");
        exit(0);
    }
    QString str6 = ui->lineEdit_6->text();
    if(str6 != NULL){
        sprintf(dport, "%s", (const char *)str6.toStdString().c_str());
        if((a = strlen(dport)) > 18){
            ui->label_6->setText("OFB");
            count++;
        }
        fputs(dport, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* policy = (char*)malloc(20);
    if(policy == NULL){
        perror("MALLOC ERROR in policy");
        exit(0);
    }
    QString str7 = ui->lineEdit_7->text();
    if(str7 != NULL){
        sprintf(policy, "%s", (const char *)str7.toStdString().c_str());
        if((a = strlen(policy)) > 18){
            ui->label_7->setText("OFB");
            count++;
        }
        fputs(policy, fp); fputs(" ", fp);
        count_all++;
    }
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    if((count > 1) || (count_all != 7)){
        ED = new error_Dialog(this);
        ED->show();
    }
    else if(count_all == 7){
        fputs("\n", fp);
        fclose(fp);
        close();
    }
}
