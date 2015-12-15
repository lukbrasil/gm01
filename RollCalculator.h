/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Mechanic.h
 * Author: ltaveira
 *
 * Created on December 9, 2015, 12:34 PM
 */

#ifndef MECHANIC_H
#define MECHANIC_H

#include "Roll.h"
#include "NumberGenerator.h"
#include "SuccessRollResult.h"
#include "ContestRollResult.h"

class RollCalculator {
private:
    Roll sucessRoll;
    NumberGenerator& generator;

public:

    RollCalculator(NumberGenerator& g) : sucessRoll(3, 0), generator(g) { }

    SuccessRollResult successRoll(int target);

    ContestRollResult contestRoll(int targetA, int targetB);

    int reactionRoll(int modfier);

    int damageRoll(const Roll& roll);
};

#endif /* MECHANIC_H */

