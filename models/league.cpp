#include "league.h"

/*-> constructor <-*/
League::League(string name): leagueId(idCounter++){
    this->Name=name;
}

/*-> initilize static counter  <-*/
int League:: idCounter = 1;

/*-> getters <-*/
string League::getLeagueName(){
    return Name;
}
int League::getLeagueId(){
    return leagueId;
}
multimap <int, pair <Player, int>, greater<int>> League:: getPlayers(){
    return players;
}

/* -> setters <- */
void League:: setPlayer(Player player){
    players.insert({0, {player, 0}});
}
void League:: setPoints(){
    auto it = players.begin();
    for(; it != players.end(); it++){
        Player player = it->second.first;
        int gameWeekPoints = it->second.second;
        int totalPoints = it->first + gameWeekPoints;
        it = players.erase(it);
        players.insert({totalPoints, {player, gameWeekPoints}});
    }
};

