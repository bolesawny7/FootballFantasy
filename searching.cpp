#include "searching.h"
#include "ui_searching.h"
#include "./services/transferservices.h"
#include "./models/footballer.h"
#include <QString>
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
void searching::on_searchLineEdit_editingFinished()
{
    transferservices trans;
    vector <Footballer> players=trans.playerSearch(ui->searchLineEdit->text().toLower());
    for(auto player:players){
        QString Name= QString::fromStdString(player.getFootballerName());
        QString team=QString::fromStdString(player.getFootballerTeam());
        int price=player.getFootballerPrice();
        QString strningPrice=QString::fromStdString(std::to_string(price));
        ui->comboBox->addItem(Name+","+strningPrice+","+team);
    };

}

