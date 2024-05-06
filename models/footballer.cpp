#include "footballer.h"
#include "team.h"

/*-> constructor <-*/
Footballer::Footballer(string name, int price, string position): footballerId(idCounter++){
    this->Name=name;
    this->Price=price;
    this->Position=position;
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
int Footballer::getFootballerPrice(){
    return Price;
};
// Team getFootballerTeam();

/*-> setters <-*/
void Footballer::setFootballerposition(string position){
    this->Position=position;
};
void Footballer::setFootballerPrice(int price){
    this->Price=price;
};
void Footballer::setFootballerTeam(int teamId){
    this->teamId = teamId;
};
int Footballer::getFootballerId(){
    return footballerId;
};
