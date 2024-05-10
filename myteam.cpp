#include "myteam.h"
#include "ui_myteam.h"
#include <vector>
#include "./models/footballer.h"
#include "./services/fileservices.h"
#include "./models/player.h"
#include "./home.h"
#include "utils/fantasycontext.h"
myteam::myteam(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myteam)
{
    ui->setupUi(this);

    Player player = FantasyContext::getActivePlayer();
    qDebug() << QString::fromStdString(player.getEmail());
    qDebug() << QString::fromStdString(player.fantasyTeamFootballers[0].getFootballerName());

    /*qDebug() << QString::fromStdString(player.fantasyTeamFootballers[1].getFootballerName());
    qDebug() << QString::fromStdString(player.fantasyTeamFootballers[2].getFootballerName());
    qDebug() << QString::fromStdString(player.fantasyTeamFootballers[3].getFootballerName());
    qDebug() << QString::fromStdString(player.fantasyTeamFootballers[4].getFootballerName());
    qDebug() << QString::fromStdString(player.fantasyTeamFootballers[5].getFootballerName());
    qDebug() << QString::fromStdString(player.fantasyTeamFootballers[6].getFootballerName());*/

    ui->pl0->setText(QString::fromStdString(player.getFantasyTeamFootballers()[0].getFootballerName()));
    ui->pl0->setDisabled(true);

    ui->pl1->setText(QString::fromStdString(player.getFantasyTeamFootballers()[1].getFootballerName()));
    ui->pl1->setDisabled(true);

    ui->pl2->setText(QString::fromStdString(player.getFantasyTeamFootballers()[2].getFootballerName()));
    ui->pl2->setDisabled(true);

    ui->pl3->setText(QString::fromStdString(player.getFantasyTeamFootballers()[3].getFootballerName()));
    ui->pl3->setDisabled(true);

    ui->pl4->setText(QString::fromStdString(player.getFantasyTeamFootballers()[4].getFootballerName()));
    ui->pl4->setDisabled(true);

    ui->pl5->setText(QString::fromStdString(player.getFantasyTeamFootballers()[5].getFootballerName()));
    ui->pl5->setDisabled(true);

    ui->pl6->setText(QString::fromStdString(player.getFantasyTeamFootballers()[6].getFootballerName()));
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

