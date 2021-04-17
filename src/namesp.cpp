//
// Created by 郑涛 on 2021/4/17.
//
#include "namesp.h"
#include <iostream>

namespace sale {
    void setSales(Sales &s, const double arr[], int n) {
        double max = arr[0];
        double min = arr[0];
        double sum = 0;
        int nums = 0;
        for (int i = 0; i < 4 && i < n; i++) {
            s.sales[i] = arr[i];
            sum += arr[i];
            nums++;
            if (max < arr[i]) {
                max = arr[i];
            }
            if (min > arr[i]) {
                min = arr[i];
            }
        }
        if (n < 4) {
            for (int i = n + 0; i < 4; i++) {
                s.sales[i] = 0;
            }
        }
        s.average = sum / nums;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales &s) {
        setSales(s, s.sales, 4);
        s.sales[0] = s.sales[1]+s.sales[2]+s.sales[3];
        s.sales[1] = 0;
        s.sales[2] = 0;
        s.sales[3] = 0;
    }

    void showSales(const Sales &s) {
        std::cout << "sales: {" << s.sales[0] << "," << s.sales[1] << "," << s.sales[2] << "," << s.sales[3] << "}\n"
                  << "average: " << s.average << "\n"
                  << "max: " << s.max << "\n"
                  << "min: " << s.min << "\n";

    }
}

