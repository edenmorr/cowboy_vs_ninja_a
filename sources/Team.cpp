#include "Team.hpp"
#include "Character.hpp"
namespace ariel{

TeamR::TeamR(Character* leader) : leader(leader) {
  this->leader = leader;
}

void TeamR::add(Character* fighter) {
}

void TeamR::attack(TeamR* enemyTeam) {
}

int TeamR::stillAlive(){
    int aliveCount;
    return aliveCount;
}

void TeamR::print() {
}
}