//
// Created by 郑涛 on 2021/4/18.
//

#ifndef C_PRIMERPLUS_GOLF_H
#define C_PRIMERPLUS_GOLF_H
const int LEN_c = 40;

class Golf {
private:
    char fullName_[LEN_c];
    int handicap_;
public:
    Golf();

    Golf(const char fullName[], int handicap);

    void setGolf(const Golf &golf);

    void showGolf();
};


#endif //C_PRIMERPLUS_GOLF_H
