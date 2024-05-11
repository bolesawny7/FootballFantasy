#include "Adminservices.h"
#include "../models/league.h" // Assuming league.h is in the models directory
#include "../models/player.h"
#include "fileservices.h"
#include "../utils/fantasycontext.h"
#include <QtCore>

string Adminservices::searchingTeam="";
string Adminservices::searchingPos="";

Adminservices::Adminservices(){
}

void Adminservices::updateFootballerPrice(Footballer player,bool increase,bool deacrease){
    if(increase){
        player.setFootballerPrice(player.getFootballerPrice()+0.1);
    }
    else{
        player.setFootballerPrice(player.getFootballerPrice()-0.1);
    }
}
vector <Footballer> Adminservices::searchWithPositionAndTeam(){
    string position=Adminservices::searchingPos;
    vector <Footballer> allplayers=fileServices::favLeague.footballers[position];
    vector<Footballer> wantedPlayers;
    for(auto player:allplayers){
        if(player.getFootballerTeam()==Adminservices::searchingTeam){
            wantedPlayers.push_back(player);
        }
    }
    return wantedPlayers;
}

Footballer Adminservices::singlePlayerSearch(QString playerName){
    map <string, vector<Footballer>> allplayers =fileServices::favLeague.footballers;
    string s= Adminservices::searchingPos;
    vector<Footballer> thisposition=allplayers[s];

    // qDebug() <<thisposition[0].getFootballerName();
    for(auto myplayer:thisposition)
    {
        QString name=QString::fromStdString(myplayer.getFootballerName());
        // qDebug() <<name<<playerName;
        if(name==playerName){
            return myplayer;
        }
    }
}
void Adminservices::updateFootballer(Footballer player){
    string s= Adminservices::searchingPos;
    vector<Footballer> thisposition=fileServices::favLeague.footballers[s];

    // qDebug() <<thisposition[0].getFootballerName();
    for(int i=0;i<thisposition.size();i++)
    {
        // qDebug() <<name<<playerName;
        if(thisposition[i].getFootballerName()==player.getFootballerName()){
            thisposition[i]=player;
            // qDebug() <<thisposition[i].getGameWeekPoints();
            break;
        }
    }
    fileServices::favLeague.footballers[s]=thisposition;


}
void Adminservices:: updateFootballerPoints(Footballer player ,string action){
    if(player.getFootballerPosition()=="GK"){
        if(action=="Clean Sheet"){
            player.setGameWeekPoints(player.getGameWeekPoints()+4);
        }
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+6);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty save"){
            player.setGameWeekPoints(player.getGameWeekPoints()+5);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Conceded 2 goals"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    else if(player.getFootballerPosition()=="DF"){
        if(action=="Clean Sheet"){
            player.setGameWeekPoints(player.getGameWeekPoints()+4);
        }
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+6);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Conceded 2 goals"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    else if(player.getFootballerPosition()=="MF"){
        if(action=="Clean Sheet"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+5);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    else if(player.getFootballerPosition()=="ST"){
         if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+4);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    // qDebug() <<player.getGameWeekPoints();
    this->updateFootballer(player);
}



