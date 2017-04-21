/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AntNest.cpp
 * Author: alberto.garcia
 * 
 * Created on 20th April, 2017, 14:31
 */

#include "AntNest.h"
#include <iostream>
#include <cstdlib> // For rand.
#include <ctime>

int AntNest::s_idGenerator = 1; // ID generator.

// Setters and getters

int AntNest::getAntWorker() {
    return a_worker;
}

int AntNest::getAntSoldier() {
    return a_soldier;
}

int AntNest::getAntTotal() {
    // Here we get the total number of ants.
    int princess = 0; // Aux variable.
    if (a_princess) {
        princess = 1;
    }
    a_total = a_worker + a_soldier + 1 + princess;
    return a_total;
}

int AntNest::getID() {
    return a_ID;
}

int AntNest::getFood() {
    return a_food;
}

void AntNest::getQueenStatus() {
    if (a_queen = true) {
        std::cout << "Queen is alive.\n";
    }
    else {
        std::cout << "Queen is dead.\n";
    }
}

void AntNest::harvestFood() {
    // This function makes ants gather food.
    a_food = 5 * a_worker;
}

int AntNest::getRequiredFood() {
    int princess = 0;
    if (a_princess) {
        princess = 1;
    }
    int food = a_worker + 2 * a_soldier + 5 + princess ;
    return food;
}

int AntNest::consumeFood() { 
    int princess = 0;
    //int food = 0;
    if (a_princess) {
        princess = 1;
    }
    a_food -= AntNest::getRequiredFood();//( a_worker + 2 * a_soldier + 5 + princess );
    //return food;
}

/* 
* The next function is an ant generator: if available food is enough (ants have
* to eat), the queen starts laying eggs. She will stop when there's just enough
* food to feed them all.
*/
void AntNest::getAnts() {
    srand(time(NULL)); // Starting the RNG.
    int limit = getRequiredFood();
    while (a_food > 1 + limit) { // This offset is mandatory.
        int randAnt = std::rand() % 10 + 1;
        if (randAnt <= 6) { // 60% chance to get a worker.
            a_worker += 1;
            a_food -= 1;
        } else if (randAnt > 7 && randAnt < 10 && a_food > (2 + limit)){
            a_soldier += 1;
            a_food -= 2;
        } else if (randAnt = 10 && a_food > (5 + limit)) {
            if (a_princess) {
                a_soldier += 1;
                a_food -= 2;
            } else {
                a_princess = true;
                a_food -= 5;
            }
        } else {
            a_worker += 1;
            a_food -= 1;
        }
        limit = getRequiredFood();
        //a_total = a_worker + a_soldier;
    }
}
//}
