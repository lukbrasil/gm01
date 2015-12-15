/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ContestRollResult.h"

ContestRollResult::ContestRollResult(int result, int margin) {
    this->result = result;
    this->margin = margin;
}

bool ContestRollResult::operator==(const ContestRollResult& contestResult) const {
    return this->result == contestResult.result && this->margin == contestResult.margin;
}


