#ifndef LEAGUESERVICE_H
#define LEAGUESERVICE_H
#include <map>
#include "../models/player.h"
#include "../models/fantasyleague.h"
class LeagueService
{
private:
    // < total points, player>
    multimap<int, Player> laliga;
    multimap<int, Player> bundesliga;
    multimap<int, Player> PremierLeague;
public:
    LeagueService();
    Player higherGameweekPoints();
    Player higherTotalPoints();
    multimap<int, Player> getLaliga() const;
    void setLaliga(const multimap<int, Player> &newLaliga);
};

#endif // LEAGUESERVICE_H
