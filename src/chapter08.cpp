//
// Created by 郑涛 on 2021/4/17.
//
#include<iostream>
#include<cctype>
#include<cstring>
struct x{
    int s;
};
using namespace std;

void print(string s, int a);

void to_upper(string &s);

template<class T>
T max(const T arr[]);

template<class T>
T maxn(const T arr[], int len);

template<>
const char *maxn<>(const char *const arr[], int len);

int main() {

//TASK01
//    print("sss",1);
//    print("sss",1);

//TASK 03
//    string s="qweAAAA";
//    to_upper(s);
//    cout<<s<<endl;

//TASK05
//    double arr[] = {1, 2, 2, 3.2, 4.1};
//    int arr1[] = {4, 7, 2, 9, 10};
//    char arr2[] = {'a', 'c', 'a', 'A', '.'};
//    cout << max(arr) << endl;
//    cout << max(arr1) << endl;
//    cout << max(arr2) << endl;

//TASK06
    const char *arr[5] = {"123", "2348", "2349", "222", "1"};
//字符串常量不能用char *，应该用const char*,但const 不匹配具体化模板
    cout << maxn(arr, 5) << endl;
    int arr1[7] = {1, 2, 3, 6, 5, 4, 2};
    cout << maxn(arr1, 7) << endl;

}

void print(string s, int a) {
    static int call = 0;
    call++;
    if (a != 0) {
        for (int i = 0; i < call; i++) {
            cout << s << endl;
        }
    } else {
        cout << endl;
    }
    cout << endl;
}

void to_upper(string &s) {
    for (char &i : s) {
        i =(char) toupper(i);
    }
}

template<class T>
T max(const T arr[]) {
    T max = arr[0];
    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

template<class T>
T maxn(const T arr[], int len) {
    T max;
    max = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template<>
const char *maxn<>(const char *const arr[], int len) {
    int max_length = strlen(arr[0]);
    const char *s_ptr = arr[0];
    for (int i = 0; i < len; i++) {
        if (strlen(arr[i]) > max_length) {
            max_length = strlen(arr[i]);
            s_ptr = arr[i];
        }
    }
    return s_ptr;
}
