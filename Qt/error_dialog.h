#ifndef ERROR_DIALOG_H
#define ERROR_DIALOG_H

#include <QDialog>

namespace Ui {
class error_Dialog;
}

class error_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit error_Dialog(QWidget *parent = 0);
    ~error_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::error_Dialog *ui;
};

#endif // ERROR_DIALOG_H
