#include "Team.hpp"
#include "Character.hpp"
namespace ariel{

TeamR::TeamR(Character* leader) : leader(leader) {
  this->leader = leader;
      add(leader);

}
TeamR:: TeamR() {}
void TeamR::add(Character* fighter) {
}

void TeamR::attack(TeamR* enemyTeam) {
}

int TeamR::stillAlive(){
    int aliveCount;
    return 0;
}

void TeamR::print() {
}
//Team
    void Team::attack(TeamR* team)
    {

    }
    void Team2::attack(TeamR* team)
    {
        
    }
    void SmartTeam::attack(TeamR* team)
    {
        
    }
}