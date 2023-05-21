#include "std_lib_facilities.h"

int main()
{
    double val1 = 0;
    double val2 = 0;

    cin >> val1 >> val2;
    if (val1 > val2)
    {
        cout << "val1 is lager than val2\n";
    }
    else if (val1 < val2)
    {
        cout << "val1 is smaller than val2\n";
    }
    else
    {
        cout << "val1 equals to val2\n";
    }

    cout << "val1 + val2 == " << val1 + val2 << "\n"
         << "val1 - val2 == " << val1 - val2 << "\n"
         << "val1 * val2 == " << val1 * val2 << "\n"
         << "val1 / val2 == " << val1 / val2 << "\n";
}
