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
    static map <string, vector<Footballer>> footballers;
    static vector <Team> teams;
public:

    /*-> constructor <-*/
    League(string name);

    /*-> getters <-*/
    int getLeagueId();
    string getLeagueName();
    // map <string, multimap <int, Footballer>, greater<int>> getFootballers();
    map <string, vector <Footballer>> getFootballerData();
    vector<Team> getTeams();

    /*-> setters <-*/
    void setPlayer(Footballer footballer);
    void updateFootballerPrice(string position, Footballer footballer, int newPrice);
    multimap <int, Footballer, greater<int>> getFootballersByPosition(string position);
    void setPoints();
    void setNewTeam(Team team);

};

#endif // LEAGUE_H
