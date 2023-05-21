#include "std_lib_facilities.h"

int main()
{
    cout << "enter three names\n";
    string val1 = "";
    string val2 = "";
    string val3 = "";

    cin >> val1 >> val2 >> val3;
    vector<string> v = {val1, val2, val3};
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << "\n";

    return 0;
}
