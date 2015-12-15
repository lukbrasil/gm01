/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "SuccessRollResult.h"

bool SuccessRollResult::operator==(const SuccessRollResult& result) const {
    return success() == result.success() &&
            critical() == result.critical() &&
            margin() == result.margin();
}

bool SuccessRollResult::critical() const {
    return _critical;
}

int SuccessRollResult::margin() const {
    return _margin;
}

bool SuccessRollResult::success() const {
    return _success;
}

