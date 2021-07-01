/**
 * @file Cardinal.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the cardinal 
 * movements/directions in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _CARDINAL_H
#define _CARDINAL_H

#include <string>

/**
 * @brief Different movememnts 
 * 
 */

enum Direction {
    CENTER,
    NORTH,
    EAST,
    SOUTH,
    WEST
};
std::string to_string(Direction direction);
extern int DIRECTION_COUNT;

#endif