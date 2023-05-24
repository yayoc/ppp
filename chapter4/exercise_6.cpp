#include "std_lib_facilities.h"

bool is_num(string str) {
  size_t index = str.find_first_not_of("0123456789");
  return index == string::npos;
}

int main() {
  string str = "";
  vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  cin >> str;
  if (is_num(str)) {
    cout << nums[stoi(str)] << "\n";
  } else {
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == str) {
        cout << i << "\n";
        break;
      }
    }
  }
}
