#include "adminservice.h"
#include "../models/league.h" // Assuming league.h is in the models directory
#include "../models/player.h"
#include "../utils/fantasycontext.h"



adminservice::adminservice() {

}

void adminservice::updateFootballerPrice(Footballer player,bool increase,bool deacrease){
    if(increase){
        player.setFootballerPrice(player.getFootballerPrice()+0.1);
    }
    else{
        player.setFootballerPrice(player.getFootballerPrice()-0.1);
    }
}
vector <Footballer> adminservice::searchWithPositionAndTeam(){
    string position=FantasyContext::searchingPos;
    vector <Footballer> allplayers=League::footballers[position];
    vector<Footballer> wantedPlayers;
    for(auto player:allplayers){
        if(player.getFootballerTeam()==FantasyContext::searchingTeam){
            wantedPlayers.push_back(player);
        }
    }
    return wantedPlayers;
}



void adminservice:: updateFootballerPoints(Footballer player ,string action){
    if(player.getFootballerPosition()=="GK"){
        if(action=="Clean Sheet"){
            player.setGameWeekPoints(player.getGameWeekPoints()+4);
        }
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+6);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty save"){
            player.setGameWeekPoints(player.getGameWeekPoints()+5);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Conceded 2 goals"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    else if(player.getFootballerPosition()=="DF"){
        if(action=="Clean Sheet"){
            player.setGameWeekPoints(player.getGameWeekPoints()+4);
        }
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+6);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Conceded 2 goals"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    else if(player.getFootballerPosition()=="MF"){
        if(action=="Clean Sheet"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+5);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
    else if(player.getFootballerPosition()=="ST"){
        else if(action =="Starting 11"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="60mins+"){
            player.setGameWeekPoints(player.getGameWeekPoints()+1);
        }
        else if(action=="Goal"){
            player.setGameWeekPoints(player.getGameWeekPoints()+4);
        }
        else if(action=="Assist"){
            player.setGameWeekPoints(player.getGameWeekPoints()+3);
        }
        else if(action=="Penalty miss"){
            player.setGameWeekPoints(player.getGameWeekPoints()-2);
        }
        else if(action=="Yellow card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-1);
        }
        else if(action=="Red card"){
            player.setGameWeekPoints(player.getGameWeekPoints()-3);
        }
    }
}



