#include "league.h"
static int idCounter=1;
League::League(string name){
    this->Name=name;
}
string League::getLeagueName(){
    return Name;
}
int League::getLeagueId(){
    return id;
}
