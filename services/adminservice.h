#ifndef ADMINSERVICE_H
#define ADMINSERVICE_H
#include "../models/league.h";
#include "../models/footballer.h"
#include <vector>
#include <QString>
class adminservice
{
private:
    static vector <League> leagues;

public:

    adminservice();
    vector<Footballer> searchWithPositionAndTeam();
    void updateFootballerPrice(Footballer player,bool increase,bool deacrease);
    void updateFootballerPoints(Footballer player ,string action);

};

#endif // ADMINSERVICE_H
