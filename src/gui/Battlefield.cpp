// Allison Obourn 
// CS 132, Spring 2021
// Lecture 33

// This file contains the implementations of our CritterWorld model functions.
// They allow us to keep track of, access and change the locations of the 
// Critters as they move around the world. 

#include <vector>
#include <iostream>
#include <ostream>

#include "Battlefield.h"
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


using namespace std;

/**
 * @brief Creates a vector of vectors to represent the empty simulation board.
 *  It's grid size width and height is based on the integer passed in. Each 
 * grid cell contains nullptr initially and returns a pointer to the entire 
 * simulation grid.
 * 
 * @param modelSize Integer representing the width and height grid cell numbers. 
 * Must be a postive integer.
 * @return vector<vector<Species*>>* This is a pointer to the empty board/grid 
 * that is created.
 */
vector<vector<Species*>>* Battlefield::createEmptyBoard(int modelSize) {
    vector<vector<Species*>>* Battlefield = new vector<vector<Species*>>();
    // Adding inner vectors to the outer vector equal to the integer passed in.
    for(int i = 0; i < modelSize; i++) {
        vector<Species*> row;
        // Adding nullptr to each grid cell enabling the grid to be the right
        // size.
        for(int j = 0; j < modelSize; j++) {
            row.push_back(nullptr);
        }
        Battlefield->push_back(row); 
    }
    return Battlefield;
}

/**
 * @brief Construct a new Battlefield simulation grid by filling in values on 
 * an empty grid which are either Borg or Federation ships of various types.
 * Number of things created based on global constants.
 * 
 * @param modelSize Integer representing the width and height grid cell numbers. 
 * Must be a postive integer.
 */
Battlefield::Battlefield(int modelSize) {
    board = createEmptyBoard(modelSize);

    // These three code blocks create a pointer to each type of ship the Borg 
    // or Federation team starts out with as well as a random creation spot 
    // for the ProtagonistClass ship on a random location on the board. If two 
    // ships are added to the same spot, the second will replace the first. The 
    // amount of ships can be adjusted via the corresponding global constant at 
    // the top of the file.
    for (int j = 0; j < AMOUNT_OF_BORG; j++) {
        vector<Species*> borgShips{new BorgShip(), new Sphere(), new Cube()};
        for (int i = 0; i < borgShips.size(); i++) {
            int x = rand() % modelSize;
            int y = rand() % modelSize;
            (*board)[x][y] = borgShips[i];
        }
    }

    for (int j = 0; j < AMOUNT_OF_FEDERATION; j++) {
        vector<Species*> fedShips{new FederationShip(), new DefiantClass(), 
                                                        new SovereignClass()};
        for (int i = 0; i < fedShips.size(); i++) {
            int x = rand() % modelSize;
            int y = rand() % modelSize;
            (*board)[x][y] = fedShips[i];
        }
    }
    
    int x = rand() % modelSize;
    int y = rand() % modelSize;
    (*board)[x][y] = new ProtagonistClass();

    // Creates starting points for the homeworlds after the ships so that no 
    // ships overwrite the Homeworld locations at initial spawn.
    (*board)[24][74] = new Planet();
    (*board)[74][24] = new Hive();  
}

/**
 * @brief If on the same team, return nullptr instead of a winner
 * if not on the same team and have the same HP, random winner and no loss of HP
 * for the winner
 * if not on the same team and don't have the same HP, winner is the one with more
 * HP and the winner loses HP (winner loses HP equal to the loser's HP)
 * 
 * @param ship1 
 * @param ship2 
 * @return Species* 
 */
Species* Battlefield::fight(
        Species* ship1,
        Species* ship2) {
    if(ship1->getIsBorg() == ship2->getIsBorg()) {
        return nullptr;
    } else {
        if(ship1->getHitPoints() == ship2->getHitPoints()) {
            int chance = rand() % 2;
            if(chance == 0) {
                return ship1;
            } else {
                return ship2;
            }
        } else if(ship1->getHitPoints() > ship2->getHitPoints()) {
            ship1->setHitPoints(ship1->getHitPoints() - ship2->getHitPoints());
            return ship1;
        } else {
            ship2->setHitPoints(ship2->getHitPoints() - ship1->getHitPoints());
            return ship2;
        }
    }
}

/**
 * @brief Addspecies handles a lot of the conditions on the board. If there's a ship to move,
 * moves it in the "dir" given. If the space on the board is open, moves the ship to that space
 * if there is nothing that was there previously as well. If there is something in the spot, 
 * calls fight function. If the thing in the spot is on the same team (fight function returns
 * nullptr), don't move the ship into that spot. Otherwise, place winner of the fight into the
 * space (unless ship hadn't moved before, in which case just shoot it where it is, no need
 * to kill it while passing "en passe"). 
 * 
 * If the ship/homeworld can spawn, spawn only when moving downwards. 
 * 
 * @param row 
 * @param col 
 * @param ship 
 * @param oldBoard 
 */
