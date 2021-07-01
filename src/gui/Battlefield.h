
// Allison Obourn 
// CS 132, Spring 2021
// Lecture 33

// The Battlefield represents the world where the critters live and move around.
// It is set to a particular width and height and critters can be located in 
// any of its squares. When they move their location in the grid changes. The
// grid stores the current state of the world at any moment in time. 

#ifndef _battlefield_h_
#define _battlefield_h_ 

#include <vector>
#include <string>
#include "Species.h"

using namespace std;

class Battlefield {
private:

    /**
     * @brief the grid of rows and columns that stores pointers to Critters, representing
     * their current positions in the world.
     * 
     */
    vector<vector<Species*>>* board;

    /**
     * @brief creates a vector of vectors, the passed in number wide and the passed in 
     * number tall, containing nullptr in every location and returns a pointer to it.
     * 
     * @param modelSize 
     * @return vector<vector<Species*>>* 
     */
    vector<vector<Species*>>* createEmptyBoard(int modelSize);

    /**
     * @brief takes two ship pointers, has them fight and returns a winner. If equal hp, returns
     * a random winner. if different hp, returns ship with more HP with the lower ship's hp
     * subtracted. If ships are on the same team, returns nullptr.
     * 
     * @param ship1 
     * @param ship2 
     * @return Species* 
     */
    Species* fight(
        Species* ship1,
        Species* ship2);
public:
    /**
     * @brief creates a new world that is size wide and size tall. Fills this grid with
     * pointers to 10 Critters of each type placed in random locations and the
     * rest of the spaces with nullptr
     * 
     * @param size 
     */
    Battlefield(int size);
    
    /**
     * @brief computes a location in the grid for the passed in animal by asking
     * the animal for its next move and then altering the passed in row and column
     * by that move and then adding the critter to the grid at that location 
     * 
     * @param row 
     * @param col 
     * @param ship 
     * @param oldBoard 
     */
    void addSpecies(int row, int col, Species* ship, vector<vector<Species*>>* oldBoard);

    /**
     * @brief updates the position of each Critter by getting its next move and then moving 
     * its location in the Battlefield in that direction. If the Critter would 
     * walk off the edge of the screen if it moved to the next position it is 
     * instead wrapped around to the other side
     * 
     */
    void update();

    /**
     * @brief returns a pointer to the critter currently located at the passed in row /column
     * in the critter world. 
     * 
     * @param row 
     * @param col 
     * @return Species* 
     */
    Species* getSpecies(int row, int col);

    /**
     * @brief returns the number of columns wide / rows tall of the world
     * 
     * @return int 
     */
    int getSize();
};

/**
 * @brief overrides the print (<<) operator for Critter pointers. It prints out the 
 * Critter type name for all non-null pointers and "-" for nullptr. 
 * 
 * @param out 
 * @param c 
 * @return ostream& 
 */
ostream& operator <<(std::ostream& out, const Species* c);

/**
 * @brief overrides the print (<<) operator for std vectors that contain any type
 * prints them out surrounded by curly brackets {} with a comma and a space
 * between each pair of numbers.
 * 
 * @tparam T 
 * @param out 
 * @param list 
 * @return std::ostream& 
 */
template<typename T>
std::ostream& operator <<(std::ostream& out, const vector<T>& list) {
    if(list.size() == 0) {
        out << "{}";
    } else {
        out << "{";
        for(int i = 0; i < list.size() - 1; i++) {
            T val = list[i];
            out << val << ", ";
        }
        T val = list[list.size() - 1];
        out << val << "}";
        out << endl; //  WE ADDED THIS  
    }
    return out;
}

#endif
