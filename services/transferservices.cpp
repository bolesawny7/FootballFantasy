#include "transferservices.h"
#include <QString>
#include "../models/footballer.h"
#include "./fileservices.h"
#include "../models/league.h"
#include <string>
#include <QtCore>
#include <vector>

QString transferservices::searchValue = "";
int transferservices::position = 0;
transferservices::transferservices(){}
vector<Footballer> transferservices::playerSearch(QString playerName){
        fileServices files;
        map <string, vector<Footballer>> allplayers =files.loadFootballers();
        QString s=this->getSearchValue();
        vector<Footballer> thisposition=allplayers[s.toStdString()];
        vector<Footballer>wantedPlayers;
        // qDebug() << "works";
        for(auto player:thisposition)
        {
            QString name=QString::fromStdString(player.getFootballerName());
            name= name.toLower();
            // qDebug() <<name<<playerName;
            if(name.contains(playerName)){
                wantedPlayers.push_back(player);
            }
        }
        // for (auto player:wantedPlayers){
        //     QString name=QString::fromStdString(player.getFootballerName());
        //     qDebug() <<name<<playerName;
        // }
        return wantedPlayers;
}
QString transferservices::getSearchValue(){
    return searchValue;
}
void transferservices::setSearchValue(QString v){
    this->searchValue=v;
}
