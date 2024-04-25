#include "signup.h"
#include "ui_signup.h"
#include "login.h"

Signup::Signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_signupButton_clicked()
{
    signupStruct signupDto;
    signupDto.league = ui->league->text().toStdString();
    signupDto.firstName = ui->firstName->text().toStdString();
    signupDto.lastName = ui->lastName->text().toStdString();
    signupDto.email = ui->email->text().toStdString();
    signupDto.password = ui->password->text().toStdString();
    signupDto.gender = ui->gender->text().toStdString();
    auth.signup(signupDto);
}

void Signup::on_loginPage_clicked()
{

}

