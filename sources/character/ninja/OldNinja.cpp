#include "OldNinja.h"

using namespace ariel;

OldNinja::OldNinja(const std::string &name, const Point &location) : Ninja(name, location,
                                                                           oldNinjaHP,
                                                                           oldNinjaSpeed, typeOldNinja) {}