// Copyright (c) 2020 The ORO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef ORO_SAPLING_TEST_FIXTURE_H
#define ORO_SAPLING_TEST_FIXTURE_H

#include "test/test_oro.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //ORO_SAPLING_TEST_FIXTURE_H
