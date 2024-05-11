#include "fantasycontext.h"
#include "../services/playersservice.h"

/* => initialize static members <= */
Player FantasyContext::player = getActivePlayer();
User FantasyContext::admin = getAdmin();
int FantasyContext::index=0;
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
void FantasyContext:: setActivePlayer(Player activePlayer,int index){
    FantasyContext::player = activePlayer;
    FantasyContext::index=index;
}
void FantasyContext:: savePlayer(){
    vector <Player> players=Playersservice::getPlayers();
    players[FantasyContext::index]=FantasyContext::getActivePlayer();
    Playersservice::setPlayers(players);
}

void FantasyContext::setAdmin( User newAdmin)
{
    FantasyContext::admin = newAdmin;
}

// void FantasyContext:: setPlayers(vector<Player> allPlayers){
//     players = allPlayers;
// }
