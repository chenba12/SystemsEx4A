#ifndef SYSTEMSEX4A_COWBOY_HPP
#define SYSTEMSEX4A_COWBOY_HPP

#include "../Character.hpp"

namespace ariel {
    const int maxCowboyHP = 110;
    const int maxBullets = 6;

    class Cowboy : public Character {
    private:
        int bullets;
    public:
        Cowboy(std::string name,const Point &location);

        bool shoot(Character *enemy);

        bool hasboolets() const;

        void reload();
    };
}


#endif //SYSTEMSEX4A_COWBOY_HPP