//
// Created by 郑涛 on 2021/4/20.
//

#include "Port.h"
#include<iostream>

Port::Port(const char *br, const char *st, int bo) {
    brand_ = new char[strlen(br) + 1];
    strcpy(brand_, br);
    strcpy(style_, st);
    bottles_ = bo;
}

Port::Port(const Port &p) {
    brand_ = new char[strlen(p.brand_) + 1];
    strcpy(brand_, p.brand_);
    strcpy(style_, p.style_);
    bottles_ = p.bottles_;
}

Port &Port::operator=(const Port &p) {
    if (&p != this) {
        delete[] brand_;
        brand_ = new char[strlen(p.brand_) + 1];
        strcpy(brand_, p.brand_);
        strcpy(style_, p.style_);
        bottles_ = p.bottles_;
    }
    return *this;
}

Port &Port::operator+=(int b) {
    bottles_ += b;
    return *this;
}

Port &Port::operator-=(int b) {
    bottles_ -= b;
    return *this;
}

ostream &operator<<(ostream &os, const Port &p) {
    os << p.brand_ << ", " << p.style_ << ", " << p.bottles_;
    return os;
}

void Port::show() const {
    cout << "Brand: " << brand_ << "\n"
         << "Kind: " << style_ << "\n"
         << "Bottles: " << bottles_ << endl;
}
