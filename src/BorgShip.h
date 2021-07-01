/**
 * @file BorgShip.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the BorgShip Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _BORGSHIP_H
#define _BORGSHIP_H

#include "Ship.h"

/**
 * @brief This is a green BorgShip with basic functionality and 
 * limited HP that uses different characters (^>V<) depending on the direction
 * it is moving.
 */
class BorgShip : public Ship {
public:
    /**
     * @brief Constructs a new BorgShip as an extension of the Ship Class. 
     * Sets it's isBorg value to true and establishes hitpoint value.
     * 
     */
    BorgShip();

    /**
     * @brief This returns the color of the string green.
     * The Borgs will inherit these colors
     * 
     * @return std::string 
     */
    virtual std::string getColor() override;

    /**
     * @brief This will return the BorgShip type 
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

    /**
     * @brief This will return the string of the Borgship
     * 
     * @return std::string 
     */
    virtual std::string toString() override;

private:

};
#endif