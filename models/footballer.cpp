#include "footballer.h"
#include "team.h"

/*-> constructor <-*/
Footballer::Footballer(string name,int points, float price, string position, string teamName): footballerId(idCounter++){
    this->Name=name;
    this->Price=price;
    this->gameweekPoints= points;
    this->Position=position;
    this->teamName = teamName;
};

/*-> initialize static counter <-*/
int Footballer::idCounter = 1;

/*-> getters <-*/
string Footballer::getFootballerName(){
    return Name;
};
string Footballer::getFootballerPosition(){
    return Position;
};
float Footballer::getFootballerPrice(){
    return Price;
};
int Footballer:: getGameWeekPoints(){
    return gameweekPoints;
}
string Footballer:: getFootballerTeam(){
    return teamName;
}
// Team getFootballerTeam();

/*-> setters <-*/
void Footballer::setFootballerposition(string position){
    this->Position=position;
};
void Footballer::setFootballerPrice(float price){
    this->Price=price;
};
void Footballer::setFootballerTeam(int teamId){
    this->teamId = teamId;
};
int Footballer::getFootballerId(){
    return footballerId;
};
void Footballer:: setGameWeekPoints(int points){
    this->gameweekPoints = points;
    this->totalPoints += gameweekPoints;
}
