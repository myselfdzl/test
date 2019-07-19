#include "check_in.h"
#include "ui_check_in.h"

check_in::check_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::check_in)
{
    ui->setupUi(this);
}

check_in::~check_in()
{
    delete ui;
}
