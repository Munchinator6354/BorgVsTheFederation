                                    /**
 * @file DefiantClass.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the DefiantClass Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "FederationShip.h"
#include "DefiantClass.h"

/**
 * @brief Construct a new Defiant Class:: Defiant Class object
 */
DefiantClass::DefiantClass(){
    setIsBorg(false);
    setHitPoints(DEFIANT_HP);
}

/**
 * @brief Will return DefiantClass as a type
 * 
 * @return std::string 
 */
std::string DefiantClass::getType(){
    return "DefiantClass";
}

/**
 * @brief Will give the DefientClass a crown string
 * 
 * @return std::string 
 */
std::string DefiantClass::toString(){
    return "♔";
}

