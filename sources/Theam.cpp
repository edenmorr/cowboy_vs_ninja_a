#include "Team.hpp"
#include "Character.hpp"
namespace ariel{

Team::Team(Character* leader) : leader(leader) {
    members.push_back(leader);
}

void Team::add(Character* fighter) {
}

void Team::attack(Team* enemyTeam) {
}

int Team::stillAlive(){
    int aliveCount;
    return aliveCount;
}

void Team::print() {
}
}