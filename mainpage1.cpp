#include "mainpage1.h"
#include "ui_mainpage1.h"
#include "QMessageBox"
#include "page2.h"
#include <QPixmap>


mainpage1::mainpage1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainpage1)
{

    //-ste text
}

mainpage1::~mainpage1()
{
    delete ui;
}




void mainpage1::on_pushButton_2_clicked()
{

}


void mainpage1::on_pushButton_3_clicked()
{

}


void mainpage1::on_tkbtn_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation", "Are you sure?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        this->hide();
        page2 *p = new page2();
        p->show();
    }
}



