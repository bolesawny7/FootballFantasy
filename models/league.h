#ifndef LEAGUE_H
#define LEAGUE_H
#include "string"
#include "player.h"
#include "team.h"
#include <map>
#include <vector>
using namespace std;

class League {
private:
    static int idCounter;
    int leagueId = idCounter;
    string Name;
    /* map < totalPints, < player, gameWeekPoints>, reverse > */
    multimap <int, pair <Player, int>, greater<int>> players;
public:
    vector <Footballer> goalkeepers;
    vector <Footballer> attackers;
    vector <Footballer> midfielders;
    vector <Footballer> defenders;
    vector <Team> teams;
    /*-> constructor <-*/
    League(string name);

    /*-> getters <-*/
    int getLeagueId();
    string getLeagueName();
    multimap <int, pair <Player, int>, greater<int>> getPlayers();

    /*-> setters <-*/
    void setPlayer(Player player);
    void setPoints();

};

#endif // LEAGUE_H
