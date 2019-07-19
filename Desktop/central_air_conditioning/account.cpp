#include "account.h"
#include "ui_account.h"
#include<QMessageBox>
account::account(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::account)
{
    ui->setupUi(this);
}

account::~account()
{
    delete ui;
}

void account::on_pushButton_clicked()
{

}

void account::on_pushButton_2_clicked()
{
    QMessageBox::warning(NULL, "提示", "打印成功");
}
