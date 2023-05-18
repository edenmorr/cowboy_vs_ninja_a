#include "Character.hpp"
#include "Cowboy.hpp"
#include "ninja.hpp"
#include "Point.hpp"
#include <vector>
#pragma once

namespace ariel{
class TeamR
{
private:
vector<Character*> members;
Character* leader;

public:
TeamR();
TeamR(Character* leader);
void add(Character* NewMember);
int stillAlive();
virtual void attack(TeamR* team) = 0;
void print();
int size(){
    return 0;
}
vector<Character*> GetMembers();

Character* Getleader();
};

class Team:public TeamR
{
public:
Team(Character* leader):TeamR(leader){}
void attack(TeamR* team) override;
};

class Team2:public TeamR
{
public:
Team2(Character* leader):TeamR(leader){}
void attack(TeamR* team) override;
};

class SmartTeam:public TeamR
    {
public:
SmartTeam(Character* leader):TeamR(leader){}
void attack(TeamR* team) override;
    };
    }
