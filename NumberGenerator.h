/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   NumberGenerator.h
 * Author: ltaveira
 *
 * Created on December 9, 2015, 5:44 PM
 */

#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H

class NumberGenerator {
public:

    virtual ~NumberGenerator() { }

    virtual int generate() = 0;
};

#endif /* NUMBERGENERATOR_H */

