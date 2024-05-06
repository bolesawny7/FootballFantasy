#include "fileservices.h"
#include <QString>
#include <QtCore>
#include <QFileInfo>
#include <vector>
#include "../models/team.h"
#include "../models/league.h"
#include "../models/footballer.h"
League league("premier league");
fileServices::fileServices() {}
vector<Team> fileServices::loadTeam(){

    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);

    qDebug() << thisFilePathAbs.absolutePath();
    QFile file(thisFilePathAbs.absolutePath()+"/data/teams.json");



    if(file.open(QIODevice::ReadOnly)){
        QByteArray Bytes = file.readAll();
        file.close();
        qDebug()<<"here";
        QJsonParseError JsonError;
        QJsonDocument Document =QJsonDocument::fromJson(Bytes, &JsonError);

        if(JsonError.error != QJsonParseError::NoError){
            qDebug() << "Error is : " << JsonError.errorString();
            return league.teams;
        }
        else {
            qDebug() << "no error";
        }
        if (Document.isArray())
        {
            QJsonArray arr = Document.array();

            int id;
            QJsonObject team;
            QString teamName;

            for(auto i:arr)
            {
                team = i.toObject();
                teamName = team.value("team_name").toString();
                qDebug() << team.value("team_name").toString();
                string name = teamName.toStdString();
                Team newteam(name);
                league.teams.push_back(newteam);
            }
        }
        return league.teams;
    }
}

vector<Footballer> fileServices::loadFootballers(string position){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);

    qDebug() << thisFilePathAbs.absolutePath();
    QFile file(thisFilePathAbs.absolutePath()+"/data/players.json");



    if(file.open(QIODevice::ReadOnly)){
        QByteArray Bytes = file.readAll();
        file.close();
        qDebug()<<"here";
        QJsonParseError JsonError;
        QJsonDocument Document =QJsonDocument::fromJson(Bytes, &JsonError);

        if(JsonError.error != QJsonParseError::NoError){
            qDebug() << "Error is : " << JsonError.errorString();
        }
        else {
            qDebug() << "no error";
        }
        if (Document.isArray())
        {
            QJsonArray arr = Document.array();

            int id;
            QJsonObject player;
            QString playerName;
            QString playerTeam;
            QString playerPosition;
            int playerCost;
            /*    "name": "A.Becker",
    "team": "Liverpool",
    "position": "GK",
    "points": 0,
    "cost": "£5.7"*/
            for(auto i:arr)
            {
                player = i.toObject();
                playerName = player.value("name").toString();
                playerTeam=player.value("team").toString();
                playerPosition=player.value("position").toString();
                playerCost=player.value("cost").toInt();
                qDebug() << player.value("team").toString();
                Footballer player(playerName.toStdString(),playerCost,playerPosition.toStdString());
                if(player.getFootballerPosition() =="GK"){
                    league.goalkeepers.push_back(player);
                }
                else if(player.getFootballerPosition()=="DF"){
                    league.defenders.push_back(player);
                }
                else if(player.getFootballerPosition()=="MF"){
                    league.midfielders.push_back(player);
                }
                else {
                    league.attackers.push_back(player);
                }
            }
        }
    }
    if(position=="GK"){
        return league.goalkeepers;
    }
    else if (position=="DF"){
        return league.defenders;
    }
    else if(position=="MF"){
        return league.midfielders;
    }
    else if (position=="ST")
    {
        return league.attackers;
    }

}
