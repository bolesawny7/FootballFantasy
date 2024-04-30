#ifndef FANTASYLEAGUE_H
#define FANTASYLEAGUE_H
#include "string"
#include "player.h"
using namespace std;
class FantasyLeague
{
public:
    string LeagueID;
    string LeagueName;
    vector <Footballer> Players[];
};

#endif // FANTASYLEAGUE_H
