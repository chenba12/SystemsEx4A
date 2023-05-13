#include "Character.hpp"

#include <utility>

using namespace ariel;

Character::Character(std::string name, const Point &location, int hp,
                     enum characterType type) : location(location),
                                                hp(hp),
                                                name(std::move(name)),
                                                type(type) {}

Character::Character() : location(0, 0), hp(0), type(noType) {}

bool Character::isAlive() const {
    return hp > 0;
}

double Character::distance(Character *otherChar) {
    return this->location.distance(otherChar->getLocation());
}

void Character::hit(int damage) {
    this->hp -= damage;
}

std::string Character::print() const {
    std::string typeString;
    if (this->type == typeYoungNinja || this->type == typeOldNinja || this->type == typeTrainedNinja) {
        typeString = 'N';
    } else if (this->type == typeCowboy) {
        typeString = 'C';
    }
    if (this->isAlive()) {
        return "(" + typeString + ") name: (" + getName() + ") HP: " + std::to_string(getHp())
               + " Location: " + getLocation().print();
    }
    return "(" + typeString + ") name: (" + getName()
           + ") Location: " + getLocation().print();
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

Character::~Character() = default;




