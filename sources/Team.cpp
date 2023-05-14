#include "Team.hpp"

using namespace ariel;

/**
 * team ctr
 * @param leader the team's leader
 */
Team::Team(Character *leader) : leader(leader) {
    std::fill(characters.begin(), characters.end(), nullptr);
    characters[0] = this->leader;

}

Team::Team(const Team &other)
        : characters(other.characters),
          leader(new Character(*(other.leader))) {}

Team::Team(Team &&other) noexcept: characters(other.characters),
                                   leader(other.leader) { other.leader = nullptr; }

Team &Team::operator=(const Team &other) {
    if (this != &other) {
        characters = other.characters;
        delete leader;
        leader = new Character(*(other.leader));
    }
    return *this;
}

Team &Team::operator=(Team &&other) noexcept {
    if (this != &other) {
        characters = other.characters;
        delete leader;
        leader = other.leader;
        other.leader = nullptr;
    }
    return *this;
}

/**
 * destructor
 */
Team::~Team() {
//    delete leader;
//    for (auto &character: characters) {
//        delete character;
//    }
}


/**
 * find an empty place in the team members list and add the character
 * @param character
 */
void Team::add(Character *character) {
    for (size_t i = 0; i < maxCharacters; ++i) {
        if (characters[i] == nullptr) {
            characters[i] = character;
            break;
        }
    }
//    throw std::logic_error("the team is full");
}

//TODO implement
/**
 * does something
 * @param enemyTeam
 */
void Team::attack(Team *enemyTeam) {

}

/**
 * count how many characters are still alive in the team
 * @return the amount of characters alive
 */
int Team::stillAlive() {
    return 0;
//    int counter = 0;
//    for (size_t i = 0; i < maxCharacters; ++i) {
//        if (!characters[i].isDefault()) {
//            if (characters[i].isAlive()) {
//                counter++;
//            }
//        }
//    }
//    return counter;
}

/**
 * print all the characters in the team
 */
void Team::print() {
    for (size_t i = 0; i < maxCharacters; ++i) {
        if (characters[i]!= nullptr) {
            std::cout << characters[i]->print() << std::endl;
        }
    }
}

/**
 * @return an array of characters in the team
 */
const std::array<Character*, maxCharacters> &Team::getCharacters() const {
    return characters;
}

/**
 * @return the team leader
 */
Character *Team::getLeader() const {
    return leader;
}







