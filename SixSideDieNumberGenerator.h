/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   SixSideDieNumberGenerator.h
 * Author: ltaveira
 *
 * Created on December 9, 2015, 6:31 PM
 */

#ifndef SIXSIDEDIENUMBERGENERATOR_H
#define SIXSIDEDIENUMBERGENERATOR_H

#include "NumberGenerator.h"

#include <random>

class SixSideDieNumberGenerator : public NumberGenerator {
private:
    std::uniform_int_distribution<> distribution;
    std::default_random_engine engine;

public:

    SixSideDieNumberGenerator() : distribution(1, 6) { }

    virtual ~SixSideDieNumberGenerator() { }

    virtual int generate();
};

#endif /* SIXSIDEDIENUMBERGENERATOR_H */

