//
// Created by 郑涛 on 2021/4/20.
//

#include "VintagePort.h"

VintagePort::VintagePort() {
    nickname_ = new char[5];
    strcpy(nickname_, "none");
    age_ = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "vintage", b) {
    nickname_ = new char[strlen(nn) + 1];
    strcpy(nickname_, nn);
    age_ = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp) {
    nickname_ = new char[strlen(vp.nickname_) + 1];
    strcpy(nickname_, vp.nickname_);
    age_ = vp.age_;

}

VintagePort &VintagePort::operator=(const VintagePort &vp) {
    if (&vp != this) {
        Port::operator=(vp);
        delete[] nickname_;
        nickname_ = new char[strlen(vp.nickname_) + 1];
        strcpy(nickname_, vp.nickname_);
        age_ = vp.age_;
    }
    return *this;
}

void VintagePort::show() {
    Port::show();
    cout << "nickname: " << nickname_ << "\n"
         << "age: " << age_ << endl;
}

ostream &operator<<(ostream &os, const VintagePort &vp) {
    os << "nickname: " << vp.nickname_ << "\n"
       << "age: " << vp.age_ << endl;
    return os;
}
