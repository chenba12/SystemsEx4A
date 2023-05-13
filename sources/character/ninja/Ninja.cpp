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

void Ninja::slash(Character *enemy) const {
    if (this->getLocation().distance(enemy->getLocation()) < 1) {
        enemy->hit(damage);
    } else {
        throw std::logic_error("out of range");
    }
}
