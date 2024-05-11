#include "updatepoints.h"
#include "ui_updatepoints.h"
#include "./models/footballer.h"
#include "./services/adminservices.h"
#include "./services/transferservices.h"
#include "./adminmenu.h"
Adminservices admin;
updatepoints::updatepoints(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updatepoints)
{
    ui->setupUi(this);
    vector <Footballer> selectedPlayers=admin.searchWithPositionAndTeam();
    for(auto player:selectedPlayers){
        ui->selectPlayerComboBox_2->addItem(QString::fromStdString(player.getFootballerName()));
    }
    if(Adminservices::searchingPos=="GK"){
        ui->pointsForComboBox_2->addItem("Clean Sheet");
        ui->pointsForComboBox_2->addItem("Starting 11");
        ui->pointsForComboBox_2->addItem("60mins+");
        ui->pointsForComboBox_2->addItem("Goal");
        ui->pointsForComboBox_2->addItem("Assist");
        ui->pointsForComboBox_2->addItem("Penalty save");
        ui->pointsForComboBox_2->addItem("Penalty miss");
        ui->pointsForComboBox_2->addItem("Conceded 2 goals");
        ui->pointsForComboBox_2->addItem("Yellow card");
        ui->pointsForComboBox_2->addItem("Red card");
    }
    else if(Adminservices::searchingPos=="DF"){
        ui->pointsForComboBox_2->addItem("Clean Sheet");
        ui->pointsForComboBox_2->addItem("Starting 11");
        ui->pointsForComboBox_2->addItem("60mins+");
        ui->pointsForComboBox_2->addItem("Goal");
        ui->pointsForComboBox_2->addItem("Assist");
        ui->pointsForComboBox_2->addItem("Penalty miss");
        ui->pointsForComboBox_2->addItem("Conceded 2 goals");
        ui->pointsForComboBox_2->addItem("Yellow card");
        ui->pointsForComboBox_2->addItem("Red card");
    }
    else if(Adminservices::searchingPos=="MF"){
        ui->pointsForComboBox_2->addItem("Clean Sheet");
        ui->pointsForComboBox_2->addItem("Starting 11");
        ui->pointsForComboBox_2->addItem("60mins+");
        ui->pointsForComboBox_2->addItem("Goal");
        ui->pointsForComboBox_2->addItem("Assist");
        ui->pointsForComboBox_2->addItem("Penalty miss");
        ui->pointsForComboBox_2->addItem("Yellow card");
        ui->pointsForComboBox_2->addItem("Red card");
    }
    else if(Adminservices::searchingPos=="ST"){
        ui->pointsForComboBox_2->addItem("Starting 11");
        ui->pointsForComboBox_2->addItem("60mins+");
        ui->pointsForComboBox_2->addItem("Goal");
        ui->pointsForComboBox_2->addItem("Assist");
        ui->pointsForComboBox_2->addItem("Penalty miss");
        ui->pointsForComboBox_2->addItem("Conceded 2 goals");
        ui->pointsForComboBox_2->addItem("Yellow card");
        ui->pointsForComboBox_2->addItem("Red card");
    }
}

updatepoints::~updatepoints()
{
    delete ui;
}

void updatepoints::on_addpoints_clicked()
{
    // qDebug() <<"here";
    QString name=ui->selectPlayerComboBox_2->currentText();
    Footballer wantedPlayer= admin.singlePlayerSearch(name);
    // qDebug() <<wantedPlayer.getFootballerName();
    string action=ui->pointsForComboBox_2->currentText().toStdString();
    admin.updateFootballerPoints(wantedPlayer,action);
}


void updatepoints::on_back_clicked()
{
    adminmenu back;
    back.setModal(true);
    close();
    back.exec();
}

