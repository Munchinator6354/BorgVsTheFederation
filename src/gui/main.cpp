#include <iostream>
#include <vector>
#include <time.h>
#include "DefiantClass.h"
#include "FederationShip.h"
#include "Hive.h"
#include "Homeworld.h"
#include "Planet.h"
#include "ProtagonistClass.h"
#include "Ship.h"
#include "SovereignClass.h"
#include "BorgShip.h"
#include "Cube.h"
#include "Sphere.h"
#include "BattleGui.h"
#include "Battlefield.h"

#include "gwindow.h"

using namespace std;
using namespace sgl;

/**
 * @brief ***NOTE*** THERE ARE GLOBAL CONTANT VARIABLES LOCATED AT THE TOP OF THE 
 * Species.h FILE THAT CAN BE CHANGED TO EDIT THE AMOUNT OF BORG AND 
 * FEDERATION SHIPS THAT INITIALIZE AT THE START.
 */

/**
 * @brief the logical width and height of thr critter world (the number of positions
 *a critter can be located in a given row or column)
 */
const int MODEL_SIZE = 100;

/**
 * @brief The amount of pixels wide and tall of the square that holds each 
 * Borg or Federation unit.
 */
const int SQUARE_SIZE = 10;

// The width and height of the GUI window in pixels
const int WINDOW_SIZE = MODEL_SIZE * SQUARE_SIZE;

int main() {
    new BattleGui(WINDOW_SIZE, SQUARE_SIZE);
    return 0;
}