// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2021- The ORO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ORO_CORE_NEW_GUI_PRUNNABLE_H
#define ORO_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //ORO_CORE_NEW_GUI_PRUNNABLE_H
