/**
 * @file Species.h
 * @author Ryan Isaacson, Chidera Mbara, & Angelo Delos-Santos
 *         Munchinator6354#gmail.com, NEN6900@gmail.com, & blueboy425@gmail.com
 * @brief This is the function declaration file for the Species Class in Borg vs. The Federation.
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SPECIES_H
#define _SPECIES_H

#include "cardinal.h"

/**
 * @brief This setting allows you to change the spawning rate of the Planet, Hive, and ProtagonistClass entities.
 */
const int SPAWN_RATE = 1; 

/**
 * @brief This setting allows you to change how fast the screen refreshes 
 * in milliseconds.
 */
const int TICK_RATE = 100;

// Federation -----------------------------------------------------------------

/**
 * @brief This setting allows you to change the amount of Federation ships 
 * initially spawned.
 */
const int AMOUNT_OF_FEDERATION = 10;

/**
 * @brief This setting allows you to change the health of the FederationShip class.
 */
const int FEDERATIONSHIP_HP = 5;

/**
 * @brief This setting allows you to change the health of the DefiantClass ships.
 */
const int DEFIANT_HP = 35;

/**
 * @brief This setting allows you to change the health of the SovereignClass 
 * ships.
 */
const int SOVEREIGN_HP = 45;

/**
 * @brief This setting allows you to change the health of the ProtagonistClass 
 * ships.
 */
const int PROTAGONIST_HP = 300;

/**
 * @brief This setting allows you to change the health of the Planet class.
 */
const int PLANET_HP = 400;

// Borg -----------------------------------------------------------------------

/**
 * @brief This setting allows you to chance the amount of Borg initially 
 * spawned.
 */
const int AMOUNT_OF_BORG = 50;

/**
 * @brief This setting allows you to change the health of the BorgShip class.
 */
const int BORGSHIP_HP = 5;

/**
 * @brief This setting allows you to change the health of the Sphere class.
 */
const int SPHERE_HP = 25;

/**
 * @brief This setting allows you to change the health of the Cube class.
 */
const int CUBE_HP = 35;

/**
 * @brief This setting allows you to change the health of the Hive class.
 */
const int HIVE_HP = 200;

/**
 * @brief This is Species, which is the SuperClass for all subclasses
 * in the program.
 * 
 */
class Species {

public:
    /**
     * @brief Constructs a new Species.
     */
    Species();

    /**
     * @brief Gets the direction movement of this Species.
     * 
     * @return Direction is returned as cardinal direction.
     */
    virtual Direction getMove();

    /**
     * @brief Gets the color of the Species.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string getColor();

    /**
     * @brief Gets the type of this Species.
     * 
     * @return std::string Type is returned as a string.
     */
    virtual std::string getType();

    /**
     * @brief Gets the string value to display for this Species.
     * 
     * @return std::string Returned as a string.
     */
    virtual std::string toString();

    /**
     * @brief Gets the StepCount value of the Species.
     * 
     * @return int Returned as an integer value.
     */
    virtual int getStepCount() const;

    /**
     * @brief Gets the cardinal movement direction of the Species.
     * 
     * @return int Returned as an integer.
     */
    virtual int getCardinal() const;

    /**
     * @brief Gets the HitPoints value of the Species. 
     * 
     * @return int Returned HitPoints as an integer.
     */
    virtual int getHitPoints() const;

    /**
     * @brief Gets the SpawnCount.
     * 
     * @return int Returned as an integer.
     */
    virtual int getSpawnCount() const;

    /**
     * @brief Gets if the Species is a Borg or Federation member.
     * 
     * @return true Indicates Species is part of The Borg collective.
     * @return false Indicates Species is part of The Federation.
     */
    virtual bool getIsBorg() const;

    /**
     * @brief Sets the StepCount value of the Species.
     * 
     * @param value Value is passed as a positive integer.
     */
    virtual void setStepCount(int value);

    /**
     * @brief Sets the cardinal direction for the Species.
     * 
     * @param value The value passed in must be an integer 0-3. 0 is North,
     * 1 is East, 2 is South, 3 is West
     */
    virtual void setCardinal(int value);

    /**
     * @brief Sets the HitPoints value for the Species.
     * 
     * @param value Value should be a positive integer for the Species to stay living
     */
    virtual void setHitPoints(int value);

    /**
     * @brief Sets the SpawnCount value for the Species.
     * 
     * @param value SpawnCount integer should be a positive value.
     */
    virtual void setSpawnCount(int value);

    /**
     * @brief Set the Species to be a part of The Borg Collective or part of 
     * The Federation
     * 
     * @param value True value for Borg, False value for Federation.
     */
    virtual void setIsBorg(bool value);

private:
    int stepCount;
    int cardinal;
    int hitPoints;
    int spawnCount;
    bool isBorg;
};

#endif