/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AntNest.h
 * Author: administrador
 *
 * Created on 20 de abril de 2017, 14:31
 */

#ifndef ANTNEST_H
#define ANTNEST_H

class AntNest {
private:
    static int s_idGenerator;
    int a_ID;
    int a_worker;
    int a_soldier;
    int a_total = a_worker + a_soldier;
    int a_food;
    bool a_queen;
    bool a_princess;
    
public:
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
    void getQueenStatus(); // Estado de la Reina.
    int getAntTotal(); // Calcula y devuelve el total de hormigas del hormiguero.
    int getFood(); // Indica la cantidad de comida disponible para el hormiguero.
    int getID(); // Obtiene el ID del hormiguero.
    
    void harvestFood(); // Conseguir comida.
    
    void getAnts(); // Función para generar hormigas nuevas.
    
    
    
    
    /*AntNest(const AntNest& orig);
    virtual ~AntNest();
    */
};



#endif /* ANTNEST_H */

