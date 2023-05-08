#include "Cowboy.hpp"

#include <utility>

using namespace ariel;


Cowboy::Cowboy(std::string name, const Point &location) :
        Character(location, maxCowboyHP, std::move(name), typeCowboy),
        bullets(maxBullets) {}

bool Cowboy::shoot(Character *enemy) {
    return false;
}

bool Cowboy::hasboolets() const {
    return bullets > 0;
}

void Cowboy::reload() {
    bullets = 6;
}


