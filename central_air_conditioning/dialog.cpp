#include "dialog.h"
#include "info_desk.h"
#include "control_desk.h"
#include "maintenance.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setMinimumSize(900, 550);
    setMaximumSize(900, 550);
    setWindowTitle(tr("StackedWidget"));
    //设置列表框
    leftlist=new QListWidget(this);
    leftlist->setIconSize(QSize(50,30));


    QListWidgetItem *qiantai=new QListWidgetItem("前台信息");
    qiantai->setIcon(QIcon(":/new/prefix1/Ficon_2.png"));

    QListWidgetItem *kongzhi=new QListWidgetItem("控制中心");
    kongzhi->setIcon(QIcon(":/new/prefix1/control.png"));

    QListWidgetItem *weihu=new QListWidgetItem("维护中心");
    weihu->setIcon(QIcon(":/new/prefix1/weihu.png"));


    leftlist->insertItem(0,qiantai);
    leftlist->insertItem(1,kongzhi);
    leftlist->insertItem(2,weihu);

    Info_desk *info=new Info_desk;
    Control_desk *con=new Control_desk;
    Maintenance *man=new Maintenance;
    //设置堆栈窗体
    //label1=new QLabel(tr("WindowTest1\n\tby liming"));
    //label2=new QLabel(tr("WindowTest2\n\tby liming"));
    //label3=new QLabel(tr("WindowTest3\n\tby liming"));

    stack=new QStackedWidget(this);
    //stack->addWidget(label1);
    stack->addWidget(info);
    //stack->addWidget(label2);
    stack->addWidget(con);
    //stack->addWidget(label3);
    stack->addWidget(man);
    //设置主窗体布局
    QHBoxLayout *mainLayout=new QHBoxLayout(this);
    //mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(leftlist);
    //mainLayout->addWidget(stack,0,Qt::AlignHCenter);
    mainLayout->addWidget(stack);

    mainLayout->setStretchFactor(leftlist,1);
    mainLayout->setStretchFactor(stack,7);

    connect(leftlist,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));
}

Dialog::~Dialog()
{

}
