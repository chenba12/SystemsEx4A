cmake_minimum_required(VERSION 3.25)
project(SystemsEx4A)

set(CMAKE_CXX_STANDARD 14)

add_executable(SystemsEx4A sources/point/Point.hpp sources/point/Point.cpp sources/character/cowboy/Cowboy.hpp sources/character/cowboy/Cowboy.cpp sources/character/ninja/Ninja.hpp sources/character/ninja/Ninja.cpp sources/character/ninja/OldNinja.h sources/character/ninja/YoungNinja.hpp sources/character/ninja/YoungNinja.cpp Test.cpp sources/character/ninja/TrainedNinja.hpp sources/Team.hpp sources/Team.cpp sources/character/ninja/TrainedNinja.cpp sources/team/Team2.hpp sources/team/Team2.cpp sources/team/SmartTeam.hpp sources/team/SmartTeam.cpp sources/character/Character.hpp Demo.cpp sources/character/ninja/OldNinja.cpp sources/character/Character.cpp)
