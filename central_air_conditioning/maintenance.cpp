#include "maintenance.h"
#include "ui_maintenance.h"

Maintenance::Maintenance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Maintenance)
{
    ui->setupUi(this);
}

Maintenance::~Maintenance()
{
    delete ui;
}

void Maintenance::on_hot_clicked(bool checked)
{
    QMessageBox::warning(this,QString::fromWCharArray(L"提示"),"热风！", QMessageBox::Yes);
}



void Maintenance::on_start_clicked(bool checked)
{

}

void Maintenance::on_close_clicked(bool checked)
{

}

void Maintenance::on_cold_clicked(bool checked)
{
QMessageBox::warning(this,QString::fromWCharArray(L"提示"),"冷风！", QMessageBox::Yes);
}
