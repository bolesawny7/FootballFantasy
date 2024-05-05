#ifndef FOOTBALLER_H
#define FOOTBALLER_H
#include "string"
using namespace std;
#include <vector>
class Footballer
{
private:
    string Name;
    int Price;
    string Team;
    string Position;
    static int idCounter;
    const int id = idCounter;
public:
    Footballer();
    Footballer(string Name,int price,string position,string team);
    //getters
    string getFootballerName();
    string getFootballerPosition();
    int getFootballerPrice();
    string getFootballerTeam();
    int getFootballerId();
    //setters
    void setFootballerposition(string position);
    void setFootballerPrice(int price);
    void setFootballerTeam(string teamid);
};

#endif // FOOTBALLER_H
