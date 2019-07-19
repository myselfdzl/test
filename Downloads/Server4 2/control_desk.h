#ifndef CONTROL_DESK_H
#define CONTROL_DESK_H

#include <QWidget>

namespace Ui {
class Control_desk;
}

class Control_desk : public QWidget
{
    Q_OBJECT

public:
    explicit Control_desk(QWidget *parent = 0);
    ~Control_desk();

private:
    Ui::Control_desk *ui;
};

#endif // CONTROL_DESK_H
