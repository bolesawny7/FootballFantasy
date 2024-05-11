#ifndef ADMINSERVICES_H
#define ADMINSERVICES_H
#include "../models/league.h";
#include "../models/footballer.h"
#include <vector>
#include <QString>
class Adminservices
{
private:

public:
    static string searchingTeam;
    static string searchingPos;
    Footballer singlePlayerSearch(QString playerName);
    Adminservices();
    vector<Footballer> searchWithPositionAndTeam();
    void updateFootballer(Footballer player);
    void updateFootballerPrice(Footballer player,bool increase,bool deacrease);
    void updateFootballerPoints(Footballer player ,string action);

};

#endif // ADMINSERVICE_H
