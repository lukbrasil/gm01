/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   SixSideDieNumberGeneratorTest.h
 * Author: ltaveira
 *
 * Created on December 9, 2015, 7:14 PM
 */

#ifndef SIXSIDEDIENUMBERGENERATORTEST_H
#define SIXSIDEDIENUMBERGENERATORTEST_H

#include <cppunit/extensions/HelperMacros.h>

class SixSideDieNumberGeneratorTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(SixSideDieNumberGeneratorTest);

    CPPUNIT_TEST(testGenerate);

    CPPUNIT_TEST_SUITE_END();

public:
    SixSideDieNumberGeneratorTest();
    virtual ~SixSideDieNumberGeneratorTest();
private:
    void testGenerate();
};

#endif /* SIXSIDEDIENUMBERGENERATORTEST_H */

