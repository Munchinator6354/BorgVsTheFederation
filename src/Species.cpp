/**
 * @file Species.cpp
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function definition file for the Species Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include "cardinal.h"
#include "Species.h"

/**
 * @brief Constructs a new Species::.
 * 
 */
Species::Species() {
    hitPoints = 5;
    stepCount = 0;
    cardinal = (rand() % 4);
    spawnCount = 0;
}

/**
 * @brief Gets the direction movement of this Species.
 * 
 * @return Direction is returned as cardinal direction.
 */
Direction Species::getMove(){
    return CENTER;
}

/**
 * @brief Gets the color of the Species.
 * 
 * @return std::string Returned as a string.
 */
std::string Species::getColor(){
    return "white";
}

/**
 * @brief Gets the type of this Species.
 * 
 * @return std::string Type is returned as a string.
 */
std::string Species::getType(){
    return "Species";
}

/**
 * @brief Gets the string value to display for this Species.
 * 
 * @return std::string Returned as a string.
 */
std::string Species::toString(){
    return "S";
}

/**
 * @brief Sets the HitPoints value for the Species.
 * 
 * @param value Value should be a positive integer for the Species to stay living
 */
void Species::setHitPoints(int value) {
    hitPoints = value;
}

/**
 * @brief Gets the HitPoints value of the Species. 
 * 
 * @return int Returned HitPoints as an integer.
 */
int Species::getHitPoints() const {
    return hitPoints;
}

/**
 * @brief Gets the StepCount value of the Species.
 * 
 * @return int Returned as an integer value.
 */
int Species::getStepCount() const{
    return stepCount;
}

/**
 * @brief Sets the StepCount value of the Species.
 * 
 * @param value Value is passed as a positive integer.
 */
void Species::setStepCount(int value) {
    stepCount = value;
}

/**
 * @brief Gets the cardinal movement direction of the Species.
 * 
 * @return int Returned as an integer.
 */
int Species::getCardinal() const{
    return cardinal;
}

/**
 * @brief Sets the cardinal direction for the Species.
 * 
 * @param value The value passed in must be an integer 0-3. 0 is North,
 * 1 is East, 2 is South, 3 is West
 */
void Species::setCardinal(int value) {
    cardinal = value;
}

/**
 * @brief Gets if the Species is a Borg or Federation member.
 * 
 * @return true Indicates Species is part of The Borg collective.
 * @return false Indicates Species is part of The Federation.
 */
bool Species::getIsBorg() const{
    return isBorg;
}

/**
 * @brief Set the Species to be a part of The Borg Collective or part of 
 * The Federation
 * 
 * @param value True value for Borg, False value for Federation.
 */
void Species::setIsBorg(bool value) {
    isBorg = value;
}

/**
 * @brief Gets the SpawnCount.
 * 
 * @return int Returned as an integer.
 */
int Species::getSpawnCount() const {
    return spawnCount;
}

/**
 * @brief Sets the SpawnCount value for the Species.
 * 
 * @param value SpawnCount integer should be a positive value.
 */
void Species::setSpawnCount(int value) {
    spawnCount = value;
}