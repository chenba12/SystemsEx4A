#include "doctest.h"

#include "sources/character/ninja/Ninja.hpp"
#include "sources/point/Point.hpp"
#include "sources/character/Character.hpp"
#include "sources/character/ninja/OldNinja.hpp"
#include "sources/character/ninja/YoungNinja.hpp"
#include "sources/character/ninja/TrainedNinja.hpp"
#include "sources/character/cowboy/Cowboy.hpp"

using namespace ariel;

TEST_CASE("point test") {
    Point p1(0, 0);
    Point p2(3, 4);
    Point p3(-3, -4);
    CHECK_EQ(p1.getX(), 0);
    CHECK_EQ(p1.getY(), 0);
    CHECK_EQ(p1.distance(p2), 5);
    CHECK_EQ(p1.distance(p3), 5);
    CHECK_EQ(p1.print(), "(0,0)");

}

TEST_CASE("character init") {
    Point p(0, 0);
    auto *oldNinja = new OldNinja("oldNinja", p);
    auto *youngNinja = new YoungNinja("youngNinja", p);
    auto *trainedNinja = new TrainedNinja("trainedNinja", p);
    auto *cowboy = new Cowboy("cowboy", p);

    CHECK_EQ(cowboy->getHp(), maxCowboyHP);
    CHECK_EQ(trainedNinja->getHp(), trainedNinjaHP);
    CHECK_EQ(youngNinja->getHp(), youngNinjaHP);
    CHECK_EQ(oldNinja->getHp(), oldNinjaHP);
    CHECK(cowboy->hasboolets());
    CHECK_EQ(trainedNinja->getSpeed(), trainedNinjaSpeed);
    CHECK_EQ(youngNinja->getSpeed(), youngNinjaSpeed);
    CHECK_EQ(oldNinja->getSpeed(), oldNinjaSpeed);
}

TEST_CASE("move towards") {

}

TEST_CASE("attack") {

}

TEST_CASE("team") {

}

TEST_CASE("team 2") {

}

TEST_CASE("smart team") {

}

TEST_CASE("") {
    
}