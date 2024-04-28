#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include "home.h"
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
    loginDto.email = ui->emailLineEdit->text().toStdString();
    loginDto.password = ui->passwordLineEdit->text().toStdString();
    cout << auth.login(loginDto);
    cout << "here";
    Home home;
    home.setModal(true);
    close();
    home.exec();
}




void Login::on_signup_clicked()
{
    Signup signup;
    signup.setModal(true);
    close();
    signup.exec();

}

