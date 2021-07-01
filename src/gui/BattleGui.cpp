/**
 * @file BattleGui.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the BattleGUI in Borg vs. 
 * The Federation. It handles the creation of the simulation grid and redraws 
 * it periodically to update the player.
 * @version 0.1
 * @date 2021-06-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <cstdio>
#include <iostream>
#include <random>
#include <string>
#include <iostream>

#include "BattleGui.h"
#include "Battlefield.h"
#include "gwindow.h"

using namespace sgl;

/**
 * @brief Construct a new Battle Gui where that redraws itself periodically.
 * 
 * @param windowSize Takes the width of the window in pixels.
 * @param squareSize Takes the number of pixels per map/grid square.
 */
BattleGui::BattleGui(int windowSize, int squareSize) {
    this->windowSize = windowSize;
    this->squareSize = squareSize;

    // creates the initial version of our model
    board = new Battlefield(windowSize / squareSize);

    // creates the initial window where we will draw our critters
    // and sets the basic appearance
    window = new GWindow(windowSize, windowSize);
    window->setExitOnClose(true);
    window->setBackground("#000000");
    window->setFillColor("black");
    window->setFont("Arial-9-bold");
    
    // draw the critters at their initial positions
    redraw();

    // sets it so the redraw function will be called every 2 seconds. 
    window->setTimerListener(TICK_RATE, [this] {
        // note that we use this lamdba function (basically an anonymous function) 
        // so that we can call our member function. We can call a non-member function 
        // by just listing the name as we did in our first version. However, that
        // doesn't work with member functions
        this->redraw();
    });
}

/**
 * @brief This takes into consideration the updates to the ships movements on 
 * the grid, clears the board, and redraws the simulation grid including the 
 * HP print out of each of the Homeworlds.
 * 
 */
void BattleGui::redraw() {
    // Calculates the newest state of the grid.
    board->update();

    // Clears the screen and updates the contents of the grid.
    window->clearCanvasPixels();
    for(int row = 0; row < board->getSize(); row++) {
        for(int col = 0; col < board->getSize(); col++) {
            Species* ships = board->getSpecies(row, col);
            // If the space on the grid is not empty, we want to update the GUI 
            // to show what it is.
            if(ships != nullptr) {
                if(ships->getType() == "Planet") {
                    window->drawImage("../res/earth3.jpg", col * squareSize, row * squareSize);
                    int planetHitPoints = ships->getHitPoints();
                    window->setColor("yellow");
                    window->drawString(to_string(planetHitPoints), col * squareSize + 40 , row * squareSize + 50);
                } else if (ships->getType() == "Hive") {
                    window->drawImage("../res/borgSphereLooksLikePlanet.png", col * squareSize, row * squareSize);
                    int hiveHitPoints = ships->getHitPoints();
                    window->setColor("yellow");
                    window->drawString(to_string(hiveHitPoints), col * squareSize + 45 , row * squareSize + 55);
                } 
                else {
                    string name = ships->toString();
                    window->setColor(ships->getColor());
                    window->drawString(name, col * squareSize, row * squareSize);
                }
            }
        }
    }
}