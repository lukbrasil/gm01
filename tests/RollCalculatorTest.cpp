/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   RollCalculatorTest.cpp
 * Author: ltaveira
 *
 * Created on Dec 10, 2015, 8:02:03 PM
 */

#include "RollCalculatorTest.h"

#include <string>
#include "../RollCalculator.h"

CPPUNIT_TEST_SUITE_REGISTRATION(RollCalculatorTest);

RollCalculatorTest::~RollCalculatorTest() { }

void RollCalculatorTest::testSuccessRoll(int roll, int target, const SuccessRollResult& expected) {
    RollCalculator calculator(generator);

    generator.initialize({roll / 3, roll / 3, roll / 3 + roll % 3});
    CPPUNIT_ASSERT_MESSAGE("Rolled " + std::to_string(roll) + " against " + std::to_string(target),
            calculator.successRoll(target) == expected);
}

void RollCalculatorTest::testSuccessRoll() {
    testSuccessRoll(11, 12, SuccessRollResult(true, false, 1));
    testSuccessRoll(12, 12, SuccessRollResult(true, false, 0));
    testSuccessRoll(13, 12, SuccessRollResult(false, false, 1));
}

void RollCalculatorTest::testThreeSuccessRoll() {
    testSuccessRoll(3, 2, SuccessRollResult(false, false, 0));
    testSuccessRoll(3, 3, SuccessRollResult(true, true, 0));
    testSuccessRoll(3, 4, SuccessRollResult(true, true, 1));
    testSuccessRoll(3, 20, SuccessRollResult(true, true, 17));
}

void RollCalculatorTest::testFourSuccessRoll() {
    testSuccessRoll(4, 2, SuccessRollResult(false, false, 0));
    testSuccessRoll(4, 3, SuccessRollResult(true, true, 0));
    testSuccessRoll(4, 4, SuccessRollResult(true, true, 0));
    testSuccessRoll(4, 20, SuccessRollResult(true, true, 16));
}

void RollCalculatorTest::testEighteenSuccessRoll() {
    testSuccessRoll(18, 2, SuccessRollResult(false, false, 0));
    testSuccessRoll(18, 3, SuccessRollResult(false, true, 15));
    testSuccessRoll(18, 4, SuccessRollResult(false, true, 14));
    testSuccessRoll(18, 17, SuccessRollResult(false, true, 1));
    testSuccessRoll(18, 18, SuccessRollResult(false, true, 0));
    testSuccessRoll(18, 20, SuccessRollResult(false, true, 0));
}

void RollCalculatorTest::testSeventeenSuccessRoll() {
    testSuccessRoll(17, 2, SuccessRollResult(false, false, 0));
    testSuccessRoll(17, 3, SuccessRollResult(false, true, 14));
    testSuccessRoll(17, 4, SuccessRollResult(false, true, 13));
    testSuccessRoll(17, 15, SuccessRollResult(false, true, 2));
    testSuccessRoll(17, 16, SuccessRollResult(false, false, 1));
    testSuccessRoll(17, 17, SuccessRollResult(false, false, 0));
    testSuccessRoll(17, 18, SuccessRollResult(false, false, 0));
    testSuccessRoll(17, 20, SuccessRollResult(false, false, 0));
}

void RollCalculatorTest::testContestRoll() {
    RollCalculator calculator(generator);

    generator.initialize({4});

    // Win-Lose
    CPPUNIT_ASSERT(calculator.contestRoll(15, 6) == ContestRollResult(-1, 9));
    CPPUNIT_ASSERT(calculator.contestRoll(6, 15) == ContestRollResult(1, 9));

    // Win-Win
    CPPUNIT_ASSERT(calculator.contestRoll(14, 19) == ContestRollResult(1, 5));
    CPPUNIT_ASSERT(calculator.contestRoll(19, 14) == ContestRollResult(-1, 5));
    CPPUNIT_ASSERT(calculator.contestRoll(16, 16) == ContestRollResult(0, 0));

    // Lose-Lose
    CPPUNIT_ASSERT(calculator.contestRoll(7, 9) == ContestRollResult(-1, 2));
    CPPUNIT_ASSERT(calculator.contestRoll(9, 7) == ContestRollResult(1, 2));
    CPPUNIT_ASSERT(calculator.contestRoll(5, 5) == ContestRollResult(0, 0));
}

void RollCalculatorTest::testReactionRoll() {
    RollCalculator calculator(generator);

    generator.initialize({2, 5, 1});
    CPPUNIT_ASSERT(calculator.reactionRoll(5) == 13);
    CPPUNIT_ASSERT(calculator.reactionRoll(0) == 8);
    CPPUNIT_ASSERT(calculator.reactionRoll(-9) == -1);
}