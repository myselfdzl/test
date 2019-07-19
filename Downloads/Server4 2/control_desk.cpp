#include "control_desk.h"
#include "ui_control_desk.h"

Control_desk::Control_desk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control_desk)
{
    ui->setupUi(this);
}

Control_desk::~Control_desk()
{
    delete ui;
}
