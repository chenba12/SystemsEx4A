#ifndef SYSTEMSEX4A_TEAM2_H
#define SYSTEMSEX4A_TEAM2_H

#include "Team.hpp"

namespace ariel {
    class Team2 : public Team {
    public:
        void attack(Team *enemyTeam) override;

    };
}
#endif //SYSTEMSEX4A_TEAM2_H
