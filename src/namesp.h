//
// Created by 郑涛 on 2021/4/17.
//

#ifndef C_PRIMERPLUS_NAMESP_H
#define C_PRIMERPLUS_NAMESP_H
namespace sale{
    const int QUARTERS = 4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
}
#endif //C_PRIMERPLUS_NAMESP_H
