/**
 * @file Ships.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Ships Class in Borg vs. 
 * The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "Species.h"
#include "Ship.h"

/**
 * @brief Constructs a new Ship::.
 * 
 */
Ship::Ship() { 
/*blank*/ 
}

/**
 * @brief Gets the Ships movement.
 * 
 * @return Direction Returns the cardinal direction of the Ship.
 */
Direction Ship::getMove() {
    if(getStepCount() >= 5) {
        setStepCount(rand() % 5);
        setCardinal(rand() % 4);
    }
    if(getCardinal() == 0) {
        setStepCount(getStepCount() + 1);
        return NORTH;
    } else if (getCardinal() == 1) {
        setStepCount(getStepCount() + 1);
        return EAST;
    } else if (getCardinal() == 2) {
        setStepCount(getStepCount() + 1);
        return SOUTH;
    } else {
        setStepCount(getStepCount() + 1);
        return WEST;
    }
}

/**
 * @brief Gets the color of the Ship.
 * 
 * @return std::string Returns the color as a string.
 */
std::string Ship::getColor() {
    return "white";
}

/**
 * @brief Gets the type of the Ship.
 * 
 * @return std::string Returns the Ship type as a string.
 */
std::string Ship::getType() {
    return "Ship";
}

/**
 * @brief Returns the string value of the ship to display on screen.
 * 
 * @return std::string Returned as a string.
 */
std::string Ship::toString() {
    // std::cout << "made it into Ship" << std::endl;
    if(getCardinal() == 0) {
        return "^";
    } else if(getCardinal() == 1) {
        return ">";
    } else if(getCardinal() == 2) {
        return "V";
    } else {
        return "<";
    }
}

