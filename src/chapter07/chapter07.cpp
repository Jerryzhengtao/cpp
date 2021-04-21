//
// Created by 郑涛 on 2021/4/17.
//
#include<iostream>

using namespace std;

double *fill_array(double *start, double *end);

void show_array(const double *start, const double *end);

int main() {
    //TASK7
//    double arr[10];
//    double *end = fill_array(&arr[0], &arr[9]);
//    cout << &arr[0] << endl;
//    cout << end << endl;
//    show_array(arr, end);
//    end = fill_array(end, &arr[9]);
//    show_array(arr, &arr[9]);


}

double *fill_array(double *start, double *end) {
    double tmp;
    while (start <= end && (cin >> tmp)) {
        *start = tmp;
        start++;
    }
    cin.clear();
    return start;
}

void show_array(const double *start, const double *end) {
    while (start <= end) {
        cout << *start << " ";
        start++;
    }
    cout << endl;
}


