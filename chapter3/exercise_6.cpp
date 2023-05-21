#include "std_lib_facilities.h"

int main()
{
    cout << "enter three integer values\n";
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    cin >> val1 >> val2 >> val3;
    vector<int> v = {val1, val2, val3};
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << "\n";

    return 0;
}
