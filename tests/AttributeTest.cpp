/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   AttributeTest.cpp
 * Author: ltaveira
 *
 * Created on Dec 16, 2015, 2:15:06 PM
 */

#include "AttributeTest.h"

#include "../Attribute.h"

CPPUNIT_TEST_SUITE_REGISTRATION(AttributeTest);

AttributeTest::AttributeTest() { }

AttributeTest::~AttributeTest() { }

void AttributeTest::testBasicLift() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(9.8d, Attribute(7, 10, 10, 10).basicLift(), 1e-1);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(16.0d, Attribute(9, 10, 10, 10).basicLift(), 0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(16.0d, Attribute(9, 10, 10, 10).basicLift(), 0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(20.0d, Attribute(10, 10, 10, 10).basicLift(), 0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(24.0d, Attribute(11, 10, 10, 10).basicLift(), 0);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(29.0d, Attribute(12, 10, 10, 10).basicLift(), 0);
}

void AttributeTest::testBasicMove() {
    CPPUNIT_ASSERT_EQUAL(5, Attribute(10, 10, 10, 10).basicMove());
    CPPUNIT_ASSERT_EQUAL(6, Attribute(11, 12, 13, 14).basicMove());
    CPPUNIT_ASSERT_EQUAL(4, Attribute(8, 10, 8, 9).basicMove());
}

void AttributeTest::testBasicSpeed() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL(5.0d, Attribute(10, 10, 10, 10).basicSpeed(), 1e-1);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(6.5d, Attribute(11, 12, 13, 14).basicSpeed(), 1e-1);
    CPPUNIT_ASSERT_DOUBLES_EQUAL(4.75d, Attribute(8, 10, 8, 9).basicSpeed(), 1e-1);
}

void AttributeTest::testDodge() {
    CPPUNIT_ASSERT_EQUAL(8, Attribute(10, 10, 10, 10).dodge());
    CPPUNIT_ASSERT_EQUAL(9, Attribute(11, 12, 13, 14).dodge());
    CPPUNIT_ASSERT_EQUAL(7, Attribute(8, 10, 8, 9).dodge());
}

void AttributeTest::testFatigue() {
    CPPUNIT_ASSERT_EQUAL(10, Attribute(10, 10, 10, 10).fatiguePoint());
    CPPUNIT_ASSERT_EQUAL(14, Attribute(11, 12, 13, 14).fatiguePoint());
    CPPUNIT_ASSERT_EQUAL(8, Attribute(8, 12, 8, 8).fatiguePoint());
}

void AttributeTest::testHitPoint() {
    CPPUNIT_ASSERT_EQUAL(10, Attribute(10, 10, 10, 10).hitPoint());
    CPPUNIT_ASSERT_EQUAL(11, Attribute(11, 12, 13, 14).hitPoint());
    CPPUNIT_ASSERT_EQUAL(8, Attribute(8, 12, 13, 14).hitPoint());
}

void AttributeTest::testPerception() {
    CPPUNIT_ASSERT_EQUAL(10, Attribute(10, 10, 10, 10).perception());
    CPPUNIT_ASSERT_EQUAL(13, Attribute(11, 12, 13, 14).perception());
    CPPUNIT_ASSERT_EQUAL(8, Attribute(8, 12, 8, 14).perception());
}

void AttributeTest::testWill() {
    CPPUNIT_ASSERT_EQUAL(10, Attribute(10, 10, 10, 10).will());
    CPPUNIT_ASSERT_EQUAL(13, Attribute(11, 12, 13, 14).will());
    CPPUNIT_ASSERT_EQUAL(8, Attribute(8, 12, 8, 14).will());
}
