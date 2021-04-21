//
// Created by 郑涛 on 2021/4/21.
//

#ifndef C_PRIMERPLUS_PERSON_H
#define C_PRIMERPLUS_PERSON_H
#include<iostream>
using namespace std;
class Person {
private:
    string first_name;
    string second_name;
public:
    Person(const string &fn="none",const string &sn="none");
    virtual void show();

};
#endif //C_PRIMERPLUS_PERSON_H
