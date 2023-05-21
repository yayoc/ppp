#include "std_lib_facilities.h"

int main()
{
    cout << "enter a value\n";
    string val = "";

    cin >> val;
	unordered_map<string, int> map = { {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}};

	if (map.find(val) != map.end()) {
		cout << "value is " << map.at(val) << "\n";
	} else {
		cout << "stupid computer!\n";
	}

    return 0;
}
