#include "set_outbound_dialog.h"
#include "ui_set_outbound_dialog.h"

set_Outbound_Dialog::set_Outbound_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set_Outbound_Dialog)
{
    ui->setupUi(this);
}

set_Outbound_Dialog::~set_Outbound_Dialog()
{
    delete ui;
}

void set_Outbound_Dialog::on_pushButton_clicked()
{
    FILE* fp = NULL; int a = 0; int count = 0;
    if((fp = fopen("/etc/firewall/out.rule", "a+")) == NULL){
        ED = new error_Dialog(this);
        ED->show();
        perror("FILE out.rule open ERROR");
        exit(0);
    }

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* interface = (char*)malloc(20);
    if(interface == NULL){
        perror("MALLOC ERROR in interface");
        exit(0);
    }
    QString str1 = ui->lineEdit->text();
    sprintf(interface, "%s", (const char *)str1.toStdString().c_str());

    if((a = strlen(interface)) > 20){
        ui->label->setText("OFB");
        count++;
    }
    fputs(interface, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* protocol = (char*)malloc(20);
    if(protocol == NULL){
        perror("MALLOC ERROR in protocol");
        exit(0);
    }
    QString str2 = ui->lineEdit_2->text();
    sprintf(protocol, "%s", (const char *)str2.toStdString().c_str());
    if((a = strlen(protocol)) > 20){
        ui->label_2->setText("OFB");
        count++;
    }
    fputs(protocol, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* sip = (char*)malloc(20);
    if(sip == NULL){
        perror("MALLOC ERROR in sip");
        exit(0);
    }
    QString str3 = ui->lineEdit_3->text();
    sprintf(sip, "%s", (const char *)str3.toStdString().c_str());
    if((a = strlen(sip)) > 20){
        ui->label_3->setText("OFB");
        count++;
    }
    fputs(sip, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* sport = (char*)malloc(20);
    if(sport == NULL){
        perror("MALLOC ERROR in sport");
        exit(0);
    }
    QString str4 = ui->lineEdit_4->text();
    sprintf(sport, "%s", (const char *)str4.toStdString().c_str());
    if((a = strlen(sport)) > 20){
        ui->label_4->setText("OFB");
        count++;
    }
    fputs(sport, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* dip = (char*)malloc(20);
    if(dip == NULL){
        perror("MALLOC ERROR in dip");
        exit(0);
    }
    QString str5 = ui->lineEdit_5->text();
    sprintf(dip, "%s", (const char *)str5.toStdString().c_str());
    if((a = strlen(dip)) > 20){
        ui->label_5->setText("OFB");
        count++;
    }
    fputs(dip, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* dport = (char*)malloc(20);
    if(dport == NULL){
        perror("MALLOC ERROR in dport");
        exit(0);
    }
    QString str6 = ui->lineEdit_6->text();
    sprintf(dport, "%s", (const char *)str6.toStdString().c_str());
    if((a = strlen(dport)) > 20){
        ui->label_6->setText("OFB");
        count++;
    }
    fputs(dport, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    char* policy = (char*)malloc(20);
    if(policy == NULL){
        perror("MALLOC ERROR in policy");
        exit(0);
    }
    QString str7 = ui->lineEdit_7->text();
    sprintf(policy, "%s", (const char *)str7.toStdString().c_str());
    if((a = strlen(policy)) > 20){
        ui->label_7->setText("OFB");
        count++;
    }
    fputs(policy, fp); fputs(" ", fp);
    // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    if(count > 1){
        ED = new error_Dialog(this);
        ED->show();
    }
    else{
        fputs("\n", fp);
        fclose(fp);
        close();
    }
}
