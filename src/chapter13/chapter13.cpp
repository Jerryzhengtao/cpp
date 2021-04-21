//
// Created by 郑涛 on 2021/4/20.
//
#include <iostream>
#include "Port.h"
#include "VintagePort.h"
#include "../Test.h"

using namespace std;

int main() {
    //TASK04
//    Port port1 = {"jerry", "tawny", 10};
//    Port port2 = {"tom", "vintage", 5};
//    Port port3 = {"tom", "vintage", 5};
//    //cout << port1 << "\n" << port2 << endl;
//    port1.show();
//    port2.show();
//    port3.show();
//    port1 += 1;
//    port2 -= 3;
//    port3 = port2;
//    port1.show();
//    port2.show();
//    port3.show();

//    VintagePort vintagePort1 = {"jerry", 20, "nick_jerry", 12};
//    VintagePort vintagePort2 = {"tom", 11, "nick_tom", 9};
//    VintagePort vintagePort3 = {"tommy", 122, "nick_tommy", 1};
//    vintagePort1.show();
//    vintagePort2.show();
//    vintagePort3.show();
//    cout<<endl;
//    cout<<vintagePort1<<endl;
//    cout<<vintagePort2<<endl;
//    cout<<vintagePort3<<endl;

//vintagePort1+=1000;
//vintagePort2-=100000;
//vintagePort3 = vintagePort2;
//
//vintagePort1.show();
//vintagePort2.show();
//vintagePort3.show();

    A *pa;
    B *pb;
    A a;
    pa = &a;
    pb = &a;
    pa->q(1);
    pb->q();
    F f;
    f.test();
}
