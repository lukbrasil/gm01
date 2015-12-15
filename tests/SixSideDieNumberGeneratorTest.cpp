/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SixSideDieNumberGeneratorTest.cpp
 * Author: ltaveira
 * 
 * Created on December 9, 2015, 7:14 PM
 */

#include "SixSideDieNumberGeneratorTest.h"

#include <vector>
#include <string>

#include "../SixSideDieNumberGenerator.h"

CPPUNIT_TEST_SUITE_REGISTRATION(SixSideDieNumberGeneratorTest);

SixSideDieNumberGeneratorTest::SixSideDieNumberGeneratorTest() {
}

SixSideDieNumberGeneratorTest::~SixSideDieNumberGeneratorTest() {
}

void SixSideDieNumberGeneratorTest::testGenerate() {
    SixSideDieNumberGenerator generator;
    std::vector<int> counter({0, 0, 0, 0, 0, 0});
    
    for (int i = 0; i < 100000; i++) {
        int number = generator.generate();         
        CPPUNIT_ASSERT_MESSAGE("Number " + std::to_string(number) + " is out of range", 
                1 <= number && number <= 6);
        counter[number - 1]++;        
    }
    
    for (int i = 0; i < counter.size(); i++) {
        CPPUNIT_ASSERT_MESSAGE("Number " + std::to_string(i + 1) + " was not generated", 
                counter[i] > 0);        
    }
}

