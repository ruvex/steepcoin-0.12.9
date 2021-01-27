
// Copyright (c) 2019 The Advanced Technology Coin and Eternity Group
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SPYSEND_RELAY_H
#define SPYSEND_RELAY_H

#include "main.h"
#include "activegoldminenode.h"
#include "goldminenodeman.h"


class CSpySendRelay
{
public:
    CTxIn vinGoldminenode;
    vector<unsigned char> vchSig;
    vector<unsigned char> vchSig2;
    int nBlockHeight;
    int nRelayType;
    CTxIn in;
    CTxOut out;

    CSpySendRelay();
    CSpySendRelay(CTxIn& vinGoldminenodeIn, vector<unsigned char>& vchSigIn, int nBlockHeightIn, int nRelayTypeIn, CTxIn& in2, CTxOut& out2);
    
    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action, int nType, int nVersion) {
        READWRITE(vinGoldminenode);
        READWRITE(vchSig);
        READWRITE(vchSig2);
        READWRITE(nBlockHeight);
        READWRITE(nRelayType);
        READWRITE(in);
        READWRITE(out);
    }

    std::string ToString();

    bool Sign(std::string strSharedKey);
    bool VerifyMessage(std::string strSharedKey);
    void Relay();
    void RelayThroughNode(int nRank);
};



#endif
