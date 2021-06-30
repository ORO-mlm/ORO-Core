// Copyright (c) 2020 The ORO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ORO_LEGACY_ZPOS_H
#define ORO_LEGACY_ZPOS_H

#include "stakeinput.h"
#include "txdb.h"

class CLegacyZOroStake : public CStakeInput
{
private:
    uint32_t nChecksum{0};
    libzerocoin::CoinDenomination denom{libzerocoin::ZQ_ERROR};
    uint256 hashSerial{UINT256_ZERO};

public:
    CLegacyZOroStake() : CStakeInput(nullptr) {}

    explicit CLegacyZOroStake(const libzerocoin::CoinSpend& spend);
    bool InitFromTxIn(const CTxIn& txin) override;
    bool IsZORO() const override { return true; }
    uint32_t GetChecksum() const { return nChecksum; }
    const CBlockIndex* GetIndexFrom() const override;
    CAmount GetValue() const override;
    CDataStream GetUniqueness() const override;
    bool CreateTxIn(CWallet* pwallet, CTxIn& txIn, uint256 hashTxOut = UINT256_ZERO) override { return false; /* creation disabled */}
    bool CreateTxOuts(CWallet* pwallet, std::vector<CTxOut>& vout, CAmount nTotal, const bool onlyP2PK) override { return false; /* creation disabled */}
    bool GetTxOutFrom(CTxOut& out) const override { return false; /* not available */ }
    virtual bool ContextCheck(int nHeight, uint32_t nTime) override;
};

#endif //ORO_LEGACY_ZPOS_H
