#include "home.h"
#include "ui_home.h"
#include "myteam.h"
#include "./models/footballer.h"
#include "searching.h"
#include "utils/fantasycontext.h"
#include "./services/transferservices.h"
#include "login.h"
Home::Home(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    ui->GK->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[0].getFootballerName()));


    ui->DF1->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[1].getFootballerName()));


    ui->DF2->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[2].getFootballerName()));


    ui->DF3->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[3].getFootballerName()));


    ui->MF1->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[4].getFootballerName()));


    ui->MF2->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[5].getFootballerName()));


    ui->ST->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[6].getFootballerName()));

}

Home::~Home()
{
    delete ui;
}

void Home::on_pushButton_3_clicked()
{
    myteam team;
    team.setModal(true);
    close();
    team.exec();
}

transferservices tran;

void Home::on_pushButton_2_clicked()
{
    tran.setSearchValue("GK");
    tran.position = 0;
    close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_4_clicked()
{
    tran.setSearchValue("DF");
    tran.position = 1;
    close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_5_clicked()
{
    tran.setSearchValue("DF");
    tran.position = 2;
        close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_6_clicked()
{
    tran.setSearchValue("DF");
    tran.position = 3;
        close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_7_clicked()
{
    tran.setSearchValue("MF");
    tran.position = 4;
        close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_8_clicked()
{
    tran.setSearchValue("MF");
    tran.position = 5;
        close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_9_clicked()
{
    tran.setSearchValue("ST");
    tran.position = 6;
        close();
    searching search;
    search.setModal(true);
    search.exec();
}


void Home::on_pushButton_clicked()
{
    Login login;
    login.setModal(true);
    close();
    login.exec();
}

