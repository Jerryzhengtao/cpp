//
// Created by 郑涛 on 2021/4/19.
//

#ifndef C_PRIMERPLUS_STACK_H
#define C_PRIMERPLUS_STACK_H

#include <string>
using namespace std;
struct Customer{
    string name;
    double payment;

};

typedef Customer Item;

class Stack {
private:
    enum{MAX=10};
    Item items_[MAX];
    int top_;
public:
    Stack();
    bool is_empty();
    bool is_full();
    bool push(Item item);
    bool pop(Item &item);
};


#endif //C_PRIMERPLUS_STACK_H
