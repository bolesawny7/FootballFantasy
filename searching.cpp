#include "searching.h"
#include "ui_searching.h"
#include "./services/transferservices.h"
#include "./models/footballer.h"
#include "utils/fantasycontext.h"
#include <QString>
#include <iomanip>
using namespace std;

searching::searching(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searching)
{
    ui->setupUi(this);
}

searching::~searching()
{
    delete ui;
}


string get_name(string text) {
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

void searching::on_pushButton_clicked()
{
    transferservices trans;
    QString name=ui->searchLineEdit->text();
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


void searching::on_addPlayer_clicked()
{
    Player activePlayer = FantasyContext::getActivePlayer();
    string player = ui->comboBox->currentText().toStdString();
    string name = get_name(player);
    for (auto player : this->footballPlayers) {
        if (player.getFootballerName() == name) {
            activePlayer.fantasyTeamFootballers[0] = player;
            qDebug() << player.getFootballerName();
            qDebug() << QString::fromStdString(activePlayer.getUserName());
            qDebug() << QString::fromStdString(activePlayer.fantasyTeamFootballers[0].getFootballerName());
            FantasyContext::setActivePlayer(activePlayer);
        }
    }
}

