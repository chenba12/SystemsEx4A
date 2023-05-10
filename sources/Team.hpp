#ifndef SYSTEMSEX4A_TEAM_H
#define SYSTEMSEX4A_TEAM_H

#include "character/Character.hpp"
#include "character/ninja/OldNinja.hpp"
#include "character/ninja/TrainedNinja.hpp"
#include "character/ninja/YoungNinja.hpp"
#include "character/cowboy/Cowboy.hpp"
#include "array"

namespace ariel {
    const int maxCharacters = 10;

    class Team {
    private:
        std::array<Character, maxCharacters> characters;
        Character *leader;
    public:
        explicit Team(Character *leader);

        void add(Character *character);

        void attack(Team *enemyTeam);

        int stillAlive();

        void print();

        virtual ~Team();
    };
}

#endif //SYSTEMSEX4A_TEAM_H
