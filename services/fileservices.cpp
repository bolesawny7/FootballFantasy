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

    qDebug() << thisFilePathAbs.absolutePath()+"/data/teams.json";
    QFile file(thisFilePathAbs.absolutePath()+"/data/teams.json");




    if(file.open(QIODevice::ReadOnly)){
        QByteArray Bytes = file.readAll();
        file.close();
        qDebug()<<"here";
        QJsonParseError JsonError;
        QJsonDocument Document =QJsonDocument::fromJson(Bytes, &JsonError);

        if(JsonError.error != QJsonParseError::NoError){
            qDebug() << "Error is : " << JsonError.errorString();
            return league.getTeams();
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
                league.setNewTeam(newteam);
            }
        }
        return league.getTeams();
    }
}

map <string, vector<Footballer>>  fileServices::loadFootballers(){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);

    qDebug() << thisFilePathAbs.absolutePath();
    QFile file(thisFilePathAbs.absolutePath()+"/data/players.json");
    vector <Footballer> goalkeepers;
    vector <Footballer> defenders;
    vector <Footballer> midfielders;
    vector <Footballer> attackers;
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
            QString playerCost;
            for(auto i:arr)
            {
                player = i.toObject();
                playerName = player.value("name").toString();
                playerTeam=player.value("team").toString();
                playerPosition=player.value("position").toString();
                playerCost=player.value("cost").toString();
                string cost=playerCost.toStdString();
                // qDebug() << player.value("cost").toString();
                Footballer player(playerName.toStdString(),std::stof(cost),playerPosition.toStdString(),playerTeam.toStdString());
                if(player.getFootballerPosition() =="GK"){
                    goalkeepers.push_back(player);
                }
                else if(player.getFootballerPosition()=="DF"){
                    defenders.push_back(player);
                }
                else if(player.getFootballerPosition()=="MF"){
                    midfielders.push_back(player);
                }
                else {
                    attackers.push_back(player);
                }
            }
        }
    }
    league.setFootballers("GK",goalkeepers);
    league.setFootballers("DF",defenders);
    league.setFootballers("MF",midfielders);
    league.setFootballers("ST",attackers);
    return league.getFootballerData();
}




void fileServices::writeteams(){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);
    QJsonArray teams;
    for(auto newteam:league.getTeams()){

        QJsonObject team;

        int sid = newteam.getTeamId();
        string sname = newteam.getTeamName();


        team["id"] =  sid;
        team["name"] =  sname.data();

        teams.append(team);

    }

    QJsonDocument doc(teams);
    QFile file(thisFilePathAbs.absolutePath()+"/data/newTeams.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(doc.toJson(QJsonDocument::Indented));
        file.close();
    }
}
