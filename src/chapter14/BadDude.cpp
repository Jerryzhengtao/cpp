//
// Created by 郑涛 on 2021/4/21.
//

#include "BadDude.h"

double BadDude::gDraw() const {
    return Gunslinger::draw();
}

int BadDude::cDraw() const {
    return PokerPlayer::draw();
}

void BadDude::show() const {
    Gunslinger::show();
    PokerPlayer::data();
    BadDude::data();
}

BadDude::BadDude(const string &fn, const string &sn, int s, double t) : Person(fn, sn), PokerPlayer(),
                                                                        Gunslinger(s, t) {

}

void BadDude::data() const {
    cout << "bad data " << " ";
}
