#include "fileservices.h"
#include <QString>
#include <QtCore>
#include <QFileInfo>
#include <vector>
#include "../models/team.h"
#include "../models/league.h"
#include "../models/footballer.h"
#include "./playersservice.h"
#include "./userservice.h"
#include "../utils/fantasycontext.h"
// #include "../Structs/sign"

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

    qDebug() << thisFilePathAbs.absolutePath()+"/data/PLTeams.json";
    QFile file(thisFilePathAbs.absolutePath()+"/data/PLTeams.json");




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
    QFile file(thisFilePathAbs.absolutePath()+"/data/PLPlayers.json");
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




void fileServices::writeTeams(){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);
    QJsonArray teams;
    for(auto newteam:favLeague.getTeams()){

        QJsonObject team;

        int Tid = newteam.getTeamId();
        string Tname = newteam.getTeamName();


        team["id"] =  Tid;
        team["name"] =  Tname.data();

        teams.append(team);
    }

    QJsonDocument doc(teams);
    QFile file(thisFilePathAbs.absolutePath()+"/data/PLteams.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(doc.toJson(QJsonDocument::Indented));
        file.close();
    }
}

void fileServices::writePlayers(){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);
    map <string, vector<Footballer>> savingPlayers=favLeague.getFootballerData();
    vector <Footballer> goalkeepers=savingPlayers["GK"];
    vector <Footballer> defenders=savingPlayers["DF"] ;
    vector <Footballer> midfielders=savingPlayers["MF"];
    vector <Footballer> attackers=savingPlayers["ST"];
    QJsonArray players;
    QJsonArray allPlayers;
    for(auto newPlayer:goalkeepers){

        QJsonObject player;

        int Pid = newPlayer.getFootballerId();
        string Pname = newPlayer.getFootballerName();
        string PTeamName=newPlayer.getFootballerTeam();
        string Pposition="GK";
        string Pcost=to_string(newPlayer.getFootballerPrice());
        int Ppoints=newPlayer.getGameWeekPoints();
        // {
        //     "name": "Ederson M.",
        //     "team": "Man City",
        //     "position": "GK",
        //     "points": 0,
        //     "cost": "5.5"
        // },
        player["name"] =  Pname.data();
        player["team"] =  PTeamName.data();
        player["position"] =Pposition.data();
        player["cost"]=Pcost.data();
        player["points"]=Ppoints;
        allPlayers.append(player);
    }
    for(auto newPlayer:defenders){

        QJsonObject player;

        int Pid = newPlayer.getFootballerId();
        string Pname = newPlayer.getFootballerName();
        string PTeamName=newPlayer.getFootballerTeam();
        string Pposition="DF";
        string Pcost=to_string(newPlayer.getFootballerPrice());
        int Ppoints=newPlayer.getGameWeekPoints();
        // {
        //     "name": "Ederson M.",
        //     "team": "Man City",
        //     "position": "GK",
        //     "points": 0,
        //     "cost": "5.5"
        // },
        player["name"] =  Pname.data();
        player["team"] =  PTeamName.data();
        player["position"] =Pposition.data();
        player["cost"]=Pcost.data();
        player["points"]=Ppoints;
        allPlayers.append(player);
    }
    for(auto newPlayer:midfielders){

        QJsonObject player;

        int Pid = newPlayer.getFootballerId();
        string Pname = newPlayer.getFootballerName();
        string PTeamName=newPlayer.getFootballerTeam();
        string Pposition="MF";
        string Pcost=to_string(newPlayer.getFootballerPrice());
        int Ppoints=newPlayer.getGameWeekPoints();
        // {
        //     "name": "Ederson M.",
        //     "team": "Man City",
        //     "position": "GK",
        //     "points": 0,
        //     "cost": "5.5"
        // },
        player["name"] =  Pname.data();
        player["team"] =  PTeamName.data();
        player["position"] =Pposition.data();
        player["cost"]=Pcost.data();
        player["points"]=Ppoints;
        allPlayers.append(player);
    }
    for(auto newPlayer:attackers){

        QJsonObject player;

        int Pid = newPlayer.getFootballerId();
        string Pname = newPlayer.getFootballerName();
        string PTeamName=newPlayer.getFootballerTeam();
        string Pposition="ST";
        string Pcost=to_string(newPlayer.getFootballerPrice());
        int Ppoints=newPlayer.getGameWeekPoints();
        // {
        //     "name": "Ederson M.",
        //     "team": "Man City",
        //     "position": "GK",
        //     "points": 0,
        //     "cost": "5.5"
        // },
        player["name"] =  Pname.data();
        player["team"] =  PTeamName.data();
        player["position"] =Pposition.data();
        player["cost"]=Pcost.data();
        player["points"]=Ppoints;
        allPlayers.append(player);
    }

    QJsonDocument doc(players);
    QFile file(thisFilePathAbs.absolutePath()+"/data/PLPlayers.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(doc.toJson(QJsonDocument::Indented));
        file.close();
    }
}


