// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin developers
// Copyright (c) 2017-2020 The PIVX developers
// Copyright (c) 2021- The ORO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ORO_AMOUNT_H
#define ORO_AMOUNT_H

#include <stdint.h>

/** Amount in ORO (Can be negative) */
typedef int64_t CAmount;

static const CAmount COIN = 1000;
static const CAmount CENT = 10;

#endif //  ORO_AMOUNT_H
