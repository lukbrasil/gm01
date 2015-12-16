/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Attribute.h"

#include <cmath>

double Attribute::basicLift() {
    double result = std::pow(st, 2) / 5.0d;
    return ((result >= 10.0d) ? std::round(result) : result);
}

int Attribute::basicMove() {
    return static_cast<int> (std::floor(basicSpeed()));
}

double Attribute::basicSpeed() {
    return (dx + ht) / 4.0d;
}

int Attribute::dodge() {
    return std::floor(basicSpeed() + 3);
}

int Attribute::fatiguePoint() {
    return ht;
}

int Attribute::hitPoint() {
    return st;
}

int Attribute::perception() {
    return iq;
}

int Attribute::will() {
    return iq;
}
