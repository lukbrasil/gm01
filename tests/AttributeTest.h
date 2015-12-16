/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   AttributeTest.h
 * Author: ltaveira
 *
 * Created on Dec 16, 2015, 2:15:06 PM
 */

#ifndef ATTRIBUTETEST_H
#define ATTRIBUTETEST_H

#include <cppunit/extensions/HelperMacros.h>

class AttributeTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(AttributeTest);

    CPPUNIT_TEST(testBasicLift);
    CPPUNIT_TEST(testHitPoint);
    CPPUNIT_TEST(testWill);
    CPPUNIT_TEST(testPerception);
    CPPUNIT_TEST(testFatigue);
    CPPUNIT_TEST(testBasicSpeed);
    CPPUNIT_TEST(testDodge);
    CPPUNIT_TEST(testBasicMove);

    CPPUNIT_TEST_SUITE_END();

public:
    AttributeTest();
    virtual ~AttributeTest();

private:
    void testBasicLift();
    void testHitPoint();
    void testWill();
    void testPerception();
    void testFatigue();
    void testBasicSpeed();
    void testDodge();
    void testBasicMove();
};

#endif /* ATTRIBUTETEST_H */

