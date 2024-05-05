#include "footballer.h"
int Footballer::idCounter=1;

Footballer::Footballer(string name,int price,string position,string team){
    this->Name=name;
    this->Price=price;
    this->Position=position;
};

// //getters
string Footballer::getFootballerName(){
    return Name;
};
string Footballer::getFootballerPosition(){
    return Position;
};
int Footballer::getFootballerPrice(){
    return Price;
};
// string getFootballerTeam();
// //setters
void Footballer::setFootballerposition(string position){
    this->Position=position;
};
void Footballer::setFootballerPrice(int price){
    this->Price=price;
};
void Footballer::setFootballerTeam(string team){
    this->Team=team;
};
int Footballer::getFootballerId(){
    return id;
};
