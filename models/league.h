#ifndef LEAGUE_H
#define LEAGUE_H
#include "string"
#include "team.h"
#include "footballer.h"
#include <vector>
using namespace std;

class League {
private:
    string Name;
    static int idCounter;

    int leagueId = idCounter;
public:
    vector<Footballer>goalkeepers;
    vector<Footballer>defenders;
    vector<Footballer>midfielders;
    vector<Footballer>attackers;
    vector <Team> teams;
    League(string name);
    int getLeagueId();
    string getLeagueName();
};

#endif // LEAGUE_H
