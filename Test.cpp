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
    auto *youngNinja = new YoungNinja("youngNinja", {0, 1});
    auto *trainedNinja = new TrainedNinja("trainedNinja", {0, 2});
    auto *cowboy = new Cowboy("cowboy", p);

    CHECK_EQ(oldNinja->getName(), "oldNinja");
    CHECK_EQ(youngNinja->getName(), "youngNinja");
    CHECK_EQ(trainedNinja->getName(), "trainedNinja");
    CHECK_EQ(cowboy->getName(), "cowboy");
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
    Point p1(0, 0);
    Point p2(3, 4);
    auto *oldNinja = new OldNinja("oldNinja", p1);
    auto *cowboy = new Cowboy("cowboy", p2);
    oldNinja->move(cowboy);

}

TEST_CASE("slash and shoot") {
    Point p(0, 0);
    auto *oldNinja = new OldNinja("oldNinja", p);
    auto *youngNinja = new YoungNinja("youngNinja", p);
    auto *cowboy = new Cowboy("cowboy", p);
    while (youngNinja->isAlive()) {
        oldNinja->slash(youngNinja);

    }
    CHECK_THROWS(cowboy->reload());
    CHECK_THROWS(oldNinja->slash(youngNinja));
    CHECK_THROWS(cowboy->shoot(youngNinja));
    CHECK_EQ(cowboy->getBullets(), 6);
    CHECK_EQ(youngNinja->getHp(), 0);
    CHECK_FALSE(youngNinja->isAlive());
    int hp = oldNinjaHP;
    for (int i = 0; i < 6; ++i) {
        cowboy->shoot(oldNinja);
        CHECK_EQ(oldNinja->getHp(), hp - ((i + 1) * 10));
    }
    CHECK_EQ(cowboy->getBullets(), 0);
    CHECK_FALSE(cowboy->hasboolets());
    CHECK(oldNinja->isAlive());
    CHECK_THROWS(cowboy->shoot(oldNinja));
    CHECK_NOTHROW(cowboy->reload());
}

TEST_CASE("dead character") {

}

TEST_CASE("team") {

}

TEST_CASE("team 2") {

}

TEST_CASE("smart team") {

}

TEST_CASE("") {

}