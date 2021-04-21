//
// Created by 郑涛 on 2021/4/19.
//

#include "Complex0.h"

Complex0::Complex0(double real, double complex) {
    real_ = real;
    complex_ = complex;
}


Complex0 Complex0::operator+(const Complex0 &b) const {
    return {real_ + b.real_, complex_ + b.complex_};
}

Complex0 Complex0::operator-(const Complex0 &b) const {
    return {real_ - b.real_, complex_ - b.complex_};
}

Complex0 Complex0::operator*(const Complex0 &b) const {
    //(a+b)*(c+d) = ac + db + ad + db
    return {real_ * b.real_ + complex_ * b.complex_, -(real_ * b.complex_ + complex_ * b.real_)};
}

Complex0 operator*(double a, const Complex0 &b) {
    return {a * b.real_, a * b.complex_};
}

std::ostream &operator<<(std::ostream &os, const Complex0 &c) {
    os << "(" << c.real_ << "," << c.complex_ << "i)";
    return os;
}

Complex0 Complex0::operator~() const {
    return {real_,-complex_};
}
