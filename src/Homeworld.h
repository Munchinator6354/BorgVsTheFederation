/**
 * @file Homeworld.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the Homeworld Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _HOMEWORLD_H
#define _HOMEWORLD_H

#include "Species.h"

/**
 * @brief This is a Homeworld which creates the basic funtionality which gets 
 * extended into both the Federation Planet and Borg Hive.
 * 
 */
class Homeworld : public Species {

public:
    /**
     * @brief Construct a new Homeworld object
     */
    Homeworld();   

    /**
     * @brief This will allow the planets to move in a 2x2 square 
     * clockwise, will drift off course if something is in the way (collision)
     * @return Direction 
     */
    virtual Direction getMove() override;

    /**
     * @brief Will return the type for Homeworld
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

    /**
     * @brief Will return basic string of "O"
     * 
     * @return std::string 
     */
    virtual std::string toString() override;

private:

};

#endif