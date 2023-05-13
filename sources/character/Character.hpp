#ifndef SYSTEMSEX4A_CHARACTER_HPP
#define SYSTEMSEX4A_CHARACTER_HPP

#include "../point/Point.hpp"
#include <iostream>

namespace ariel {
    enum characterType {
        noType = 0, typeYoungNinja = 1, typeTrainedNinja = 2, typeOldNinja = 3, typeCowboy = 4
    };

    class Character {
    private:
        Point location;
        int hp;
        std::string name;

        enum characterType type;

    public:
        Character(std::string name, const Point &location, int hp, enum characterType type);

        Character();

        virtual ~Character();

        bool isAlive() const;

        double distance(Character *otherChar);

        virtual void hit(int damage);

        virtual std::string print() const;

        bool isDefault() const;

        const Point &getLocation() const;

        int getHp() const;

        const std::string &getName() const;

        characterType getType() const;

    };
}


#endif //SYSTEMSEX4A_CHARACTER_HPP
