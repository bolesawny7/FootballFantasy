#include "footballer.h"
#include "team.h"

/*-> constructor <-*/
Footballer::Footballer(string name, float price, string position,string TeamName): footballerId(idCounter++){
    this->Name=name;
    this->Price=price;
    this->Position=position;
    this->team=TeamName;
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
string Footballer::getFootballerTeam(){
    return team;
};

/*-> setters <-*/
void Footballer::setFootballerposition(string position){
    this->Position=position;
};
void Footballer::setFootballerPrice(int price){
    this->Price=price;
};

int Footballer::getFootballerId(){
    return footballerId;
};
