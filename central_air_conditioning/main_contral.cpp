#include "main_contral.h"
#include "ui_main_contral.h"

main_contral::main_contral(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main_contral)
{
    ui->setupUi(this);
}

main_contral::~main_contral()
{
    delete ui;
}
