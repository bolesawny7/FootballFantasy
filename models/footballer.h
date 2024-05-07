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
    float Price;
    string Position;
    string team;
public:
    /*-> constructor <-*/
    Footballer();
    Footballer(string Name,float price,string position,string teamName);

    /*-> getters <-*/
    string getFootballerName();
    string getFootballerPosition();
    float getFootballerPrice();
    string getFootballerTeam();
    int getFootballerId();

    /*-> setters <-*/
    void setFootballerposition(string position);
    void setFootballerPrice(int price);
    void setFootballerTeam(int teamId);
};

#endif // FOOTBALLER_H
