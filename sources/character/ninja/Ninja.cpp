#include "Ninja.hpp"

using namespace ariel;

/**
 * ninja ctr
 * @param name
 * @param location
 * @param hp
 * @param speed
 * @param type
 */
Ninja::Ninja(const std::string &name, const Point &location, int hp, int speed, enum characterType type)
        : Character(name, location, hp, type), speed(speed) {}

/**
 * move towards the enemy
 * @param enemy
 * @throws logic_error if the enemy is already dead
 */
void Ninja::move(Character *enemy) {
    if (!enemy->isAlive()) throw std::logic_error("enemy is dead");
    moveTowards(this->getLocation(), enemy->getLocation(), speed);
}

/**
 * @return the ninja's speed
 */
int Ninja::getSpeed() const {
    return speed;
}

/**
 * slashing an enemy if the distance between the 2 is <1
 * @param enemy
 * @throws logic_error if the target is out of range
 */
void Ninja::slash(Character *enemy) const {
    if (this->getLocation().distance(enemy->getLocation()) < 1) {
        enemy->hit(damage);
    } else {
        throw std::logic_error("out of range");
    }
}
