#include "YoungNinja.hpp"

using namespace ariel;

YoungNinja::YoungNinja(const std::string &name, const Point &location) : Ninja(
        name, location, youngNinjaHP, youngNinjaSpeed, typeYoungNinja) {}
