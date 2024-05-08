#ifndef LEAGUESERVICE_H
#define LEAGUESERVICE_H
#include <map>
#include "../models/player.h"
#include "../models/fantasyleague.h"
class LeagueService
{
private:
    // < total points, player>
    static multimap<int, Player> laliga;
    static multimap<int, Player> bundesliga;
    static multimap<int, Player> PremierLeague;
public:
    LeagueService();
    Player higherGameweekPoints();
    Player higherTotalPoints();
    multimap<int, Player> getLaliga() const;
    void setLaliga(const multimap<int, Player> &newLaliga);
};

#endif // LEAGUESERVICE_H
