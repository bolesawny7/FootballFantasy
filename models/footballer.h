#ifndef FOOTBALLER_H
#define FOOTBALLER_H
// #include "team.h"
#include "string"
using namespace std;
class Footballer
{
private:
    static int idCounter;
    const int footballerId;
    string Name;
    int Price;
    string Position;
    int teamId;
public:
    /*-> constructor <-*/
    Footballer();
    Footballer(string Name,int price,string position);

    /*-> getters <-*/
    string getFootballerName();
    string getFootballerPosition();
    int getFootballerPrice();
    // Team getFootballerTeam();
    int getFootballerId();

    /*-> setters <-*/
    void setFootballerposition(string position);
    void setFootballerPrice(int price);
    void setFootballerTeam(int teamId);
};

#endif // FOOTBALLER_H
