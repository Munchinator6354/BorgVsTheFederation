/**
 * @file FederationShip.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the FederationShip Class in 
 * Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _FEDERATIONSHIP_H
#define _FEDERATIONSHIP_H

#include "Ship.h"

/**
 * @brief This is a blue FederationShip with basic functionality and 
 * limited HP that uses different characters (^>V<) depending on the direction
 * it is moving.
 */

class FederationShip: public Ship {
public:

    /**
     * @brief Construct a new Federation Ship object
     * 
     */
    FederationShip();

    /**
     * @brief This returns the color of the string blue.
     * The Federation Ships will inherit these colors
     * 
     * @return std::string 
     */
    virtual std::string getColor() override;

    /**
     * @brief This will return the FederationShip type
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

private:

};

#endif