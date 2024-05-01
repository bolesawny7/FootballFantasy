#ifndef LEAGUE_H
#define LEAGUE_H
#include "string"
#include "team.h"
#include <vector>
using namespace std;

class League {
private:
    string Name;
    static int idCounter;
    int leagueId = idCounter;
public:
    League(string name);
    ~League();
    int getLeagueId();
    string getLeagueName();
};

#endif // LEAGUE_H
