#include "guest_bill.h"
#include "ui_guest_bill.h"

guest_bill::guest_bill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::guest_bill)
{
    ui->setupUi(this);
}

guest_bill::~guest_bill()
{
    delete ui;
}
