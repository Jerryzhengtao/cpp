//
// Created by 郑涛 on 2021/4/21.
//
#include<iostream>
#include "Wine.h"
#include "Person.h"
#include "Gunslinger.h"
#include "PokerPlayer.h"
#include "BadDude.h"

using namespace std;

int main() {
    //TASK01
//    char lab[50];
//    cin.getline(lab, 50);
//    int yeas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int bots[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 1010};
//    Wine wine = {lab, 10, yeas, bots};
//    wine.show();
//    cout << wine.sum() << endl;
//    string s = wine.getLabel();//拷贝构造
//    cout << s << endl;
//    s[0] = '1';
//    cout << wine.getLabel() << endl;

//TASK04
    Person person1;
    person1.show();
    cout << endl;

    Gunslinger gunslinger1;
    cout << "gun draw: " << gunslinger1.draw() << endl;
    gunslinger1.show();
    cout << endl;

    PokerPlayer pokerPlayer;
    cout << "poker draw: " << pokerPlayer.draw() << endl;
    pokerPlayer.show();
    cout << endl;

    BadDude badDude;
    cout << "bad gDrew" << badDude.gDraw() << endl;
    cout << "bad cDrew" << badDude.cDraw() << endl;
    badDude.show();


}
