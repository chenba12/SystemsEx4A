#include "TrainedNinja.hpp"

using namespace ariel;

TrainedNinja::TrainedNinja(const std::string &name, const Point &location) : Ninja(
        name, location, trainedNinjaHP, trainedNinjaSpeed, typeTrainedNinja
) {}
