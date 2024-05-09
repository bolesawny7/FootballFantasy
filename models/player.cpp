#include "player.h"
#include "user.h"
#include <cassert>

int Player::idCounter = 0;

/* -> constructors & destructor <- */
string Player::getFavleague() const
{
    return favleague;
}

void Player::setFavleague(const string &newFavleague)
{
    favleague = newFavleague;
}

int Player::getTotalPoints() const
{
    return totalpoints;
}
Player::Player(signupStruct signupDto)
    : User(signupDto), // Call User constructor with signupDto
    fantasyTeamName(fantasyTeamName), PlayerID(++idCounter), budget(150) {}

Player::~Player() {
    setGameWeekPoints();
}

/* -> setters <- */
void Player::setBudget(int budget) {
    this->budget = budget;
}
void Player::setPlayer(Footballer footballer) {
    assert(footballer.getFootballerPrice() <= budget);
    fantasyTeamFootballers.push_back(footballer);
    this->setBudget(this->getBudget() - footballer.getFootballerPrice());
}
void Player:: setGameWeekPoints(){
    int totalPts = 0;
    for(auto footballer: this->fantasyTeamFootballers)
        totalPts += footballer.getGameWeekPoints();
    this->totalpoints=totalPts;
}

void Player::updateTeam(Footballer oldFootballer, Footballer newFootballer) {
    int calc = this->getBudget() - oldFootballer.getFootballerPrice() + newFootballer.getFootballerPrice();
    assert(calc > 0);
    auto it = fantasyTeamFootballers.end();
    for (auto it = fantasyTeamFootballers.begin(); it != fantasyTeamFootballers.end(); ++it) {
        if (it->getFootballerId() == oldFootballer.getFootballerId()) {
            fantasyTeamFootballers.erase(it);
            break; // Exit the loop after erasing the element
        }
    }
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
