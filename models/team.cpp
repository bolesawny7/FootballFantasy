#include "team.h"
int Team:: idCounter = 1;
 Team::Team(string name) {
    this->name = name;
     idCounter++;
 }
 string Team:: getTeamName(){
     return name;
 };
 void Team:: setTeamName(string name){
     this->name = name;
 };

 int Team:: getTeamId(){
     return teamID;
 }

 vector<pair<Footballer, int>> Team:: getTeamFootballers(){
     return teamFootballers;
 }

 void Team:: setTeamFootballers(){
     //iterate over all players and compare their teamId with this team id - rsc
 }


