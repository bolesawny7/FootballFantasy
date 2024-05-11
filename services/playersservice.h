#ifndef PLAYERSSERVICE_H
#define PLAYERSSERVICE_H
#include "../models/footballer.h"
#include "../models/player.h"
#include <bits/stdc++.h>

class Playersservice
{
private:
    static vector<Player>players;
public:
    /* -> constructor <-*/
    Playersservice();
    vector<Footballer> searchWithPositionAndTeam();
    void updateFootballerPrice(Footballer player,bool increase,bool deacrease);
    /* -> create <- */
    static void setPlayer(Player player);
    void addFootballerToTeam(int leagueId, string position, int footballerId, int playerId);

    /* -> read <- */
    static vector<Player> getPlayers();
    bool findPlayer(loginStruct loginDto);
    Player getPlayer(int playerId);
    Footballer getFootballer(int leagueId, string position, int footballerId);

    /* -> update <- */
    void updateTeam(int leagueId, string position, int oldFootballerId, int newFootballerId, int playerId);
    /* -> delete <- */
    void removePlayerFromTeam(int footballerId);

    static void setPlayers(vector<Player> newPlayers);
};

#endif // PLAYERSSERVICE_H
