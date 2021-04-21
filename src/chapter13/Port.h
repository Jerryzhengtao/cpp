//
// Created by 郑涛 on 2021/4/20.
//

#ifndef C_PRIMERPLUS_PORT_H
#define C_PRIMERPLUS_PORT_H

#include<iostream>

using namespace std;

class Port {
private:
    char *brand_;
    char style_[20];
    int bottles_;
public:
    explicit Port(const char *br = "none", const char *st = "none", int b = 0);

    Port(const Port &p);

    virtual ~Port() { delete[] brand_; };

    Port &operator=(const Port &p);

    Port &operator+=(int b);

    Port &operator-=(int b);

    int bottle_count() const { return bottles_; };

    virtual void show() const;

    friend ostream &operator<<(ostream &os, const Port &p);


};


#endif //C_PRIMERPLUS_PORT_H
