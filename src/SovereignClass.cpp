/**
 * @file SovereignClass.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the SovereignClass Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "DefiantClass.h"
#include "SovereignClass.h"

/**
 * @brief Constructs a new SovereignClass:: federation ship.
 * 
 */
SovereignClass::SovereignClass(){
    setIsBorg(false);
    setHitPoints(SOVEREIGN_HP);
}

/**
 * @brief Gets the type of this SovereignClass ship.
 * 
 * @return std::string Type is returned as a string.
 */
std::string SovereignClass::getType(){
    return "SovereignClass";
}

/**
 * @brief Gets the visible string value of the ship to display on screen.
 * 
 * @return std::string Returned as a string.
 */
std::string SovereignClass::toString(){
    return "<=>";
}

