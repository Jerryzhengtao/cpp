//
// Created by 郑涛 on 2021/4/21.
//

#include "BadDude.h"

double BadDude::gDraw() {
    return Gunslinger::draw();
}

int BadDude::cDraw() {
    return PokerPlayer::draw();
}

void BadDude::show() {
    cout << "BadDude show:";
    Gunslinger::show();
    PokerPlayer::show();
}

BadDude::BadDude(const string &fn, const string &sn, int s, double t): Person(fn,sn),PokerPlayer(), Gunslinger(s,t) {

}
