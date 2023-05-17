#include "Character.hpp"
#include "cowboy.hpp"
#include "ninja.hpp"
#include "Point.hpp"
#include <vector>
namespace ariel{
class Team
{
private:
vector<Character*> members;
Character* leader;
public:
Team(Character* leader);
void add(Character* NewMember);
int stillAlive();
virtual void attack(Team* team) = 0;
void print();

vector<Character*> GetMembers();

Character* Getleader();
};
}
// class Team:public Team
// {
// public:
// Team(Character* leader):Team(leader){}
// void attack(Team* team) ;
// };

// class Team2:public Team
// {
// public:
// Team2(Character* leader):Team(leader){}
// void attack(Team* team);

// };
// class SmartTeam:public Team
//     {
// public:
// SmartTeam(Character* leader):Team(leader){}
// void attack(Team* team) ;
    

