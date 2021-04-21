//
// Created by 郑涛 on 2021/4/21.
//

#include "Gunslinger.h"

Gunslinger::Gunslinger(int s, double t, const string &fn, const string &sn) : Person(fn, sn), scars(s), time(t) {
}

double Gunslinger::draw() const {
    return time;
}

void Gunslinger::show() const {
    Person::show();
    data();
}

void Gunslinger::data() const {
    cout << "scars: " << scars << " time: " << time << " ";
}
