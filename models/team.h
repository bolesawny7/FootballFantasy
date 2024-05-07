#ifndef TEAM_H
#define TEAM_H
#include "string"
#include <vector>
#include "footballer.h"
using namespace std;
class Team
{
private:
    string name;
    static int idCounter;
    int teamID = idCounter;
    // vector<pair<Footballer, int>> teamFootballers;

public:
    Team(string name);
    string getTeamName();
    int getTeamId();
    void setTeamName(string name);
    void setLeagueId(int id);
    // vector<pair<Footballer, int>> getTeamFootballers();
    void setTeamFootballers();
};

#endif // TEAM_H
