#ifndef TEAM_H
#define TEAM_H
#include "string"
#include <vector>
using namespace std;
class Team
{
private:
    string teamID;
    string name;
    string leagueID;
    static int idCounter;
    const int id = idCounter;

public:
    Team(string name);
    ~Team();
    string getTeamName();
    int getTeamId();
    string setTeamName(string name);
    string setLeagueId(int id);
    string getLeagueId();
};

#endif // TEAM_H
