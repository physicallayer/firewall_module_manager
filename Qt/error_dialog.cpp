#include "error_dialog.h"
#include "ui_error_dialog.h"

error_Dialog::error_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::error_Dialog)
{
    ui->setupUi(this);
}

error_Dialog::~error_Dialog()
{
    delete ui;
}

void error_Dialog::on_pushButton_clicked()
{
    close();
}
