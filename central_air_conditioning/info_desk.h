#ifndef INFO_DESK_H
#define INFO_DESK_H

#include <QMainWindow>
#include <QtWidgets/QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include <QDialog>
#include <QFont>
#include <QStringMatcher>
#include <qobject.h>
#include <qcheckbox.h>
#include <qlist.h>
#include <qtablewidget.h>
#include <qtextcodec.h>
#include <qcombobox.h>
#include <QHeaderView>
#include <QTableWidgetItem>
#include <qradiobutton.h>
#include <string.h>
namespace Ui {
class Info_desk;
}

class Info_desk : public QWidget
{
    Q_OBJECT

public:
    explicit Info_desk(QWidget *parent = 0);
    ~Info_desk();

//private slots:
    //void on_checkin1_clicked();

private slots:
    void on_pushButton1_clicked();

private:
    Ui::Info_desk *ui;
    //QLabel label;
//signals:
    //void change_state();
};

#endif // INFO_DESK_H
