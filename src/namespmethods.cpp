//
// Created by 郑涛 on 2021/4/17.
//
#include "namesp.h"
#include <iostream>

namespace sale {
    void setSales(Sales &s, const double arr[], int n) {
        
    }

    void setSales(Sales &s) {

    }

    void showSales(const Sales &s) {
        std::cout << "sales: {" << s.sales[0] << "," << s.sales[1] << "," << s.sales[2] << "," << s.sales[3] << "}\n"
                  << "average: " << s.average << "\n"
                  << "max: " << s.max << "\n"
                  << "min: " << s.min << "\n";

    }
}

