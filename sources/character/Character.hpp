#ifndef SYSTEMSEX4A_CHARACTER_HPP
#define SYSTEMSEX4A_CHARACTER_HPP

#include "../point/Point.hpp"
#include <iostream>

namespace ariel {
    enum characterType {
        noType = 0, typeNinja = 1, typeYoungNinja = 2, typeTrainedNinja = 3, typeOldNinja = 4, typeCowboy = 5
    };

    class Character {
    private:
        Point location;
        int hp;
        std::string name;

        enum characterType type;

    public:
        Character(std::string &name, const Point &location, int hp, enum characterType type);

        Character();

        bool isAlive();

        double distance(Character *otherChar);

        void hit(int damage);

        virtual std::string print() const;

        bool isDefault() const;

        const Point &getLocation() const;

        int getHp() const;

        const std::string &getName() const;

        characterType getType() const;

    };
}


#endif //SYSTEMSEX4A_CHARACTER_HPP
