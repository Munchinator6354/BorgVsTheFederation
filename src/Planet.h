/**
 * @file Planet.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the Planet Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _PLANET_H
#define _PLANET_H

#include "Homeworld.h"

/**
 * @brief This will create a new Planet which can spawn more FederationShip 
 * over time. 
 * 
 */

class Planet: public Homeworld {

public:
    /**
     * @brief Construct a new Planet:: Planet object
     * 
     */
    Planet();

    /**
     * @brief Will return the color of the Planet as blue
     * 
     * @return std::string 
     */
    virtual std::string getColor() override;

    /**
     * @brief Will return the type Planet
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

    /**
     * @brief Will return basic string of "P"
     * 
     * @return std::string 
     */
    virtual std::string toString() override;

private:


};

#endif