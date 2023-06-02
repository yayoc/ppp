#include "my.h"

#include "../std_lib_facilities.h"

int foo = 7;

int main() {
    print_foo();
    print(99);

    int x = 7;
    int y = 9;

    swap_r(x, y);
    cout << "x is " << x << "\n";
    cout << "y is " << y << "\n";

    // swap_v does not swap values
    swap_v(7, 9);

    /*
    const int cx = 7;
    const int cy = 9;
    swap_cr(cx, cy);
    */


    /*
       can't compile as swap functions take int
    swap_?(7.7, 9.9);
    double dx = 7.7;
    double dy = 9.9;
    swap_?(dx, dy);
    swap_?(7.7, 9.9);
    */

}
