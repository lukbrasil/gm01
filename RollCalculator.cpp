/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RollCalculator.h"

#include <cmath>

SuccessRollResult RollCalculator::successRoll(int target) {
    int roll = sucessRoll(generator);

    if (target >= 3) {
        switch (roll) {
            case 3:
                return SuccessRollResult(true, true, target - roll);
            case 4:
                return SuccessRollResult(true, true, ((target == 3) ? 0 : target - roll));
            case 17:
                return SuccessRollResult(false, target <= 15, ((target > 17 ? 0 : roll - target)));
            case 18:
                return SuccessRollResult(false, true, ((target > 18 ? 0 : roll - target)));
            default:
                return SuccessRollResult(roll <= target, std::abs(target - roll) >= 10, std::abs(target - roll));
        }
    } else {
        return SuccessRollResult(false, false, 0);
    }
}

ContestRollResult RollCalculator::contestRoll(int targetA, int targetB) {
    SuccessRollResult rollA = successRoll(targetA);
    SuccessRollResult rollB = successRoll(targetB);

    if (rollA.success() && !rollB.success()) {
        return ContestRollResult(-1, rollA.margin() + rollB.margin());
    } else if (!rollA.success() && rollB.success()) {
        return ContestRollResult(1, rollA.margin() + rollB.margin());
    } else {
        int margin = rollA.margin() - rollB.margin();
        if (margin < 0) {
            return ContestRollResult(1, std::abs(margin));
        } else if (margin > 0) {
            return ContestRollResult(-1, std::abs(margin));
        }
    }

    return ContestRollResult(0, 0);
}

int RollCalculator::reactionRoll(int modfier) {
    return sucessRoll(generator) + modfier;
}

