#include "info_desk.h"
#include "ui_info_desk.h"

Info_desk::Info_desk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Info_desk)
{
    ui->setupUi(this);
    this->setWindowTitle("Infomation_Desk");
}

Info_desk::~Info_desk()
{
    delete ui;
}

void Info_desk::on_pushButton1_clicked()
{
    ui->label1->setStyleSheet("background-color:green");
    ui->pushButton1->setText("结账退房");
}
