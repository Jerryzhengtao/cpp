//
// Created by 郑涛 on 2021/4/21.
//

#include "PokerPlayer.h"
#include <random>

int PokerPlayer::draw() {
    unsigned int seed = 111;
    srand(seed);
    return rand() % 52 + 1;

}

void PokerPlayer::show() {
    cout << "PokerPlayer show: ";
    Person::show();
}

PokerPlayer::PokerPlayer(const string &fn, const string &sn) : Person(fn, sn) {

}
