#include "Team.hpp"

using namespace ariel;

Team::Team(Character *leader) : leader(leader) {
    std::fill(characters.begin(), characters.end(), Character());
    characters[0] = *this->leader;

}

Team::~Team() {


}

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
    return 0;
}

void Team::print() {

}







