#include "doctest.h"
#include <stdexcept>
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("cheacking Point"){
    Point x(0,0);
    Point y(0,4);
    CHECK_EQ(x.getX(),0.0);
    CHECK_EQ(x.getY(),0.0);
    CHECK_EQ(x.distance(y),4);
    x.setX(8);
    y.setY(8);
    CHECK_EQ(x.getX(),8.0);
    CHECK_EQ(y.getY(),8.0);
}
TEST_CASE("cheacking Team"){
    OldNinja x ("sungoku",Point(1.5,3.5));
    Cowboy y("nikita",Point(2.2,3.3));
    ninja z(Point(1,3),"shakamaki",2,0);

    Cowboy t("zec",Point(1.5,3));
    ninja w(Point(1,3),"shakamaki",2,0);

  Cowboy cowboy{"Eve", Point{10, 10}};
    Team tm1(&x);
    CHECK_EQ(tm1.stillAlive(),1);
    tm1.add(&y);
    CHECK_EQ(tm1.size(), 1);
    tm1.add(&z);
    CHECK_EQ(tm1.size(), 2);
    CHECK_THROWS(tm1.add(&y));
    Team tm2(&w);
    tm1.attack(&tm2);
    CHECK_EQ(tm2.stillAlive(),1);
    CHECK_EQ(tm1.size(), 1);
    tm1.attack(&tm2);
    CHECK_EQ(tm2.stillAlive(),0);
}
TEST_CASE("cheacking Cowboy"){
    //Cowboy shoot"
    Cowboy cowboy1{"eden", Point{10, 10}};
    Cowboy cowboy2{"mor", Point{12, 12}};
    cowboy1.shoot(&cowboy2);
    CHECK_EQ(cowboy2.isAlive(), false);

    //Cowboy reload
    Cowboy cowboy{"eden", Point{10, 10}};
    cowboy.shoot(0);
    cowboy.reload();
    CHECK_EQ(cowboy.hasBullets(), true);
    Cowboy x("zec",Point(1,5));
    Cowboy y("effron",Point(10,10));
    CHECK_EQ(x.getName(),"zec");
    CHECK(x.hasBullets());
    x.shoot(&y);
    CHECK_EQ(x.hasBullets(),5);
    CHECK_EQ(y.Point_of_impact,100);
    Character z(Point(1,2),20,"heyhey");
    x.shoot(&z);
    y.shoot(&z);
    x.shoot(&z);
    CHECK_EQ(x.hasBullets(),4); 
}

TEST_CASE("cheacking Character"){
    Character player1(Point(4,1),0,"hello");
    Character player2(Point(1,4),10,"world");
    CHECK_EQ(player1.getName(),"hello");
    CHECK_EQ(player2.getName(),"world");
    CHECK_FALSE(player1.isAlive());
    CHECK(player2.isAlive());
    CHECK_EQ(player1.distance(player2),4);
    player2.hit(12);
    CHECK_FALSE(player2.isAlive());

}

TEST_CASE("cheacking ninja"){
    // cheacking ninja is alive 
    YoungNinja x("sushi",Point(2,3));
    TrainedNinja y("kawsaka",Point(1,5));
    OldNinja z("shimishimi",Point(1,1));
    CHECK_FALSE(x.isAlive()); 
    //Ninja slash
    ninja ninja1{Point{10, 10},"mor",10,10};
    ninja ninja2{Point{12, 12},"eden",10,10};
    ninja1.slash(&ninja2);
    CHECK_EQ(ninja2.isAlive(), false);
}

