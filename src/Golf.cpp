//
// Created by 郑涛 on 2021/4/18.
//

#include <iostream>
#include "Golf.h"

using namespace std;

Golf::Golf() {

}

Golf::Golf(const char fullName[], int handicap) {
    int i = 0;
    while (fullName[i] != '\0' && i < 40) {
        fullName_[i] = fullName[i];
        i++;
    }
    handicap_ = handicap;
}

void Golf::setGolf(const Golf &golf) {
    *this = golf;
    this->handicap_ = golf.handicap_;
}

void Golf::showGolf() {
    int i = 0;
    cout << "fullName_: ";
    while (fullName_[i] != '\0' && i < 40) {
        cout << fullName_[i] << " ";
        i++;
    }
    cout << endl;
    cout << "handicap:  " << handicap_ << endl;
}
