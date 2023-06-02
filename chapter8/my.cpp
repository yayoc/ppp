#include "my.h"

#include "../std_lib_facilities.h"

void print_foo() {
    cout << foo << "\n";
}

void print(int i) {
    cout << i << "\n";
}

void swap_v(int a, int b) {
    // this does not swap a and b on caller
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_cr(const int& a, const int& b) {
    /*
       can't compile as const values are read-only
    int temp;
    temp = a;
    a = b;
    b = temp;
    */
}
