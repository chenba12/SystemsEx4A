#include "Character.hpp"

#include <utility>

using namespace ariel;

Character::Character(std::string name, const Point &location, int hp,
                     enum characterType type) : location(location),
                                                hp(hp),
                                                name(std::move(name)),
                                                type(type) {}

Character::Character() : location(0, 0), hp(0), type(noType) {}

bool Character::isAlive() {
    return false;
}

double Character::distance(Character *otherChar) {
    return 0;
}

void Character::hit(int damage) {

}

std::string Character::print() const {
    return "";
}

const Point &Character::getLocation() const {
    return location;
}

int Character::getHp() const {
    return hp;
}

const std::string &Character::getName() const {
    return name;
}

characterType Character::getType() const {
    return type;
}

bool Character::isDefault() const {
    return false;
}




