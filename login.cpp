#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_User_Name->text();
    QString Password = ui->lineEdit_Password->text();
    if (UserName == "r" && Password == "1")
    {
        QMessageBox::information(this,"Qt r", "Login Succes,");
        this->hide();
        mainpage1 *mainpage1 = new class mainpage1();
        mainpage1->show();
    }
    else
    {
        QMessageBox::information(this,"Qt r", "please Enter Valid Username Or Password");
    }


}


void MainWindow::on_pushButton_Cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Qt r", "Are You sure to close the application?",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

