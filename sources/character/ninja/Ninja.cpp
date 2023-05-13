#include "Ninja.hpp"

using namespace ariel;

Ninja::Ninja(const std::string &name, const Point &location, int hp, int speed, enum characterType type)
        : Character(name, location, hp, type), speed(speed) {}

void Ninja::move(Character *enemy) {
    moveTowards(this->getLocation(), enemy->getLocation(), speed);
}

int Ninja::getSpeed() const {
    return speed;
}

void Ninja::slash(Character *enemy) {
    enemy->hit(damage);
}
