/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   RollCalculatorTest.h
 * Author: ltaveira
 *
 * Created on Dec 10, 2015, 8:02:03 PM
 */

#ifndef ROLLCALCULATORTEST_H
#define ROLLCALCULATORTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "ConstNumberGenerator.h"
#include "../SuccessRollResult.h"
#include "../RollCalculator.h"\


class RollCalculatorTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(RollCalculatorTest);

    CPPUNIT_TEST(testSuccessRoll);
    CPPUNIT_TEST(testThreeSuccessRoll);
    CPPUNIT_TEST(testFourSuccessRoll);
    CPPUNIT_TEST(testEighteenSuccessRoll);
    CPPUNIT_TEST(testSeventeenSuccessRoll);
    CPPUNIT_TEST(testContestRoll);
    CPPUNIT_TEST(testReactionRoll);
    CPPUNIT_TEST(testDamageRoll);

    CPPUNIT_TEST_SUITE_END();

public:

    RollCalculatorTest() : calculator(generator) { }
    virtual ~RollCalculatorTest();

private:
    ConstNumberGenerator generator;
    RollCalculator calculator;

    void testSuccessRoll(int number, int target, const SuccessRollResult& expected);
    void testSuccessRoll();
    void testThreeSuccessRoll();
    void testFourSuccessRoll();
    void testEighteenSuccessRoll();
    void testSeventeenSuccessRoll();
    void testMarginOfSuccessRoll();
    void testContestRoll();
    void testReactionRoll();
    void testDamageRoll();
};

#endif /* ROLLCALCULATORTEST_H */

