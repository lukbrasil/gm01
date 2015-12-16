/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Attribute.h
 * Author: ltaveira
 *
 * Created on December 15, 2015, 6:45 PM
 */

#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

//TODO: Handedness

class Attribute {
private:
    int st;
    int dx;
    int iq;
    int ht;

public:

    Attribute(int strength, int dexterity, int intelligence, int health) : st(strength),
            dx(dexterity), iq(intelligence), ht(health) { }

    double basicLift();
    int hitPoint();
    int will();
    int perception();
    int fatiguePoint();
    double basicSpeed();
    int dodge();
    int basicMove();
};



#endif /* ATTRIBUTE_H */

