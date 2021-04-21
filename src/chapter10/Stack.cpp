//
// Created by 郑涛 on 2021/4/19.
//

#include "Stack.h"

Stack::Stack() {
    top_ = 0;
}

bool Stack::is_empty() {
    return top_ == 0;
}

bool Stack::is_full() {
    return top_ == MAX;
}

bool Stack::push(Item item) {
    if (top_ < MAX) {
        items_[top_++] = item;
        return true;
    } else {
        return false;
    }
}

bool Stack::pop(Item &item) {
    if (top_ > 0) {
        item = items_[top_ - 1];
        top_--;
        return true;
    } else {
        return false;
    }
}
