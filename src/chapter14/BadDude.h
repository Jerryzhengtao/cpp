//
// Created by 郑涛 on 2021/4/21.
//

#ifndef C_PRIMERPLUS_BADDUDE_H
#define C_PRIMERPLUS_BADDUDE_H

#include "Gunslinger.h"
#include "PokerPlayer.h"

class BadDude : public Gunslinger, public PokerPlayer {
protected:
    virtual void data() const;

public:

    explicit BadDude(const string &fn = "bad none", const string &sn = " bad none", int s = 0, double t = 0);

    double gDraw() const;

    int cDraw() const;

    void show() const;
};


#endif //C_PRIMERPLUS_BADDUDE_H
