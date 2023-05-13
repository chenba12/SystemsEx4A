#include "Cowboy.hpp"

using namespace ariel;


Cowboy::Cowboy(std::string &name, const Point &location) :
        Character(name, location, maxCowboyHP, typeCowboy),
        bullets(maxBullets) {}

void Cowboy::shoot(Character *enemy) {
    if (bullets > 0 && enemy->isAlive()) {
        enemy->hit(cowboyDamage);
    } else {
        this->reload();
    }
}

bool Cowboy::hasboolets() const {
    return bullets > 0;
}

void Cowboy::reload() {
    if (bullets == 6) throw std::logic_error("got max bullets already");
    bullets = 6;
}

int Cowboy::getBullets() const {
    return bullets;
}


