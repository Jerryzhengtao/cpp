//
// Created by 郑涛 on 2021/4/21.
//

#ifndef C_PRIMERPLUS_POKERPLAYER_H
#define C_PRIMERPLUS_POKERPLAYER_H

#include "Person.h"

class PokerPlayer : virtual public Person {
public:
    explicit PokerPlayer(const string &fn = "poker none", const string &sn = "poker none");

    int draw();

    void show();
};


#endif //C_PRIMERPLUS_POKERPLAYER_H
