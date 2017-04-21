/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Resource.h
 * Author: alberto.garcia
 *
 * Created on 21st April, 2017, 17:39
 */

#ifndef RESOURCE_H
#define RESOURCE_H

class Resource {
    private:
        int r_type; // An int indicating type of resourcer.
        int r_quality; // Quantity able to extract from the place each round.
        int r_property; // ID from the Ant Nest owning the place.
public:
    // Default constructor.
    Resource(int type = 0, int quality = 0, int property = 0) {
        r_type = type;
        r_quality = quality;
        r_property = property;
    }
    
};

#endif /* RESOURCE_H */

