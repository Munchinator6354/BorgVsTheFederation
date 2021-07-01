/**
 * @file Sphere.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the Sphere Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SPHERE_H
#define _SPHERE_H

#include "BorgShip.h"

/**
 * @brief This is a green Sphere with longer movement speed than the 
 * BorgShip that is seen as a "O" no matter which direction it is moving.
 * 
 */
class Sphere: public BorgShip {

public:
    /**
     * @brief Construct a new Sphere object on the borg team.
     * 
     */
    Sphere();

    /**
     * @brief Gets the type of this Sphere.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string getType() override;

    /**
     * @brief Gets the string appearance of this Sphere.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string toString() override;

private:

};

#endif