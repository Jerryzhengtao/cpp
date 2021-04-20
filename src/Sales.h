//
// Created by 郑涛 on 2021/4/19.
//

#ifndef C_PRIMERPLUS_SALES_H
#define C_PRIMERPLUS_SALES_H

namespace  SALES {
    const int QUARTERS = 4;
    class Sales {
    private:
        double sales_[QUARTERS];
        double average_;
        double max_;
        double min_;
    public:
        Sales();
        Sales(const double sales[],int n );
        void setSales(const Sales &sales);
        void showSales();
    };
}

#endif //C_PRIMERPLUS_SALES_H
