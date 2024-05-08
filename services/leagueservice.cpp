#include "leagueservice.h"
#include "./playersservice.h"
#include <vector>

// all players
vector<Player>players = Playersservice::getPlayers();

// separate players into multimaps by favleague member;
LeagueService::LeagueService() {
    for(auto player : players){
    }
}

Player LeagueService:: higherGameweekPoints(){

}

Player higherTotalPoints(){

}
