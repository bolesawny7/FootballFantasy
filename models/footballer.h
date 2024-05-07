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
    const int footballerId;
    string Name;
    int Price;
    string Position;
    int teamId;
    string teamName;
    int totalPoints = 0;
    int gameweekPoints;
public:
    /*-> constructor <-*/
    Footballer();
    Footballer(string Name,int price,string position, string teamName);

    /*-> getters <-*/
    string getFootballerName();
    string getFootballerPosition();
    int getFootballerPrice();
    // Team getFootballerTeam();
    int getFootballerId();
    int getGameWeekPoints();
    string getFootballerTeam();

    /*-> setters <-*/
    void setFootballerposition(string position);
    void setFootballerPrice(int price);
    void setFootballerTeam(int teamId);
    void setGameWeekPoints(int points);
};

#endif // FOOTBALLER_H
