#include "fantasycontext.h"

string FantasyContext::searchingTeam="";
string FantasyContext::searchingPos="";

/* => initialize static members <= */
Player FantasyContext::player = getActivePlayer();
User FantasyContext::admin = getAdmin();
FantasyContext::FantasyContext() {}

/* => getters <= */
Player FantasyContext::getActivePlayer(){
    return player;
}

User FantasyContext::getAdmin()
{
    return admin;
}

// vector<Player> FantasyContext:: getActivePlayers(){
//     return players;
// }

/* => setters <=*/
void FantasyContext:: setActivePlayer(Player activePlayer){
    FantasyContext::player = activePlayer;
}

void FantasyContext::setAdmin( User newAdmin)
{
    FantasyContext::admin = newAdmin;
}

// void FantasyContext:: setPlayers(vector<Player> allPlayers){
//     players = allPlayers;
// }
