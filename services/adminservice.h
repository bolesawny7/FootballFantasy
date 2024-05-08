#ifndef ADMINSERVICE_H
#define ADMINSERVICE_H
#include "../models/league.h";
class adminservice
{
private:
    static vector <League> leagues;
public:
    adminservice();
    bool addPointsToPlayer(int footballerId);
    League& getLeague(int leagueId);
    void updateFootballerPrice(int leagueId, string position, int footballerId, int newPrice);
    void updateFootballerPoints(int leagueId, string position, int footballerId, int gameWeekPoints);

};

#endif // ADMINSERVICE_H
