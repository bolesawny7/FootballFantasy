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
    signupDto.league = ui->leagueComboBox->currentText().toStdString();
    signupDto.userName = ui->userNameLineEdit->text().toStdString();
    signupDto.email = ui->eMailLineEdit->text().toStdString();
    signupDto.password = ui->eMailLineEdit->text().toStdString();
    signupDto.gender = ui->genderComboBox->currentText().toStdString();
    auth.signup(signupDto);
}

void Signup::on_loginPage_clicked()
{
    Login login;
    login.setModal(true);
    close();
    login.exec();
}



