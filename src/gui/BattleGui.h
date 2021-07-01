/**
 * @file BattleGui.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the BattleGUI in Borg Vs. 
 * The Federation. This creates everything the player views on their monitor 
 * and handles redrawing over time.
 * @version 0.1
 * @date 2021-06-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _battlegui_h_
#define _battlegui_h_ 

#include "gwindow.h"
#include "Battlefield.h"

using namespace sgl;

/**
 * @brief This class is the simulation grid itself. It handles creation and 
 * redrawing over time.
 * 
 */
class BattleGui {
    /**
     * @brief This creates the simulation grid window.
     * 
     */
    GWindow* window;

    /**
     * @brief This handles the current state of the grid used to keep track of all 
     * the ships.
     * 
     */
    Battlefield* board;

    /**
     * @brief This is how tall and wide the GUI window is (in grid squares).
     * 
     */
    int windowSize;

    /**
     * @brief This is how tall and wide a grid swuare is (in pixels).
     * 
     */
    int squareSize;
public:
    /**
     * @brief Takes the width and height of the simulation grid in squares and takes 
     * the width and height of each grid swuare in pixels and constructs a 
     * new simulation grid.
     * 
     * @param windowSize 
     * @param squareSize 
     */
    BattleGui(int windowSize, int squareSize);

    /**
     * @brief Draws the current state of the simulation grid onto the GUI window. 
     * It is cleared each "tick" the simulation progresses and redraws ships 
     * at their new location if they have moved.
     * 
     */
    void redraw();
};

#endif