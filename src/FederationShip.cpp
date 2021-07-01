/**
 * @file FederationShip.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the FederationShip Class in 
 * Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>
#include "Ship.h"
#include "FederationShip.h"

/**
 * @brief Construct a new Federation Ship:: Federation Ship object
 * 
 */
FederationShip::FederationShip(){
    setIsBorg(false);
    setHitPoints(FEDERATIONSHIP_HP);
}

/**
 * @brief This returns the color of the string blue.
 * The Federation Ships will inherit these colors
 * 
 * @return std::string 
 */
std::string FederationShip::getColor(){
    return "blue";
}

/**
 * @brief This will return the FederationShip type
 * 
 * @return std::string 
 */
std::string FederationShip::getType(){
    return "FederationShip";
}