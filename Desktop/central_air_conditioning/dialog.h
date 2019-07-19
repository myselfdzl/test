#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QHBoxLayout>
#include "info_desk.h"
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    QListWidget *leftlist;
    QStackedWidget *stack;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;

};

#endif // DIALOG_H
