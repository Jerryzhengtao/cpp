//
// Created by 郑涛 on 2021/4/21.
//

#ifndef C_PRIMERPLUS_POKERPLAYER_H
#define C_PRIMERPLUS_POKERPLAYER_H

#include "Person.h"

class PokerPlayer : virtual public Person {
protected:
    virtual void data() const;

public:
    explicit PokerPlayer(const string &fn = "poker none", const string &sn = "poker none");

    int draw() const;

    void show() const;
};


#endif //C_PRIMERPLUS_POKERPLAYER_H
