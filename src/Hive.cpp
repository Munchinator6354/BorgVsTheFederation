/**
 * @file Hive.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Hive Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "Homeworld.h"
#include "Hive.h"

/**
 * @brief Construct a new Hive:: Hive object
 * 
 */
Hive::Hive(){
    setIsBorg(true);
    setHitPoints(HIVE_HP);
}

/**
 * @brief Will return the color of the Hive as green
 * 
 * @return std::string 
 */
std::string Hive::getColor(){
    return "green";
}

/**
 * @brief Will return the type Hive
 * 
 * @return std::string 
 */
std::string Hive::getType(){
    return "Hive";
}

/**
 * @brief Will return the string as "O"
 * 
 * @return std::string 
 */
std::string Hive::toString(){
    return "O";
}
