#include "transferservices.h"
#include <QString>
#include "../models/footballer.h"
#include "./fileservices.h"
#include "../models/league.h"
#include <string>
#include <QtCore>
#include <vector>

transferservices::transferservices() {

}
vector<Footballer> transferservices::playerSearch(QString position,QString playerName){
        fileServices files;
        map <string, vector<Footballer>> allplayers =files.loadFootballers();
        string pos=position.toStdString();
        vector<Footballer> thisposition=allplayers[pos];
        vector<Footballer>wantedPlayers;
        qDebug() << "works";
        for(auto player:thisposition)
        {
            QString name=QString::fromStdString(player.getFootballerName());
            name= name.toLower();
            qDebug() <<name<<playerName;
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
