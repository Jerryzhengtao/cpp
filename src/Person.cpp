//
// Created by 郑涛 on 2021/4/21.
//

#include "Person.h"

Person::Person(const string &fn, const string &sn) : first_name(fn), second_name(sn) {

}

void Person::show() {
    cout << "first_name: " << first_name << " second_name: " << second_name;
}
