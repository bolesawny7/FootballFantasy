#ifndef PLAYER_H
#define PLAYER_H
#include"string"
#include <vector>
#include "footballer.h"
#include "user.h"
#include "../Structs/PlayerStruct.cpp"
#include "../Structs/FootballerStruct.cpp"
using namespace std;
class Player :public User {
private:
    int Budget;
    string PlayerID;
    string FantasyTeamName;
    vector<FootballerStruct> FantasyTeamFootballers;
// public:

};

#endif // PLAYER_H
