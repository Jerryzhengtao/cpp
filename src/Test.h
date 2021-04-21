//
// Created by 郑涛 on 2021/4/20.
//

#ifndef C_PRIMERPLUS_TEST_H
#define C_PRIMERPLUS_TEST_H


class B {
public:
    int q();
};

class A : public B {
public:
    int q(int a);
};

class C : virtual public B {
public:
    long q();

    int omg();
};

class D : public C {

};

class E : virtual public B {
public:
    int omg();

};

class F : public E, public D {
public:
    void test();

};

#endif //C_PRIMERPLUS_TEST_H
