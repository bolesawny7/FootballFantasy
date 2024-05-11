#include "myteam.h"
#include "ui_myteam.h"
#include <vector>
#include "./models/footballer.h"
#include "./services/fileservices.h"
#include "./models/player.h"
#include "./home.h"
#include "utils/fantasycontext.h"
#include "services/fileservices.h"
#include "login.h"
myteam::myteam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myteam)
{
    ui->setupUi(this);


    map <string, vector<Footballer>> savingPlayers=fileServices::favLeague.getFootballerData();
    vector <Footballer> goalkeepers=savingPlayers["GK"];
    vector <Footballer> defenders=savingPlayers["DF"] ;
    vector <Footballer> midfielders=savingPlayers["MF"];
    vector <Footballer> attackers=savingPlayers["ST"];
    for(int i=0;i<FantasyContext::getActivePlayer().getFantasyTeamFootballers().size();i++)
    {
        for(auto newPlayer:goalkeepers){
            if(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i]=newPlayer;
            }
        }

        for(auto newPlayer:defenders){
            if(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i]=newPlayer;
            }
        }
        for(auto newPlayer:midfielders){
            if(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i]=newPlayer;
            }
        }
        for(auto newPlayer:attackers){
            if(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                FantasyContext::getActivePlayer().getFantasyTeamFootballers()[i]=newPlayer;
            }
        }
    }

    qDebug() << QString::fromStdString(FantasyContext::getActivePlayer().fantasyTeamFootballers[0].getFootballerName());

    ui->pl0->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[0].getFootballerName()));
    ui->pl0points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[0].getGameWeekPoints()));
    ui->pl0->setDisabled(true);

    ui->pl1->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[1].getFootballerName()));
    ui->pl1points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[1].getGameWeekPoints()));
    ui->pl1->setDisabled(true);

    ui->pl2->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[2].getFootballerName()));
    ui->pl2points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[2].getGameWeekPoints()));
    ui->pl2->setDisabled(true);

    ui->pl3->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[3].getFootballerName()));
    ui->pl3points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[3].getGameWeekPoints()));
    ui->pl3->setDisabled(true);

    ui->pl4->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[4].getFootballerName()));
    ui->pl4points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[4].getGameWeekPoints()));
    ui->pl4->setDisabled(true);

    ui->pl5->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[5].getFootballerName()));
    ui->pl5points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[5].getGameWeekPoints()));
    ui->pl5->setDisabled(true);

    ui->pl6->setText(QString::fromStdString(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[6].getFootballerName()));
    ui->pl6points->setText(QString::number(FantasyContext::getActivePlayer().getFantasyTeamFootballers()[6].getGameWeekPoints()));
    ui->pl6->setDisabled(true);

}

myteam::~myteam()
{
    delete ui;
}

void myteam::on_LeaguesButton_clicked()
{
     Home home;
    home.setModal(true);
    close();
    home.exec();
}


void myteam::on_pushButton_clicked()
{
    qDebug() << QString::fromStdString(FantasyContext::getActivePlayer().fantasyTeamFootballers[0].getFootballerName());
    FantasyContext:: savePlayer();
    Login login;
    login.setModal(true);
    close();
    login.exec();
}

