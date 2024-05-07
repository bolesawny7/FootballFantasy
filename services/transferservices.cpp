#include "transferservices.h"
#include <QString>
#include "../models/footballer.h"
#include "./fileservices.h"
#include "../models/league.h"
#include <string>
#include <vector>

transferservices::transferservices() {

}
vector <Footballer> transferservices::playerSearch(QString playerName){
        fileServices files;
    vector <Footballer> allplayers =files.loadFootballers("GK");
        vector<Footballer>wantedPlayers;
        for(auto player:allplayers)
        {
            QString name=QString::fromStdString(player.getFootballerName());
            name.toLower();
            if(name.contains(playerName)){
                wantedPlayers.push_back(player);
            }
        }
        return wantedPlayers;
}
