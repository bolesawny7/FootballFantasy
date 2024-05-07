#include "fantasyleague.h"
#include "string"
using namespace std;

/* -> constructor <- */
FantasyLeague:: FantasyLeague(string leagueName): fantasyLeagueID(idCounter++),leagueName(leagueName){};

/* -> static counter <- */
int FantasyLeague:: idCounter = 1;

/* -> getters <- */
int FantasyLeague:: getFantasyTeamId(){
    return fantasyLeagueID;
}
string FantasyLeague::getLeagueName(){
    return leagueName;
}
multimap <int, pair <Player, int>, greater<int>> FantasyLeague:: getPlayers(){
    return players;
}

/* -> setters <- */
void FantasyLeague:: setPlayer(Player player){
    players.insert({0, {player, 0}});
}
void FantasyLeague:: setPoints(){
    auto it = players.begin();
    for(; it != players.end(); it++){
        Player player = it->second.first;
        int gameWeekPoints = it->second.second;
        int totalPoints = it->first + gameWeekPoints;
        it = players.erase(it);
        players.insert({totalPoints, {player, gameWeekPoints}});
    }
};
