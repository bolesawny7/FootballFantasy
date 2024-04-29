#include "team.h"
int Team:: idCounter = 1;
 Team::Team(string name) {
    this->name = name;
     idCounter++;
 }
 string Team:: getTeamName(){
     return name;
 };
 string Team:: setTeamName(string name){
     this->name = name;
 };

 string Team:: setLeagueId(int id){
     this->leagueID = id;
 };
 string Team:: getLeagueId(){
     return leagueID;
 };

 int Team:: getTeamId(){
     return id;
 }
