#ifndef LEAGUESERVICE_H
#define LEAGUESERVICE_H
#include <map>
#include "../models/player.h"
class LeagueService
{
private:
    multimap<int, Player> laliga;
    multimap<int, Player> bundesliga;
    multimap<int, Player> seriaA;
public:
    LeagueService();
    Player higherGameweekPoints();
    Player higherTotalPoints();
};

#endif // LEAGUESERVICE_H
