#include "std_lib_facilities.h"

int main() {
  vector<int> nums;
  int val = 0;
  while(cin >> val) {
    if (val == 124) { // | = 
      break;
    }
    nums.push_back(val);
  }

  for (int num : nums) {
    cout << num << "\n";
  }
}
