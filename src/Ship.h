/**
 * @file Ship.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Ship Class in Borg vs. 
 * The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SHIP_H
#define _SHIP_H

#include "Species.h"

/**
 * @brief This is a basic Ship class that both the BorgShip and FederationShip 
 * will draw functionality from.
 * 
 */
class Ship : public Species {
public:
    /**
     * @brief Constructs a new Ship.
     * 
     */
    Ship();

    /**
     * @brief Gets the Ships movement.
     * 
     * @return Direction Returns the cardinal direction of the Ship.
     */
    virtual Direction getMove() override;

    /**
     * @brief Gets the color of the Ship.
     * 
     * @return std::string Returns the color as a string.
     */
    virtual std::string getColor() override;

    /**
     * @brief Gets the type of the Ship.
     * 
     * @return std::string Returns the Ship type as a string.
     */
    virtual std::string getType() override;

    /**
     * @brief Returns the string value of the ship to display on screen.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string toString() override;

private:

};

#endif