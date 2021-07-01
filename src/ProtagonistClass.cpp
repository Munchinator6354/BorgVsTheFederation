/**
 * @file ProtagonistClass.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the ProtagonistClass Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "SovereignClass.h"
#include "ProtagonistClass.h"

/**
 * @brief Constructs a new ProtagonistClass:: federation ship.
 * 
 */
ProtagonistClass::ProtagonistClass(){
    setIsBorg(false);
    setHitPoints(PROTAGONIST_HP);
}

/**
 * @brief Controls the movements of the ProtagonistClass ship. Moves 14 stepsin 
 * a random direction and then changes course.
 * 
 * @return Direction Returns the direction the ship will move.
 */
Direction ProtagonistClass::getMove(){
    setSpawnCount(getSpawnCount() + 1);
    if(getStepCount() > 14) {
        setStepCount(rand() % 6);
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
 * @brief Gets the visible color of the ProtagonistClassShip.
 * 
 * @return std::string Color is returned as a string.
 */
std::string ProtagonistClass::getColor(){
    return "cyan";
}

/**
 * @brief Gets the type of this ProtagonistClass.
 * 
 * @return std::string Type is returned as a string.
 */
std::string ProtagonistClass::getType(){
    return "ProtagonistClass";
}

/**
 * @brief Get the string value of the ProtagonistClass to view on screen.
 * 
 * @return std::string Returned as a string.
 */
std::string ProtagonistClass::toString(){
    return "<=>";
}

