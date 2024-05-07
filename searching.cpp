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


void searching::on_pushButton_clicked()
{
    transferservices trans;
    QString name=ui->searchLineEdit->text();
    name=name.toLower();
    qDebug() <<name;
    vector <Footballer> players=trans.playerSearch("GK",name);
    for(auto player:players){
        ui->comboBox->clear();
        qDebug() << player.getFootballerName();
        QString Name= QString::fromStdString(player.getFootballerName());
        QString team=QString::fromStdString(player.getFootballerTeam());
        int price=player.getFootballerPrice();
        QString strningPrice=QString::fromStdString(std::to_string(price));
        ui->comboBox->addItem(Name+","+strningPrice+","+team);
    };
}

