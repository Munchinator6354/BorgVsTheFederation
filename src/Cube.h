/**
 * @file Cube.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the Cube Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _CUBE_H
#define _CUBE_H

#include "Sphere.h"

/**
 * @brief This is a Cube which is the final extended version of a BorgShip. 
 * It is seen as a "[ ]" symbol on the screen and has increased movement and 
 * heightened damage capabilities.
 */

class Cube: public Sphere {

public:
    /**
     * @brief Construct a new Cube object
     * 
     */
    Cube();

    /**
     * @brief Will return Cube as a type
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

    /**
     * @brief This will return "[ ]" as the 
     * string for cube.
     * 
     * @return std::string 
     */
    virtual std::string toString() override;

private:
    int newDirectionCounter;
    int randomDirection;
    bool movingNorth;
    bool movingEast;
    bool movingSouth;
    bool movingWest;

};

#endif