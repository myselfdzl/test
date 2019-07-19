#ifndef CHECK_IN_H
#define CHECK_IN_H

#include <QWidget>

namespace Ui {
class check_in;
}

class check_in : public QWidget
{
    Q_OBJECT

public:
    explicit check_in(QWidget *parent = 0);
    ~check_in();

private:
    Ui::check_in *ui;
};

#endif // CHECK_IN_H
