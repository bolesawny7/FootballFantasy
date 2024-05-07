#include "fileservices.h"
#include <QString>
#include <QtCore>
#include <QFileInfo>
#include <vector>
#include "../models/team.h"
#include "../models/league.h"
#include "../models/footballer.h"


// League league("premier league");

vector <League> fileServices::leagues;
League fileServices::favLeague("");

fileServices::fileServices() {
    leagues.push_back(League("Premier League"));
    leagues.push_back(League("La Liga"));
    leagues.push_back(League("Seria A"));
}

vector <League> fileServices:: getLeagues(){
    return leagues;
}


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
            return favLeague.getTeams();
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
                favLeague.setNewTeam(newteam);
            }
        }
        return favLeague.getTeams();
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
    favLeague.setFootballers("GK",goalkeepers);
    favLeague.setFootballers("DF",defenders);
    favLeague.setFootballers("MF",midfielders);
    favLeague.setFootballers("ST",attackers);
    return favLeague.getFootballerData();
}




void fileServices::writeteams(){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);
    QJsonArray teams;
    for(auto newteam:favLeague.getTeams()){

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

League fileServices::getLeagueByName(string Lname){
    for(auto league:fileServices::leagues){
        if(league.getLeagueName()==Lname){
            fileServices::favLeague=league;
            return league;
        }
    }
}