void Battlefield::addSpecies(int row, int col, Species* ship, vector<vector<Species*>>* oldBoard) {
    Direction dir = ship->getMove();
    Species* winner;
    if(dir == NORTH) {
        int newRow = row - 1 < 0? board->size() - 1 : row - 1;
        if((*board)[newRow][col] != nullptr) {
            winner = fight(ship, (*board)[newRow][col]);
            if(winner == nullptr) {
                (*board)[row][col] = ship;
            } else {
                if((*oldBoard)[newRow][col] != nullptr) {
                    if((*oldBoard)[newRow][col] != winner) {
                        (*board)[row][col] = winner;
                    }
                } else {
                    (*board)[newRow][col] = winner;                    
                }
            }
        } else {
            if((*oldBoard)[newRow][col] != nullptr) {
                (*board)[row][col] = ship;
            } else {
                (*board)[newRow][col] = ship;
            }
        }
    } else if (dir == SOUTH) {
        if(row + 1 == board->size()) {
            row = 0;
        }
        // If statement checks if space occupied
        if((*board)[row + 1][col] != nullptr) {
            winner = fight(ship, (*board)[row + 1][col]);
            if(winner == nullptr) {
                (*board)[row][col] = ship;
            } else {
                if((*oldBoard)[(row + 1) % board->size()][col] != nullptr) {
                    if((*oldBoard)[(row + 1) % board->size()][col] != winner) {
                        (*board)[row][col] = winner;
                    }
                } else {
                    (*board)[(row + 1) % board->size()][col] = winner;                    
                }
            }
        } else {
            if((*oldBoard)[row + 1][col] != nullptr) {
                (*board)[row][col] = ship;
            } else {
                (*board)[(row + 1) % board->size()][col] = ship;                
            }
        }

        // spawns a ship if spawnrate value is met by the time the planet/hive
        // orbits downwards
        if(row - 1 < 0) {
            row = 99;
        }
        if((*board)[row][col] == nullptr) {
            if(ship->getSpawnCount() >= SPAWN_RATE) {
                ship->setSpawnCount(0);
                if(ship->getIsBorg()) {
                    (*board)[row][col] = new BorgShip();
                } else {
                    (*board)[row][col] = new FederationShip();
                }
            }
        }

    } else if (dir == EAST) {
        if(col + 1 == board->size()) {
            col = 0;
        }
        if((*board)[row][(col + 1) % board->size()] != nullptr) {
            winner = fight(ship, (*board)[row][col + 1]);
            if(winner == nullptr) {
                (*board)[row][col] = ship;
            } else {
                if((*oldBoard)[row][(col + 1) % board->size()] != nullptr) {
                    if((*oldBoard)[row][(col + 1) % board->size()] != winner) {
                        (*board)[row][col] = winner;
                    }
                } else {
                    (*board)[row][(col + 1) % board->size()] = winner;                    
                }
            }
        } else {
            if((*oldBoard)[row][(col + 1) % board->size()] != nullptr) {
                (*board)[row][col] = ship;
            } else {
                (*board)[row][(col + 1) % board->size()] = ship;                
            }

        }
    } else if (dir == WEST) {
        int newCol = col - 1 < 0? board->size() - 1 : col - 1;
        if((*board)[row][newCol] != nullptr) {
            winner = fight(ship, (*board)[row][newCol]);
            if(winner == nullptr) {
                (*board)[row][col] = ship;
            } else {
                if((*oldBoard)[row][newCol] != nullptr) {
                    if((*oldBoard)[row][newCol] != winner) {
                        (*board)[row][col] = winner;
                    }
                } else {
                    (*board)[row][newCol] = winner;                    
                }
            }
        } else {
            if((*oldBoard)[row][newCol] != nullptr) {
                (*board)[row][col] = ship;
            } else {
                (*board)[row][newCol] = ship;
            }
        }
    } else if (dir == CENTER) {
        (*board)[row][col] = ship;
    }   
}

/**
 * @brief Updates the position of every Species on the grid by getting it's 
 * next move and then moving it's location in the Battlefield in that 
 * direction. If the Species would walk of the edge of the screen if it moved 
 * to the next position then it is instead wrapped around to the other side of 
 * the simulation grid.
 * 
 */
void Battlefield::update() {
    // create a new grid containing nullptr everywhere that we will put add
    // the critters to at their new locations
    vector<vector<Species*>>* newBoard = createEmptyBoard(board->size());
    // creates a temporary pointer to point at the old state of the world
    // and points the member variable at the empty new grid so that when we call
    // other member functions the new grid will be updated instead of the old one
    vector<vector<Species*>>* oldBoard = board;

    board = newBoard;
    for(int row = 0; row < board->size(); row++) {
        for(int col = 0; col < board->size(); col++) {
            Species* ship = (*oldBoard)[row][col];
            // when you come accross a critter, move it
            if(ship != nullptr) {
                addSpecies(row, col, ship, oldBoard);  
            }
        }
    }

    // Prints the board
    // cout << "This is the board layout in update" << endl << *board << endl;

    // we need to delete oldWorld as it is on the heap and we will lose access to 
    // it when we leave this function. We do not need to delete its inner vectors
    // as they are copies stored directly in the same memory as the outer vector.
    // If they were pointers instead we would need to delete them all individually
    delete oldBoard;
}


/**
 * @brief Gets the size of the simulation grid.
 * 
 * @return int Integer representing the number of grid cells wide and tall 
 * that grid is.
 */
int Battlefield::getSize() {
    return board->size();
}


/**
 * @brief Returns a pointer to the ship currently located at the passed in 
 * row/column on the BattleField grid.
 * 
 * @param row Represents the row number to check for the ship.
 * @param col Represents the column number to check for the ship.
 * @return Species* This is the ship/homeworld located at the given grid cell.
 */
Species* Battlefield::getSpecies(int row, int col) {
    return (*board)[row][col];
}


/**
 * @brief Overrides the (<<) operator for Species pointers. It prints out the 
 * entity type name for all non-null pointers and "-" for nullptr values. This 
 * makes it less confusing than looking at literal memory addresses where the 
 * Species are stored rather than the types themselves.
 * 
 * @param out Output stream to collect the Species' getType() information.
 * @param c This is the ship/homeworld entity we are looking at.
 * @return std::ostream& Returns a stream filled with Species' value to print.
 */
std::ostream& operator <<(std::ostream& out, Species* c) {
    if (c != nullptr) {
        out << c->getType();
    } else {
        out << "-";
    }
    return out;
}
