//
// Created by 郑涛 on 2021/4/17.
//
#include<iostream>
#include "namesp.h"
using namespace std;
const int BUFF_SIZE = 100;
char buffer[BUFF_SIZE];
struct chaff {
    char dross[20];
    int slag;
};

int main() {
    //TASK03
//    chaff* buff = new(buffer) chaff[2];
//    strcpy(buff[0].dross,"123123");
//    strcpy(buff[1].dross,"qweqwew");
//    buff[0].slag = 1;
//    buff[1].slag = 2;
//    for(int i=0;i<2;i++){
//        int len = strlen(buff[i].dross);
//        for(int j=0;j<len;j++){
//            cout<<buff[i].dross[j];
//        }
//        cout<<" "<<buff[i].slag<<endl;
//    }

}

