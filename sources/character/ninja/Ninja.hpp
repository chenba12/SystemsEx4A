#ifndef SYSTEMSEX4A_NINJA_HPP
#define SYSTEMSEX4A_NINJA_HPP

#include "../Character.hpp"

namespace ariel {
    const int youngNinjaSpeed = 14;
    const int trainedNinjaSpeed = 12;
    const int oldNinjaSpeed = 8;
    const int youngNinjaHP = 100;
    const int trainedNinjaHP = 120;
    const int oldNinjaHP = 150;

    class Ninja : public Character {
    private:
        const int damage = 13;
        int speed;
    protected:
        Ninja(const std::string &name, const Point &location, int hp,
              int speed, enum characterType type);

    public:


        void move(Character *enemy);

        void slash(Character *enemy) const;

        int getSpeed() const;
    };
}

#endif
