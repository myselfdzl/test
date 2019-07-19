#ifndef GUEST_BILL_H
#define GUEST_BILL_H

#include <QWidget>

namespace Ui {
class guest_bill;
}

class guest_bill : public QWidget
{
    Q_OBJECT

public:
    explicit guest_bill(QWidget *parent = 0);
    ~guest_bill();

private:
    Ui::guest_bill *ui;
};

#endif // GUEST_BILL_H
