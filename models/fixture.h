#ifndef FIXTURE_H
#define FIXTURE_H
#include "team.h"
#include "string"

using namespace std;

class Fixture
{
private:
    static int idCounter;
    int fixtureId = idCounter;
    Team homeTeam;
    Team awayTeam;
    string matchDate;

public:
    /* -> constructors <-*/
    Fixture(Team homeTeam, Team awayTeam, string matchDate);

    /* -> getters <- */
    int getFixtureId();
    Team getHomeTeam();
    Team getAwayTeam();
    string getMatchDate();
};

#endif // FIXTURE_H
