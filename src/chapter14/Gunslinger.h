//
// Created by 郑涛 on 2021/4/21.
//

#ifndef C_PRIMERPLUS_GUNSLINGER_H
#define C_PRIMERPLUS_GUNSLINGER_H

#include "Person.h"

class Gunslinger : virtual public Person {
private:
    int scars;
    double time;
protected:
    virtual void data() const;

public:
    explicit Gunslinger(int s = 0, double t = 0.0, const string &fn = "gun none", const string &sn = "gun none");

    double draw() const;

    void show() const;

};


#endif //C_PRIMERPLUS_GUNSLINGER_H
