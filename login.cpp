#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include "home.h"
#include "myteam.h"
#include "admin/adminmenu.h"
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
    if(auth.login(loginDto) == 0){
        myteam team;
        team.setModal(true);
        close();
        team.exec();
    } else if (auth.login(loginDto) == 1){
        //for admin
        adminmenu admin;
        admin.setModal(true);
        close();
        admin.exec();
    } else {
        cout << "Invalid email or password" << endl;
    }
}


void Login::on_signup_clicked()
{
    Signup signup;
    signup.setModal(true);
    close();
    signup.exec();

}

