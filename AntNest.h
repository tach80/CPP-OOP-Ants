/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AntNest.h
 * Author: alberto.garciaadministrador
 *
 * Created on 20th April, 2017, 14:31
 */

#ifndef ANTNEST_H
#define ANTNEST_H

class AntNest {
private:
    static int s_idGenerator; // ID generator.
    int a_ID; // "Unique" ID for the colony.
    int a_worker; // Colony workers.
    int a_soldier; // Colony soldiers.
    int a_total = a_worker + a_soldier; // Nº of ants.
    int a_food; // Food gathered by the workers.
    bool a_queen; // Queen status. If she dies, game over.
    bool a_princess; // If there is a princess.
    
public:
    // Constructor
    AntNest(int worker = 50, int soldier = 25, int food = 0, bool queen = true, bool princess = false) {
        a_worker = worker;
        a_soldier = soldier;
        a_food = food;
        a_queen = queen;
        a_princess = princess;
        a_ID = s_idGenerator++;
    }
     
    // Getters.
    int getAntWorker(); 
    int getAntSoldier();
    void getQueenStatus(); // Queen status.
    int getAntTotal(); // Sums and gives total ant number.
    int getFood(); // Gets available food for the colony.
    int getID(); // Gets colony ID.
    
    void harvestFood(); // Food harvester.
    
    int getRequiredFood(); // Required food to keep the colony running.
    int consumeFood(); // Ants have to eat.
    
    void getAnts(); // A function to create new ants.
    
    /*AntNest(const AntNest& orig);
    virtual ~AntNest();
    */
};



#endif /* ANTNEST_H */

