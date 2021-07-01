/**
 * @file Homeworld.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Homeworld Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "Species.h"
#include "Homeworld.h"

/**
 * @brief Construct a new Homeworld:: Homeworld object
 * 
 */
Homeworld::Homeworld(){
    setHitPoints(50);
}

/**
 * @brief This will allow the planets to move in a 2x2
 * square clockwise, will drift off course if something is in the way
 * (collision)
 * 
 * @return Direction 
 */
Direction Homeworld::getMove() {
    setSpawnCount(getSpawnCount() + 1);
    if(getCardinal() > 3) {
        setCardinal(0);
    }
    if(getCardinal() == 0) {
        setCardinal(getCardinal() + 1);
        return NORTH;
    } else if (getCardinal() == 1) {
        setCardinal(getCardinal() + 1);
        return EAST;
    } else if (getCardinal() == 2) {
        setCardinal(getCardinal() + 1);
        return SOUTH;
    } else {
        setCardinal(getCardinal() + 1);
        return WEST;
    }
}

/**
 * @brief Will return the type for Homeworld
 * 
 * @return std::string 
 */
std::string Homeworld::getType(){
    return "Homeworld";
}

/**
 * @brief Will return basic string of "O"
 * 
 * @return std::string 
 */
std::string Homeworld::toString(){
    return "O";
}

