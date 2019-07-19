#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QWidget>

namespace Ui {
class account;
}

class account : public QWidget
{
    Q_OBJECT

public:
    explicit account(QWidget *parent = 0);
    ~account();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::account *ui;
};

#endif // ACCOUNT_H
