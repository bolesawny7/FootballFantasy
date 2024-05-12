#include "leagueservice.h"
#include "./playersservice.h"
#include <vector>
#include "../models/player.h"
#include "../utils/fantasycontext.h"
#include <map>
// all players
multimap<int, Player> LeagueService::laliga;
multimap<int, Player> LeagueService::bundesliga;
multimap<int, Player> LeagueService::PremierLeague;
vector<Player>players = Playersservice::getPlayers();

// separate players into multimaps by favleague member;
multimap<int, Player> LeagueService::getLaliga() const
{
    return laliga;
}

void LeagueService::setLaliga(const multimap<int, Player> &newLaliga)
{
    laliga = newLaliga;
}

LeagueService::LeagueService() {
    for(auto player : players){
    }
}

string favleague2 = FantasyContext::getActivePlayer().getFavleague();
Player LeagueService:: higherGameweekPoints(){
    for (auto player : players) {
        if(player.getFavleague()=="laliga"){
            this->laliga.insert({player.getTotalPoints(), player});
        }
        else if(player.getFavleague()=="bundesliga"){
            this->bundesliga.insert({player.getTotalPoints(), player});
        }
        else if(player.getFavleague()=="PremierLeague"){
            this->PremierLeague.insert({player.getTotalPoints(), player});
        }
    }
    if(favleague2=="laliga"){
        Player max=laliga.begin()->second;
        auto it = laliga.begin();
        for (;it!=laliga.end();it++){
            if(max.getGameWeekPoints()<it->second.getGameWeekPoints()){
                max=it->second;
            }
        }
        return max;
    }
    else if (favleague2=="bunesliga"){
        Player max=bundesliga.begin()->second;
        auto it = bundesliga.begin();
        for (;it!=bundesliga.end();it++){
            if(max.getGameWeekPoints()<it->second.getGameWeekPoints()){
                max=it->second;
            }
        }
        return max;
    }
    else if (favleague2=="PremierLeague"){
        Player max=PremierLeague.begin()->second;
        auto it = PremierLeague.begin();
        for (;it!=PremierLeague.end();it++){
            if(max.getGameWeekPoints()<it->second.getGameWeekPoints()){
                max=it->second;
            }
        }
        return max;
    }
}

Player LeagueService :: higherTotalPoints(){
// return laliga.end()-1
    if(favleague2=="laliga"){
        auto it = laliga.begin();
        while(it !=laliga.end()){
             ++it;
        }
        return it->second;
    }
    else if (favleague2=="bundesliga"){
        auto it = bundesliga.begin();
        while(it !=bundesliga.end()){
            ++it;
        }
        return it->second;
    }
    else if (favleague2=="PremierLeague"){
        auto it = PremierLeague.begin();
        while(it !=PremierLeague.end()){
            ++it;
        }
        return it->second;
    }
}

