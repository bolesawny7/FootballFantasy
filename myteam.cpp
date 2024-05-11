#include "myteam.h"
#include "ui_myteam.h"
#include <vector>
#include "./models/footballer.h"
#include "./services/fileservices.h"
#include "./models/player.h"
#include "./home.h"
#include "utils/fantasycontext.h"
#include "services/fileservices.h"
#include "./services/leagueservice.h"
#include "./services/playersservice.h"
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
    Player activePlayer = FantasyContext::getActivePlayer();

    int sum = 0;


    for(int i=0;i<FantasyContext::getActivePlayer().getFantasyTeamFootballers().size();i++)
    {
        for(auto newPlayer:goalkeepers){
            if(activePlayer.getFantasyTeamFootballers()[i].getFootballerName() == newPlayer.getFootballerName()){
                activePlayer.getFantasyTeamFootballers()[i].gameweekPoints = newPlayer.getGameWeekPoints();


                ui->pl0->setText(QString::fromStdString(newPlayer.getFootballerName()));
                ui->pl0points->setText(QString::number(newPlayer.getGameWeekPoints()));
                ui->pl0->setDisabled(true);

                sum += newPlayer.getGameWeekPoints();
            }
        }

        for(auto newPlayer:defenders){
            if(activePlayer.getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                activePlayer.getFantasyTeamFootballers()[i]=newPlayer;

                if (i == 1)
                {
                    ui->pl1->setText(QString::fromStdString(newPlayer.getFootballerName()));
                    ui->pl1points->setText(QString::number(newPlayer.getGameWeekPoints()));
                    ui->pl1->setDisabled(true);

                    sum += newPlayer.getGameWeekPoints();
                } else if (i == 2) {
                    ui->pl2->setText(QString::fromStdString(newPlayer.getFootballerName()));
                    ui->pl2points->setText(QString::number(newPlayer.getGameWeekPoints()));
                    ui->pl2->setDisabled(true);
                    sum += newPlayer.getGameWeekPoints();
                } else if (i == 3) {
                    ui->pl3->setText(QString::fromStdString(newPlayer.getFootballerName()));
                    ui->pl3points->setText(QString::number(newPlayer.getGameWeekPoints()));
                    ui->pl3->setDisabled(true);
                    sum += newPlayer.getGameWeekPoints();
                }
            }
        }
        for(auto newPlayer:midfielders){
            if(activePlayer.getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                activePlayer.getFantasyTeamFootballers()[i]=newPlayer;
                if (i == 4)
                {
                    ui->pl4->setText(QString::fromStdString(newPlayer.getFootballerName()));
                    ui->pl4points->setText(QString::number(newPlayer.getGameWeekPoints()));
                    ui->pl4->setDisabled(true);
                    sum += newPlayer.getGameWeekPoints();
                } else if (i == 5) {
                    ui->pl5->setText(QString::fromStdString(newPlayer.getFootballerName()));
                    ui->pl5points->setText(QString::number(newPlayer.getGameWeekPoints()));
                    ui->pl5->setDisabled(true);
                    sum += newPlayer.getGameWeekPoints();
                }

            }
        }
        for(auto newPlayer:attackers){
            if(activePlayer.getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                activePlayer.getFantasyTeamFootballers()[i]=newPlayer;
                if (i == 6)
                {
                    ui->pl6->setText(QString::fromStdString(newPlayer.getFootballerName()));
                    ui->pl6points->setText(QString::number(newPlayer.getGameWeekPoints()));
                    ui->pl6->setDisabled(true);
                    sum += newPlayer.getGameWeekPoints();
                }
            }
        }
    }

    int playerGameweekPoints = 0;
    int maxGameweekPoints = 0;
    string nameOfHigherGameweekPoints = "";
    int maxtotalPoints = 0;
    string nameOfTotalPoints = "";
    vector <Player> allPlayers = Playersservice::getPlayers();
    for(auto player: allPlayers){
        int sum2 = 0;
        for(int i=0;i<player.getFantasyTeamFootballers().size();i++)
        {

            for(auto newPlayer:goalkeepers){
                if(player.getFantasyTeamFootballers()[i].getFootballerName() == newPlayer.getFootballerName()){
                    player.getFantasyTeamFootballers()[i].gameweekPoints = newPlayer.getGameWeekPoints();
                    sum2 += newPlayer.getGameWeekPoints();
                }
            }

            for(auto newPlayer:defenders){
                if(player.getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                    player.getFantasyTeamFootballers()[i]=newPlayer;

                    if (i == 1)
                    {
                        sum2 += newPlayer.getGameWeekPoints();
                    } else if (i == 2) {
                        sum2 += newPlayer.getGameWeekPoints();
                    } else if (i == 3) {

                        sum2 += newPlayer.getGameWeekPoints();
                    }
                }
            }
            for(auto newPlayer:midfielders){
                if(player.getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                    player.getFantasyTeamFootballers()[i]=newPlayer;
                    if (i == 4)
                    {
                        sum2 += newPlayer.getGameWeekPoints();
                    } else if (i == 5) {
                        sum2 += newPlayer.getGameWeekPoints();
                    }

                }
            }
            for(auto newPlayer:attackers){
                if(player.getFantasyTeamFootballers()[i].getFootballerName()==newPlayer.getFootballerName()){
                    player.getFantasyTeamFootballers()[i]=newPlayer;
                    if (i == 6)
                    {
                        sum2 += newPlayer.getGameWeekPoints();
                    }
                }
            }
        }
        if(maxGameweekPoints < sum2){
            nameOfHigherGameweekPoints = player.getUserName() ;
             maxGameweekPoints = sum2;
        }

    }
\
    ui->TotalPoints->setText(QString::number(sum));
    ui->higherGameWeekName->setText(QString::fromStdString(nameOfHigherGameweekPoints));
    ui->higherGameWeekPoints->setText(QString::number(maxGameweekPoints));
    // ui->totalPointsName->setText(QString::fromStdString(nameOfTotalPoints));
    // ui->totalPoints->setText(QString::number(maxtotalPoints));
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

