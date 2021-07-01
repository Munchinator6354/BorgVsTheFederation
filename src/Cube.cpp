/**
 * @file Cube.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Cube Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "Sphere.h"
#include "Cube.h"

/**
 * @brief Construct a new Cube:: Cube object
 * 
 */
Cube::Cube(){
    setIsBorg(true);
    setHitPoints(CUBE_HP);
}


/**
 * @brief Will return Cube as a type
 * 
 * @return std::string 
 */
std::string Cube::getType(){
    return "Cube";
}

/**
 * @brief This will return "[ ]" as the 
 * string for cube.
 * 
 * @return std::string 
 */
std::string Cube::toString(){
    return "[ ]";
}




