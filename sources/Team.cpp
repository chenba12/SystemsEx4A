#include "Team.hpp"

using namespace ariel;

Team::Team(Character *leader) : leader(leader) {
    std::fill(characters.begin(), characters.end(), Character());
    characters[0] = *this->leader;

}

Team::~Team() = default;

void Team::add(Character *character) {
    for (size_t i = 0; i < maxCharacters; ++i) {
        if (characters[i].isDefault()) {
            characters[i] = *character;
            break;
        }
    }
}

void Team::attack(Team *enemyTeam) {

}

int Team::stillAlive() {
    int counter = 0;
    for (size_t i = 0; i < maxCharacters; ++i) {
        if (!characters[i].isDefault()) {
            if (characters[i].isAlive()) {
                counter++;
            }
        }
    }
    return counter;
}

void Team::print() {
    for (size_t i = 0; i < maxCharacters; ++i) {
        if (!characters[i].isDefault()) {
            std::cout << characters[i].print() << std::endl;
        }
    }
}

const std::array<Character, maxCharacters> &Team::getCharacters() const {
    return characters;
}

Character *Team::getLeader() const {
    return leader;
}







