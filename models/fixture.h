#ifndef FIXTURE_H
#define FIXTURE_H
#include "string"

using namespace std;

class Fixture
{
private:
    string FixtureID;
    string HomeTeamID;
    string AwayTeamID;
    string matchDate;

public:
    Fixture();
};

#endif // FIXTURE_H
