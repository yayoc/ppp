#include "std_lib_facilities.h"

int main() {
  vector<int> nums;
  int val = 0;
  while(cin >> val) {
    if (val == 124) { // | = 124
      break;
    }
    if (nums.size() >= 2) {
      break;
    }
    nums.push_back(val);
  }

  if (nums[0] > nums[1]) {
    cout << "the smaller value is: " << nums[1] << "\n";
    cout << "the bigger value is: " << nums[0] << "\n";
  } else if (nums[1] > nums[0]){
    cout << "the smaller value is: " << nums[0] << "\n";
    cout << "the bigger value is: " << nums[1] << "\n";
  }
}
