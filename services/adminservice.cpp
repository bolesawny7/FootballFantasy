#include "adminservice.h"
#include "../models/league.h" // Assuming league.h is in the models directory

adminservice::adminservice() {
    leagues.push_back(League("laliga"));
    leagues.push_back(League("bundesliga"));
    leagues.push_back(League("egyptionleague"));
}
League& adminservice::getLeague(int leagueId) {
    for (int i = 0; i < leagues.size(); ++i) {
        if (leagues[i].getLeagueId() == leagueId) {
            return leagues[i];
        }
    }
}
void adminservice:: updateFootballerPrice(int leagueId, string position, int footballerId, int newPrice){
    League league = getLeague(leagueId);
    for (auto& footballerPair : league.getFootballerData()) {
        if (footballerPair.first == position) {
            for (auto& innerPair : footballerPair.second) {
                if (innerPair.getFootballerId() == footballerId) {
                    innerPair.setFootballerPrice(newPrice);
                    break;
                }
            }
            break;
        }
    }
}
// void adminservice:: updateFootballerPoints(int leagueId, string position, int footballerId, int gameWeekPoints){
//     League league = getLeague(leagueId);
//     for (auto& footballerPair : league.getFootballerData()) {
//         if (footballerPair.first == position) {
//             for (auto& innerPair : footballerPair.second) {
//                 if (innerPair.getFootballerId() == footballerId) {
//                     innerPair.setGameWeekPoints(gameWeekPoints);
//                     break;
//                 }
//             }
//             break;
//         }
//     }
// }
void adminservice:: updateFootballerPoints(int leagueId, string position, int footballerId,float mins,bool yellowCards,bool redCard,int goals, int assists){
    League league = getLeague(leagueId);
    for (auto& footballerPair : league.getFootballerData()) {
        if (footballerPair.first == position) {
            for (auto& innerPair : footballerPair.second) {
                if (innerPair.getFootballerId() == footballerId) {
                    innerPair.setGameWeekPoints(mins,yellowCards,redCard,goals,assists);
                    break;
                }
            }
            break;
        }
    }
}


