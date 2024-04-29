#ifndef PLAYER_H
#define PLAYER_H
#include "../models/footballer.h"
#include <bits/stdc++.h>
class playerService
{
public:
    playerService();
    bool addPlayerToTeam(int footballerId);
    bool removePlayerFromTeam(int footballerId);
    Footballer findFootballer();
};

#endif // PLAYER_H
