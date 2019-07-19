#ifndef MAINTENANCE_H
#define MAINTENANCE_H
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
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string.h>

using namespace std;




namespace Ui {
class Maintenance;
}

class Maintenance : public QWidget
{
    Q_OBJECT

public:
    explicit Maintenance(QWidget *parent = 0);
    ~Maintenance();

private slots:
    void on_hot_clicked(bool checked);

    void on_start_clicked(bool checked);

    void on_close_clicked(bool checked);

    void on_cold_clicked(bool checked);

private:
    Ui::Maintenance *ui;
};

#endif // MAINTENANCE_H
