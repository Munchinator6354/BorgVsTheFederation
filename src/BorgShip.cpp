/**
 * @file BorgShip.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the BorgShip Class in 
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
#include "BorgShip.h"


/**
 * @brief Constructs a new BorgShip as an extension of the Ship Class. 
 * Sets it's isBorg value to true and establishes hitpoint value.
 * 
 */
BorgShip::BorgShip() : Ship() { 
    setIsBorg(true);
    setHitPoints(BORGSHIP_HP);
}

/**
 * @brief This returns the color of the string green.
 * The Borg will inherit these colors
 * 
 * @return std::string 
 */
std::string BorgShip::getColor() {
    return "green";
}

/**
 * @brief This will return the BorgShip type 
 * 
 * @return std::string 
 */
std::string BorgShip::getType() {
    return "BorgShip";
}

/**
 * @brief This will return the string of the Borgship
 * ^ for North
 * > for East
 * ¥ for South
 * < for West
 * 
 * @return std::string 
 */
std::string BorgShip::toString() {
    if(getCardinal() == 0) {
        return "^";
    } else if(getCardinal() == 1) {
        return ">";
    } else if(getCardinal() == 2) {
        return "¥";
    } else {
        return "<";
    }
}