/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ConstNumberGenerator.h
 * Author: ltaveira
 *
 * Created on December 10, 2015, 7:27 PM
 */

#ifndef CONSTNUMBERGENERATOR_H
#define CONSTNUMBERGENERATOR_H

#include "NumberGenerator.h"

#include <vector>

class ConstNumberGenerator : public NumberGenerator {
private:
    std::vector<int> list;
    int index;

public:

    ConstNumberGenerator() { }

    virtual ~ConstNumberGenerator() { }

    virtual int generate() {
        if (index == list.size()) {
            index = 0;
        }
        return list[index++];
    }

    ConstNumberGenerator& initialize(std::initializer_list<int> l) {
        list = l;
        index = 0;
        return *this;
    }
};

#endif /* CONSTNUMBERGENERATOR_H */

