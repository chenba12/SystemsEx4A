#include "OldNinja.hpp"

using namespace ariel;

/**
 * OldNinja ctr
 * @param name
 * @param location
 */
OldNinja::OldNinja(const std::string &name, const Point &location) :
        Ninja(name, location, oldNinjaHP, oldNinjaSpeed, typeOldNinja) {}

