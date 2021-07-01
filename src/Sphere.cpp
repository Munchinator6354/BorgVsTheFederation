/**
 * @file Sphere.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Sphere Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "BorgShip.h"
#include "Sphere.h"

/**
 * @brief Constructs a new Sphere:: on the Borg team (setIsBorg true) with 
 * hitpoints set to SPHERE_HP global constant.
 * 
 */
Sphere::Sphere(){
    setIsBorg(true);
    setHitPoints(SPHERE_HP);
}

/**
 * @brief Returns the string value type of this Sphere.
 * 
 * @return std::string Type is returned as a string value.
 */
std::string Sphere::getType(){
    return "Sphere";
}

/**
 * @brief Returns the string value of this Sphere which displays a "O" on 
 * screen.
 * 
 * @return std::string String value of the Sphere.
 */
std::string Sphere::toString(){
    return "O";
}

