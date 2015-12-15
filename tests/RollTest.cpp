/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   RollTest.cpp
 * Author: ltaveira
 *
 * Created on Dec 9, 2015, 11:16:52 AM
 */

#include "RollTest.h"
#include "../Roll.h"

CPPUNIT_TEST_SUITE_REGISTRATION(RollTest);

RollTest::~RollTest() { }

void RollTest::testRoll() {
    Roll roll(1, 0);

    CPPUNIT_ASSERT(roll(generator.initialize({5})) == 5);
}

void RollTest::test2dRoll() {
    Roll roll(2, 0);

    CPPUNIT_ASSERT(roll(generator.initialize({3})) == 6);
}

void RollTest::test2dMinus10Roll() {
    Roll roll(2, -10);

    CPPUNIT_ASSERT(roll(generator.initialize({1})) == -8);
}

void RollTest::test2dPlus5Roll() {
    Roll roll(2, 5);

    CPPUNIT_ASSERT(roll(generator.initialize({6})) == 17);
}

