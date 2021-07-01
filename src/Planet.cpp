/**
 * @file Planet.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Planet Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "iostream"
#include <string>
#include "Homeworld.h"
#include "Planet.h"
#include <vector>

using namespace std;

/**
 * @brief Construct a new Planet:: Planet object
 * 
 */
Planet::Planet(){
    setIsBorg(false);
    setHitPoints(PLANET_HP);
}

/**
 * @brief Will return the color of the Planet as blue
 * 
 * @return std::string 
 */
std::string Planet::getColor(){
    return "blue";
} 

/**
 * @brief Will return the type Planet
 * 
 * @return std::string 
 */
std::string Planet::getType(){
    return "Planet";
}

/**
 * @brief Will return basic string of "P"
 * 
 * @return std::string 
 */
std::string Planet::toString(){
    return "P";
}

