#include "league.h"
#include "team.h"
#include <queue>
/*-> constructor <-*/
League::League(string name): leagueId(idCounter++){
    this->Name=name;
}

/*-> initilize static counter  <-*/
int League:: idCounter = 1;

/*-> getters <-*/
string League::getLeagueName(){
    return Name;
}
int League::getLeagueId(){
    return leagueId;
}

map <string, vector <Footballer>> League:: getFootballerData(){
    return footballers;
}

vector<Team> League:: getTeams(){
    return teams;
}

void League :: setNewTeam(Team team){
    teams.push_back(team);
}
void League::setFootballers(string key,vector<Footballer>newFootballers){
    this->footballers.insert({key,newFootballers});
}

vector<Footballer> League::singlePosition(string position){
    vector <Footballer> pos=this->footballers[position];
    return pos;
}
Footballer League::luckywheel(vector<Footballer> footballers){
    int randomNum = rand() % footballers.size()/2;
    queue <Footballer> luckyFootballers;
    for(int i=0;i<randomNum;i++){
        int randomIndex = rand() % footballers.size()-1;
        luckyFootballers.push(footballers[randomIndex]);
    }
    for(int i=0;i<randomNum/2;i++){
        luckyFootballers.pop();
    }
    return luckyFootballers.front();
}
