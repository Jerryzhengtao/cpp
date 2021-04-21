//
// Created by 郑涛 on 2021/4/20.
//

#include "Test.h"
#include <iostream>

using namespace std;

int B::q() {
    cout << "B:p" << endl;
    return 0;
}

long C::q() {
    cout << "C:q" << endl;
    return 0;
}

int C::omg() {
    cout << "C:omg" << endl;
    return 0;
}

int E::omg() {
    cout << "E:omg" << endl;
    return 0;
}

void F::test() {
    cout << "call q: ";
    q();
    E::omg();
    //omg(); 基类C和基类E都定义了omg，而c和E没有父子关系，所以不加限定符会有二义性
    //即使是其中一个被声明为private
}

int A::q(int a) {
    cout << "A:q" << endl;
    return 0;
}

//int A::q() {
//    cout<<"A:q()"<<endl;
//    return 0;
//}


