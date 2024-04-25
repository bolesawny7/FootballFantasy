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

void Login::on_pushButton_clicked()
{
    loginStruct loginDto;
    loginDto.email = ui->email->text().toStdString();
    loginDto.password = ui->password->text().toStdString();
    cout << auth.login(loginDto);
}


void Login::on_signupPage_clicked()
{
    Signup signup;
    signup.setModal(true);
    signup.exec();
}


void Login::on_loginButton_clicked()
{
    loginStruct loginDto;
    loginDto.email = ui->email->text().toStdString();
    loginDto.password = ui->password->text().toStdString();
    cout << auth.login(loginDto);
}

