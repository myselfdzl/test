#ifndef MAIN_CONTRAL_H
#define MAIN_CONTRAL_H

#include <QDialog>

namespace Ui {
class main_contral;
}

class main_contral : public QDialog
{
    Q_OBJECT

public:
    explicit main_contral(QWidget *parent = 0);
    ~main_contral();

private:
    Ui::main_contral *ui;
};

#endif // MAIN_CONTRAL_H
