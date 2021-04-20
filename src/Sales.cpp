//
// Created by 郑涛 on 2021/4/19.
//

#include "Sales.h"
#include <iostream>

using namespace SALES;

Sales::Sales() {}

Sales::Sales(const double *sales, int n) {
    for (int i = 0; i < n && i < QUARTERS; i++) {
        sales_[i] = sales[i];
    }
    max_ = sales_[0];
    min_ = sales[1];
    average_ = sales_[2];
}

void Sales::setSales(const Sales &sales) {
    *this = sales;
}

void Sales::showSales() {
    std::cout << "sales_: ";
    for (double sale : sales_) {
        std::cout << sale << " ";
    }
    std::cout << "average: " << average_ << " max: " << max_ << " min: " << min_ << std::endl;
}