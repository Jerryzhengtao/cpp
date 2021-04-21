//
// Created by 郑涛 on 2021/4/21.
//

#include "Gunslinger.h"

Gunslinger::Gunslinger(int s, double t, const string &fn, const string &sn) : Person(fn, sn), scars(s), time(t) {
}

double Gunslinger::draw() {
    return time;
}

void Gunslinger::show() {
    cout << "gunslinger show: ";
    Person::show();
    cout << "scars: " << scars << " time: " << time;

}
