#include "Ninja.hpp"

using namespace ariel;

Ninja::Ninja(const std::string &name, const Point &location, int hp, int speed, enum characterType type) : Character(
        name, location, hp, type), speed(speed) {}

void Ninja::move(Character *enemy) {

}

void Ninja::slash(Character *enemy) {

}

int Ninja::getSpeed() const {
    return speed;
}
