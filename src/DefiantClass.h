/**
 * @file DefiantClass.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the DefiantClass Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _DEFIANTCLASS_H
#define _DEFIANTCLASS_H

#include "FederationShip.h"

/**
 * @brief This is a DefiantClass federation ship. Seen in the simulation as 
 * a "♔" icon. It is the 2nd tier FederationShip.
 */

class DefiantClass: public FederationShip {

public:
    /**
     * @brief Construct a new Defiant Class object
     * 
     */
    DefiantClass();

    /**
     * @brief Will return DefiantClass as a type
     * 
     * @return std::string 
     */
    virtual std::string getType() override;

    /**
     * @brief Will give the DefientClass a crown string
     * 
     * @return std::string 
     */
    virtual std::string toString() override;


private:


};

#endif