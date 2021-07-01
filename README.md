# BorgVsTheFederation
Constructs a simulation of The Borg Collective battling The Federation to destroy each other's Homeworld.

<img src="res/readMeContent/BVFgif.gif" width="550" height="600"/>

## Introduction:
BorgVsTheFederation is an example of a simple simulation grid written in C++. This program was written to showcase the structure of class inheritance. Each unit on the grid inherits from the base class of Species.h and becomes it's own in order to simulate a war waging between The Borg Collective and The Federation from the popular show Star Trek. Whichever team destroys the enemy Homeworld first wins! Settings in the code can adjust how the simulation starts, potentially giving either team an initial advantage. You choose how the simulation runs!

## How It Works:
Ships move across the grid moving in a NORTH, EAST, SOUTH, or WEST direction. If a ship encounters an enemy vessel the ship with the higher energy remains intact while the other is removed from the grid. The winning ship takes and sustains damage accordingly. Borg ships are in green, Federation ships are in blue. If you look closely there is a teal ship, which is a ProtagonistClass vessel for the Federation. It can spawn more basic Federation ships when flying SOUTH, very similar to the Homeworlds which also spawn basic ships periodically.

## Technologies Used:
Written in C++ practicing class inheritance. CMake is used to generate the build file.

## Authors:
https://github.com/Munchinator6354 - Ryan Isaacson  
GitHub Account Pending - Angelo Delos Santos  
https://github.com/Weegee847 - Chidera Mbara  
