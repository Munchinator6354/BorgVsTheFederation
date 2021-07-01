/**
 * @file Hive.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the Hive Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _HIVE_H
#define _HIVE_H

#include "Homeworld.h"

/**
 * @brief This is a Borg Hive (Homeworld) which can spawn more BorgShip over time. 
 */
class Hive: public Homeworld {

public:
    /**
     * @brief Constructs a new Hive object
     * 
     */
    Hive();

    /**
     * @brief Will return the color of the Hive as green
     * 
     * @return std::string 
     */
    virtual std::string getColor() override;

    /**
     * @brief Will return the type Hive
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

    /**
     * @brief Will return the string as "O"
     * 
     * @return std::string 
     */
    virtual std::string toString() override;

private:


};

#endif