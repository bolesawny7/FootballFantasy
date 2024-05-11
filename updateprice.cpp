#include "updateprice.h"
#include "ui_updateprice.h"
#include "services/playersservice.h"
#include "./services/adminservices.h"
#include "adminmenu.h"
#include "./models/player.h"
#include "./services/transferservices.h"
Adminservices ad;
updateprice::updateprice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updateprice)
{
    ui->setupUi(this);
    vector <Footballer> selectedPlayers=ad.searchWithPositionAndTeam();
    for(auto player:selectedPlayers){
        ui->selectPlayerComboBox->addItem(QString::fromStdString(player.getFootballerName()));
    }
}

updateprice::~updateprice()
{
    delete ui;
}





void updateprice::on_increase_clicked()
{
    QString name=ui->selectPlayerComboBox->currentText();
    Footballer wantedPlayer= ad.singlePlayerSearch(name);
    ad.updateFootballerPrice(wantedPlayer,true);
}


void updateprice::on_deacrease_clicked()
{
    QString name=ui->selectPlayerComboBox->currentText();
    Footballer wantedPlayer= ad.singlePlayerSearch(name);
    ad.updateFootballerPrice(wantedPlayer,false);
}


void updateprice::on_back_clicked()
{
    adminmenu back;
    back.setModal(true);
    close();
    back.exec();
}

