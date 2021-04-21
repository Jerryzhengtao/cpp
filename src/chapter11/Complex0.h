//
// Created by 郑涛 on 2021/4/19.
//

#ifndef C_PRIMERPLUS_COMPLEX0_H
#define C_PRIMERPLUS_COMPLEX0_H

#include <iostream>

class Complex0 {
private:
    double real_;
    double complex_;
public:
    Complex0(double real = 0, double complex = 0);

    Complex0 operator+(const Complex0 &b) const;

    Complex0 operator-(const Complex0 &b) const;

    Complex0 operator*(const Complex0 &b) const;
    Complex0 operator~() const;

    friend std::ostream &operator<<(std::ostream &os, const Complex0 &c);

    friend Complex0 operator*(double a, const Complex0 &b);


};

#endif //C_PRIMERPLUS_COMPLEX0_H
