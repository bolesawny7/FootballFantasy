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
    map <string, vector<Footballer>> footballers;

public:

    /*-> constructor <-*/
    League(string name);
    vector <Team> teams;

    /*-> getters <-*/
    int getLeagueId();
    string getLeagueName();
    // map <string, multimap <int, Footballer>, greater<int>> getFootballers();
    map <string, vector <Footballer>> getFootballerData();
    vector<Team> getTeams();
    vector<Footballer>singlePosition(string position);

    /*-> setters <-*/
    void setPlayer(Footballer footballer);
    void updateFootballerPrice(string position, Footballer footballer, int newPrice);
    void setPoints();
    void setFootballers(string key,vector<Footballer>);
    void setNewTeam(Team team);

};

#endif // LEAGUE_H
