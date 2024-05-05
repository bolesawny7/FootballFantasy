#include "player.h"
#include "user.h"
#include <cassert>

int Player::idCounter = 0;

Player::Player(string fantasyTeamName) : User(signupStruct()), PlayerID(idCounter++), budget(150), fantasyTeamName(fantasyTeamName) {}
Player::~Player() {}

int Player::getBudget() {
    return budget;
}

int Player::getId() {
    return PlayerID;
}
void Player::setBudget(int budget) {
    this->budget=budget;
}

vector<Footballer> Player::getFantasyTeamFootballers() {
    return fantasyTeamFootballers;
}

void Player::setPlayer(Footballer footballer) {
    assert(footballer.getFootballerPrice() <= budget);
    fantasyTeamFootballers.push_back(footballer);
    this->setBudget(this->getBudget() - footballer.getFootballerPrice());
}
