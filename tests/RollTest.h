/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   RollTest.h
 * Author: ltaveira
 *
 * Created on Dec 9, 2015, 11:16:48 AM
 */

#ifndef ROLLTEST_H
#define ROLLTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "ConstNumberGenerator.h"

class RollTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(RollTest);

    CPPUNIT_TEST(testRoll);
    CPPUNIT_TEST(test2dRoll);
    CPPUNIT_TEST(test2dPlus5Roll);
    CPPUNIT_TEST(test2dMinus10Roll);

    CPPUNIT_TEST_SUITE_END();

public:

    RollTest() { }
    virtual ~RollTest();

private:
    ConstNumberGenerator generator;

    void testRoll();
    void test2dRoll();
    void test2dPlus5Roll();
    void test2dMinus10Roll();
};

#endif /* ROLLTEST_H */

