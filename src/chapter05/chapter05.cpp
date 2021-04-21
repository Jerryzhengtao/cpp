#include <iostream>
#include <cstring>

using namespace std;
const int COUNT = 10;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volumn;
};

void igor();

float tofu(int p);

double mpg(double p1, double p2);

long summation(long arr[], int length);

double doctor(const string &s);

int replace(char *str, char c1, char c2);

void show_box(box b);

void show(box &b);

void set_volumn(box *b);

double factorial(int n);

int fill_array(double arr[], int len);

void show_array(const double arr[], int len);

void reverse_array(double arr[], int len);

//int main() {
//
//    int count = 0;
//    double sum = 0;
//    double nums[COUNT];
//    double temp;
//    while (cin >> temp) {
//        nums[count++] = temp;
//    }
//    for (int i = 0; i < count; ++i) {
//        sum += nums[i];
//    }
//    cout << sum / count << endl;
//
//
//
//    char str[] = "1231123";
//    char c1 = '1';
//    char c2 = 'a';
//    cout << replace(str, c1, c2) << endl;
//    for (int i = 0; i < strlen(str); i++) {
//        cout << str[i];
//    }
//
//
//
//
//    box box1 = {"jerry", 1, 2, 3, 4};
//    show(box1);
//    show_box(box1);
//    set_volumn(&box1);
//    show_box(box1);
//
//
//
//    cout<<"n!="<<factorial(4);
//
//
//
//    double arr[10];
//    double *p1 = &arr[0];
//    double (*p2)[10] = &arr;
//    cout << p1 << " " << p1 + 1 << endl;
//    cout << p2 << " " << p2 + 1 << endl;
//    //int len = fill_array(arr, 10);
//    show_array(arr, len);
//    reverse_array(arr, len);
//    show_array(arr, len);
//
//
//}


int replace(char *str, char c1, char c2) {
    int len = strlen(str);
    int times = 0;
    for (int i = 0; i < len; i++) {
        if (*(str + i) == c1) {
            *(str + i) = c2;
            times++;
        }
    }
    return times;
}

void show_box(box b) {
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volumn << endl;
}

void show(box &b) {

    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volumn << endl;
}

void set_volumn(box *b) {
    b->volumn = b->height * b->width * b->length;
}

double factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fill_array(double arr[], int len) {
    int count = 0;
    double input;
    while (cin >> input && count < len) {
        arr[count++] = input;
    }
    return count;
}

void show_array(const double arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse_array(double arr[], int len) {
    for (int i = 0; i < len / 2; i++) {
        double tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
}