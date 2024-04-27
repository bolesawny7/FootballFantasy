#ifndef PLAYER_H
#define PLAYER_H
#include"string"
#include <vector>
#include "footballer.h"
#include "../Structs/PlayerStruct.cpp"
#include "../Structs/FootballerStruct.cpp"
using namespace std;
class Player : user
{
private:
    int Budget;
    string PlayerID;
    string FantasyTeamName;
    vector<FootballerStruct> FantasyTeamFootballers;
public:

};

#endif // PLAYER_H
