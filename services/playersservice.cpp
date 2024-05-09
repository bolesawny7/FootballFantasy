#include "playersservice.h"
#include <cassert>
#include "../models/league.h"
#include "../utils/fantasycontext.h"
#include "./fileservices.h"
using namespace std;

vector <League> leagues = fileServices::getLeagues();
Playersservice::Playersservice() {}

vector<Player> Playersservice:: players;

bool Playersservice:: findPlayer(loginStruct loginDto){
    for(int i = 0; i < players.size(); i++){
        cout << players[i].getEmail() << endl;
    }
    for(int i = 0; i < players.size(); i++){
        cout << players[i].getEmail() << endl << loginDto.email << endl << loginDto.password << endl << players[i].getPassword() << endl;
        if(players[i].getEmail() == loginDto.email){
            if(players[i].getPassword() == loginDto.password){
                FantasyContext::setActivePlayer(players[i]);
                return true;
            }else
                return false;
        }
    }
    return false;
}

Player Playersservice:: getPlayer(int playerId){
    for(auto player: players)
        if(player.getId() == playerId)
            return player;
    assert(true == 0);
}



Footballer Playersservice:: getFootballer(int leagueId, string position, int footballerId){
    // iterate 3 times
    for(auto league : leagues){
        if(league.getLeagueId() == leagueId ){
            map<string, vector<Footballer>> allFootballers = league.getFootballerData();
            auto it = allFootballers.begin();
            // iterate 4 times
            for(; it != allFootballers.end(); it++)
                if(it->first == position){
                    vector <Footballer> specFootballers = it->second;
                    // iterate on all players with specific position
                    for(auto footballer: specFootballers)
                        if(footballer.getFootballerId() == footballerId)
                            return footballer;
                }
        }
    }
    // big(o) = 3 * 4 * all players = all players hehehe rsc
    assert(true == 0);
}

void Playersservice:: setPlayer(Player player){
    Playersservice:: players.push_back(player);
}
vector<Player> Playersservice:: getPlayers(){
    return players;
}

void Playersservice:: addFootballerToTeam(int leagueId, string position, int footballerId, int playerId){
    Player player = getPlayer(playerId);
    Footballer footballer = getFootballer(leagueId, position, footballerId);
    player.setPlayer(footballer);
}

void Playersservice:: updateTeam(int leagueId, string position, int oldFootballerId, int newFootballerId, int playerId){
    Player player = getPlayer(playerId);
    Footballer oldFootballer = getFootballer(leagueId, position, oldFootballerId);
    Footballer newFootballer = getFootballer(leagueId, position, newFootballerId);
    player.updateTeam(oldFootballer, newFootballer);
}
