#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include <vector>
#include <iostream>
#include "./models/team.h"
#include "QString"
#include "./models/league.h"
#include "./services/fileservices.h"
#include "./services/adminservice.h"
Signup::Signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
    fileServices files;
    vector <Team> teams=files.loadTeam();
    for(auto team:teams){
        QString teamName= QString::fromStdString(team.getTeamName());
        ui->favouriteTeamComboBox->addItem(teamName);
    }
    files.loadFootballers();
    ui->fantasyTeanNameLineEdit->setDisabled(false);

}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_signupButton_clicked()
{

    signupStruct signupDto;
    signupDto.userName = ui->userNameLineEdit->text().toStdString();
    signupDto.email = ui->eMailLineEdit->text().toStdString();
    signupDto.password = ui->passwordLineEdit->text().toStdString();
    signupDto.favTeam = ui->favouriteTeamComboBox->currentText().toStdString();
    signupDto.role = ui->roleComboBox->currentText().toStdString();
    signupDto.fantasyTeamName = ui->fantasyTeanNameLineEdit->text().toStdString();
    auth.signup(signupDto);
}

void Signup::on_loginPage_clicked()
{
    Login login;
    login.setModal(true);
    close();
    login.exec();
}




void Signup::on_roleComboBox_textActivated(QString arg1)
{
    if(arg1 =="player"){
        ui->fantasyTeanNameLineEdit->setDisabled(false);
    }
    else{
        ui->fantasyTeanNameLineEdit->setDisabled(true);
    }
}

