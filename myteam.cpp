#include "myteam.h"
#include "ui_myteam.h"
#include <vector>
#include "./models/footballer.h"
#include "./services/fileservices.h"
#include "./models/player.h"
#include "./home.h"
myteam::myteam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myteam)
{
    ui->setupUi(this);
    fileServices files;
    map <string, vector<Footballer>>allPlayers =files.loadFootballers();
    vector <Footballer> goalkeepers=allPlayers["GK"];
    for(auto goalkeeper:goalkeepers){
        QString GKName= QString::fromStdString(goalkeeper.getFootballerName());
        ui->goalkeeperComboBox->addItem(GKName);
    }
    vector <Footballer> defenders =allPlayers["DF"];;
    for(auto defender:defenders){
        QString DFName= QString::fromStdString(defender.getFootballerName());
        ui->firstDefenderComboBox->addItem(DFName);
        ui->secondDefenderComboBox->addItem(DFName);
        ui->thirdDefenderComboBox->addItem(DFName);
    }
    vector <Footballer> midfielders =allPlayers["MF"];
    for(auto midfielder:midfielders){
        QString MFName= QString::fromStdString(midfielder.getFootballerName());
        ui->firststMidfielderComboBox->addItem(MFName);
        ui->secondMidfielderComboBox->addItem(MFName);
    }
    vector <Footballer> attackers =allPlayers["ST"];
    for(auto attacker:attackers){
        QString STName= QString::fromStdString(attacker.getFootballerName());
        ui->attackerComboBox->addItem(STName);
    }
}

myteam::~myteam()
{
    delete ui;
}

void myteam::on_save_clicked()
{
    string Name=ui->fantasyTeamNameLineEdit->text().toStdString();
    Player newplayer(Name);
    // newplayer.setPlayer(ui->goalkeeperComboBox);
    // newplayer.setPlayer(ui->firstDefenderComboBox);
    // newplayer.setPlayer(ui->secondDefenderComboBox);
    // newplayer.setPlayer(ui->thirdDefenderComboBox);
    // newplayer.setPlayer(ui->firststMidfielderComboBox);
    // newplayer.setPlayer(ui->secondMidfielderComboBox);
    // newplayer.setPlayer(ui->attackerComboBox);
}


void myteam::on_LeaguesButton_clicked()
{
     Home home;
    home.setModal(true);
    close();
    home.exec();
}

