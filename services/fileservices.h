#ifndef FILESERVICES_H
#define FILESERVICES_H
#include <vector>
#include "../models/team.h"
#include "../models/footballer.h"
#include "../models/league.h"
#include <map>
class fileServices
{
private:
    static vector <League> leagues;
public:
    static League favLeague;
    fileServices();
    vector<Team>loadTeam();
    map <string, vector<Footballer>> loadFootballers();
    void writeTeams();
    void writePlayers();
    void storeUSerData();
    void loadUserData();
    League getLeagueByName(string LName);
    static vector <League> getLeagues();
    static void updateLeague(League league);
};

#endif // FILESERVICES_H
