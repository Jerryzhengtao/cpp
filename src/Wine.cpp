//
// Created by 郑涛 on 2021/4/21.
//

#include "Wine.h"

template<typename T>
T &ValArray<T>::operator[](int i) {
    if (i < 0) {
        cout << endl;
    } else if (i > 19) {
        cout << endl;
    } else {
        return arr[i];
    }
}

template<typename T1, typename T2>
Pair<T1, T2>::Pair(const T2 &aval, const T2 &bval) {
    a = aval;
    b = bval;
}

Wine::Wine(const char *l, int length) : label(l), size(length) {
}

Wine::Wine(const char *l, int year, const int years[], const int bots[]) : label(l), size(year) {

    cout << "first label : " << l << endl;
    ValArray<int> va;
    ValArray<int> vb;
    for (int i = 0; i < year; i++) {
        va[i] = years[i];
        vb[i] = bots[i];
    }
    pair = Pair<ValArray<int>, ValArray<int>>(va, vb);
}

const string &Wine::getLabel() const {
    return label;
};

void Wine::getBottles() {

}

int Wine::sum() const {
    ValArray<int> val = pair.second();
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += val[i];
    }
    return sum;
}

void Wine::show() {
    cout << "Wine:" << "\n"
         << "  label: " << label << "\n"
         << "  size: " << size << "\n"
         << "  pair: " << "\n"
         << "      year: " << "\n"
         << "        ";
    for (int i = 0; i < size; i++) {
        cout << pair.first()[i] << " ";
    }
    cout << "\n"
         << "      bottles: " << "\n"
         << "        ";
    for (int i = 0; i < size; i++) {
        cout << pair.second()[i] << " ";
    }
    cout << endl;
}
