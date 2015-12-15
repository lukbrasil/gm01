/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Roll.h"

#include <random>
#include <functional>
#include <iostream>

int Roll::operator()(NumberGenerator& generator) const {
    int result = modfier;
    for (int i = 0; i < dice; i++) {
        result += generator.generate();
    }

    return result;
}

