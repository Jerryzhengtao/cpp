//
// Created by 郑涛 on 2021/4/20.
//

#ifndef C_PRIMERPLUS_VINTAGEPORT_H
#define C_PRIMERPLUS_VINTAGEPORT_H

#include"Port.h"

class VintagePort : public Port {
private:
    char *nickname_;
    int age_;
public:
    VintagePort();

    VintagePort(const char *br, int b, const char *nn, int y);

    VintagePort(const VintagePort &vp);

    ~VintagePort() override  { delete[] nickname_ ;};

    VintagePort &operator=(const VintagePort &vp);

    void show();

    friend ostream &operator<<(ostream &os, const VintagePort &vp);
};


#endif //C_PRIMERPLUS_VINTAGEPORT_H
