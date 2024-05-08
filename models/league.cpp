#include "league.h"
#include "team.h"
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

// <position, vector[footballers]>
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



// void League::updateFootballerPrice(string position, Footballer footballer, int newPrice) {
//     for (auto& footballerPair : footballers) {
//         if (footballerPair.first == position) {
//             for (auto& innerPair : footballerPair.second) {
//                 if (innerPair.second.getFootballerId() == footballer.getFootballerId()) {
//                     innerPair.second.setFootballerPrice(newPrice);
//                     break; // Exit inner loop after finding the footballer (optional)
//                 }
//             }
//             break; // Exit outer loop after finding the position (optional)
//         }
//     }
// }

// map <string, multimap <int, Footballer>, greater<int>> League:: getPlayers(){
//     return footballers;
// }

// multimap<int, Footballer, greater<int>> League::getFootballersByPosition(string position) {
//     multimap<int, Footballer, greater<int>> footballersByPosition;

//     for (auto const& footballerPair : footballers) {
//         if (footballerPair.first == position) {
//             footballersByPosition = footballerPair.second;
//             return footballersByPosition;
//         }
//     }
// }

// void League:: updateFootballerPrice(string position, Footballer footballer, int newPrice) {
//     multimap<int, Footballer, greater<int>> innerMap = getFootballersByPosition(position);

//     for (auto footballerPair : innerMap) {
//         if (footballerPair.second.getFootballerId() == footballer.getFootballerId()) { // Use member variable comparison
//             footballerPair.second.setFootballerPrice(newPrice);
//         }
//     }
// }

/* -> setters <- */
// void League:: setPlayer(Footballer footballer){
//     footballers.insert({"GK", {0, footballer}});
// }
// void League:: setPoints(){
//     auto it = players.begin();
//     for(; it != players.end(); it++){
//         Player player = it->second.first;
//         int gameWeekPoints = it->second.second;
//         int totalPoints = it->first + gameWeekPoints;
//         it = players.erase(it);
//         players.insert({totalPoints, {player, gameWeekPoints}});
//     }
// };
