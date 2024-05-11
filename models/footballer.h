#ifndef FOOTBALLER_H
#define FOOTBALLER_H
// #include "team.h"
#include "string"
#include <vector>
using namespace std;
class Footballer
{
private:
    static int idCounter;
    int footballerId;
    string Name;
    float Price;
    string Position;
    int teamId;
    string teamName;
    int totalPoints = 0;
    int gameweekPoints;
public:
    /*-> constructor <-*/
    Footballer();
    Footballer(string Name,int points,float price,string position, string teamName);

    /*-> getters <-*/
    string getFootballerName();
    string getFootballerPosition();
    float getFootballerPrice();
    // Team getFootballerTeam();
    int getFootballerId();
    int getGameWeekPoints();
    string getFootballerTeam();

    /*-> setters <-*/
    void setFootballerposition(string position);
    void setFootballerPrice(float price);
    void setFootballerTeam(int teamId);
    void setGameWeekPoints(int points);
};

#endif // FOOTBALLER_H
