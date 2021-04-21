//
// Created by 郑涛 on 2021/4/21.
//

#ifndef C_PRIMERPLUS_WINE_H
#define C_PRIMERPLUS_WINE_H

#include<iostream>

using namespace std;

template<typename T>
class ValArray {
private:
    T arr[10]={0};
public:
    T &operator[](int i);
};

template<typename T1, typename T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    Pair(const T2 &aval, const T2 &bval);

    Pair() {};

    T1 first() const { return a; };

    T2 second() const { return b; };
};


class Wine {
private:
    string label;
    int size;
    Pair<ValArray<int>, ValArray<int>> pair;
public:
    Wine(const char *l, int year, const int years[], const int bots[]);

    Wine(const char *label, int length);

    void getBottles();

    const string &getLabel() const;

    int sum() const;
    void show();
};

#endif //C_PRIMERPLUS_WINE_H
