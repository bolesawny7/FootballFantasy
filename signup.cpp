#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include <vector>
#include <iostream>
#include "./models/team.h"
#include "QString"
#include "./models/league.h"
#include "./services/fileservices.h"
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
    signupDto.password = ui->passwordLineEdit->text().toStdString();
    signupDto.gender = ui->genderComboBox->currentText().toStdString();
    signupDto.favTeam = ui->favouriteTeamComboBox->currentText().toStdString();
    signupDto.role = ui->roleComboBox->currentText().toStdString();
    auth.signup(signupDto);
}

void Signup::on_loginPage_clicked()
{
    Login login;
    login.setModal(true);
    close();
    login.exec();
}



