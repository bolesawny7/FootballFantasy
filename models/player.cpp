#include "player.h"
#include "user.h"
#include <cassert>

int Player::idCounter = 0;

/* -> constructors & destructor <- */
Player::Player(string fantasyTeamName) : User(signupStruct()), PlayerID(idCounter++), budget(150), fantasyTeamName(fantasyTeamName) {}
Player::~Player() {}

/* -> setters <- */
void Player::setBudget(int budget) {
    this->budget = budget;
}
void Player::setPlayer(Footballer footballer) {
    assert(footballer.getFootballerPrice() <= budget);
    fantasyTeamFootballers.push_back(footballer);
    this->setBudget(this->getBudget() - footballer.getFootballerPrice());
}
void Player:: setGameWeekPoints(int points){
    this->gameWeekPoints = points;
}

/* -> getters <- */
int Player::getBudget() {
    return budget;
}
int Player::getId() {
    return PlayerID;
}
vector<Footballer> Player::getFantasyTeamFootballers() {
    return fantasyTeamFootballers;
}
int Player:: getGameWeekPoints(){
    return gameWeekPoints;
}
