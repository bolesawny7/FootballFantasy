#include "updateprice.h"
#include "ui_updateprice.h"
#include "services/playersservice.h"
// #include "./services/adminservices.h"
#include "adminmenu.h"
#include "./models/player.h"
#include "./services/transferservices.h"
// Adminservices admin;
updateprice::updateprice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updateprice)
{
    ui->setupUi(this);
}

updateprice::~updateprice()
{
    delete ui;
}

string updateprice:: get_name(string text) {
    vector<string> split_text;
    string word;
    for (char c : text) {
        if (c == ',') {
            if (!word.empty()) {
                split_text.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        split_text.push_back(word);
    }

    if (!split_text.empty()) {
        return split_text[0];
    } else {
        return "";
    }
}

void updateprice::on_back_clicked()
{
    adminmenu back;
    back.setModal(true);
    close();
    back.exec();
}


void updateprice::on_increase_clicked()
{
    string playerName = ui->searchLineEdit_3->text().toStdString();
    Footballer footballer = admin.singlePlayerSearch(ui->searchLineEdit_3->text());
    admin.updateFootballerPrice(footballer, 1, 0);
}


void updateprice::on_deacrease_clicked()
{
    Footballer footballer = admin.singlePlayerSearch(ui->searchLineEdit_3->text());
    admin.updateFootballerPrice(footballer, 0, 1);
}


void updateprice::on_search_clicked()
{
    transferservices trans;
    QString name=ui->searchLineEdit_3->text();
    name=name.toLower();
    // qDebug() <<name;
    this->footballPlayers = trans.playerSearch(name);
    for(auto player:footballPlayers){
        ui->comboBox->clear();
        // qDebug() << player.getFootballerName();
        QString Name= QString::fromStdString(player.getFootballerName());
        QString team=QString::fromStdString(player.getFootballerTeam());
        float price=player.getFootballerPrice();
        QString strningPrice=QString::number(price, 'f', 1);
        ui->comboBox->addItem(Name+", "+strningPrice+","+team);
    };
}

