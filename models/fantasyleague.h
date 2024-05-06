#ifndef FANTASYLEAGUE_H
#define FANTASYLEAGUE_H
#include "string"
#include "player.h"
#include "map"
using namespace std;
class FantasyLeague
{
private:
    static int idCounter;
    int fantasyLeagueID;
    string leagueName;
    /* map < totalPints, < player, gameWeekPoints>, reverse > */
    multimap <int, pair <Player, int>, greater<int>> players;
public:
    /* -> constructor <- */
    FantasyLeague(string LeagueName);

    /* -> getters <- */
    int getFantasyTeamId();
    string getLeagueName();
    multimap <int, pair <Player, int>, greater<int>> getPlayers();

    /* -> setters <- */
    void setPlayer(Player player);
    void setPoints();
};

#endif // FANTASYLEAGUE_H
