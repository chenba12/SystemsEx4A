#ifndef SYSTEMSEX4A_SMARTTEAM_H
#define SYSTEMSEX4A_SMARTTEAM_H

#include "Team.hpp"

namespace ariel {
    class SmartTeam : public Team {
    public:
        void attack(Team *enemyTeam) override;

    };
}

#endif //SYSTEMSEX4A_SMARTTEAM_H
