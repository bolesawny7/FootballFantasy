#include "fixture.h"

/*-> construcotrs <-*/
Fixture::Fixture(Team home, Team away, string date)
    :fixtureId(idCounter++), homeTeam(home), awayTeam(away), matchDate(date){
}

/*initialize static counter*/
int Fixture:: idCounter = 1;

/*-> getters <-*/
int Fixture:: getFixtureId(){
    return fixtureId;
};
Team Fixture:: getHomeTeam(){
    return homeTeam;
};
Team Fixture:: getAwayTeam(){
    return awayTeam;
};
string Fixture:: getMatchDate(){
    return matchDate;
}

