#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include <iostream>
using namespace std;

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_loginButton_clicked()
{
    loginStruct loginDto;
    loginDto.email = ui->emailLabel->text().toStdString();
    loginDto.password = ui->passwordLabel->text().toStdString();
    cout << "here";
}




void Login::on_signup_clicked()
{
    Signup signup;
    signup.setModal(true);
    close();
    signup.exec();

}

