#ifndef MAINPAGE1_H
#define MAINPAGE1_H

#include <QMainWindow>
#include <QMessageBox>

#include "page2.h"



namespace Ui {
class mainpage1;
}

class mainpage1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainpage1(QWidget *parent = nullptr);
    ~mainpage1();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tkbtn_clicked();

private:
    Ui::mainpage1 *ui;

    page2 *p;
};

#endif // MAINPAGE1_H