void fileServices::loadUserData(){

    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);
    QFile file(thisFilePathAbs.absolutePath()+"/data/Users.json");
    if(file.open(QIODevice::ReadOnly)){
        QByteArray Bytes = file.readAll();
        file.close();
        QJsonParseError JsonError;
        QJsonDocument Document =QJsonDocument::fromJson(Bytes, &JsonError);

        if(JsonError.error != QJsonParseError::NoError){
            qDebug() << "Error is : " << JsonError.errorString();
            return;
        }
        else {
            qDebug() << "no error";
        }
        if (Document.isArray()){
            QJsonArray arr = Document.array();


            QJsonObject user;
            signupStruct signup;
            for(auto i:arr){
                user = i.toObject();
                signup.userName = user.value("name").toString().toStdString();
                signup.password = user.value("password").toString().toStdString();
                signup.email = user.value("email").toString().toStdString();
                signup.league = user.value("league").toString().toStdString();
                signup.role=user.value("role").toString().toStdString();
                if(signup.role=="player"){
                     signup.fantasyTeamName=user.value("fantasyTeamName").toString().toStdString();
                    Player userData(signup);
                    Playersservice::setPlayer(userData);
                }
                else{
                    User user(signup);
                    FantasyContext::setAdmin(user);
                }
            }
        }
    }
}

void fileServices::storeUSerData(){
    QString thisFilePathString=qApp->applicationDirPath();
    QFileInfo thisFilePath(thisFilePathString);
    QString thebathabsouluted=thisFilePath.absolutePath();
    QFileInfo thisFilePathAbs(thebathabsouluted);
    QFile file(thisFilePathAbs.absolutePath()+"/data/Users.json");
    QJsonArray users;
    QJsonObject user;
    for(auto player: Playersservice::getPlayers()){



        // int sid = addData.usersList[i].id;
        // string sname = addData.usersList[i].name;
        // string spass = addData.usersList[i].password;
        // string slea = addData.usersList[i].league;
        int id=player.getId();//
        string name=player.getUserName();
        string league=player.getFavleague();//
        string email=player.getEmail();//
        string password=player.getPassword();
        string favTeam=player.getFavleague();
        string role=player.getRole();
        user["name"]=name.data();
        user["email"] =  email.data();
        user["password"] =  password.data();
        user["league"] =  league.data();
        user["role"] =  role.data();
        users.append(user);
    }
    string name=FantasyContext::getAdmin().getUserName();
    string league=FantasyContext::getAdmin().getLeague();//
    string email=FantasyContext::getAdmin().getEmail();//
    string password=FantasyContext::getAdmin().getPassword();
    string favTeam=FantasyContext::getAdmin().getLeague();
    string role=FantasyContext::getAdmin().getRole();
    user["name"]=name.data();
    user["email"] =  email.data();
    user["password"] =  password.data();
    user["league"] =  league.data();
    user["role"] =  role.data();
    users.append(user);
    QJsonDocument doc(users);
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
