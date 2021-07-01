/**
 * @file SovereignClass.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the SovereignClass Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SOVEREIGN_H
#define _SOVEREIGN_H

#include "DefiantClass.h"

/**
 * @brief This is a SovereignClass federation ship. It is seen as a "<=>" on 
 * the simulation grid and has the most robust firepower in the Federation 
 * fleet.
 */
class SovereignClass: public DefiantClass {

public:
    /**
     * @brief Constructs a new SovereignClass federation ship.
     * 
     */
    SovereignClass();

    /**
     * @brief Gets the type of this SovereignClass ship.
     * 
     * @return std::string Type is returned as a string.
     */
    virtual std::string getType() override;

    /**
     * @brief Gets the visible string value of the ship to display on screen.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string toString() override;

private:


};

#endif