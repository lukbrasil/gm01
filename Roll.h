/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   roll.h
 * Author: ltaveira
 *
 * Created on December 9, 2015, 11:06 AM
 */

#ifndef ROLL_H
#define ROLL_H

#include "NumberGenerator.h"

class Roll {
private:
    int dice;
    int modfier;

public:

    Roll(int d, int m) : dice(d), modfier(m) { }

    int operator()(NumberGenerator& generator) const;
};

#endif /* ROLL_H */

