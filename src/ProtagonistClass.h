/**
 * @file ProtagonistClass.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the ProtagonistClass Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _PROTAGONIST_H
#define _PROTAGONIST_H

#include "SovereignClass.h"

/**
 * @brief This is a ProtagonistClass vessel of The Federation. It is a 
 * one-of-a-kind SovereignClass vessel outfitted with the capability to spawn 
 * additional FederationShip allies when moving South on the grid.
 * 
 */
class ProtagonistClass: public SovereignClass {

public:
    /**
     * @brief Constructs a new ProtagonistClass federation ship.
     * 
     */
    ProtagonistClass();


    virtual Direction getMove() override;

    /**
     * @brief Gets the visible color of the ProtagonistClassShip.
     * 
     * @return std::string Color is returned as a string.
     */
    virtual std::string getColor() override;

    /**
     * @brief Gets the type of this ProtagonistClass.
     * 
     * @return std::string Type is returned as a string.
     */
    virtual std::string getType() override;

    /**
     * @brief Get the string value of the ProtagonistClass to view on screen.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string toString() override;

private:
    int movement;

};

#endif