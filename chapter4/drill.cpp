#include "std_lib_facilities.h"

int main() {
  vector<double> nums;
  double val = 0;
  while(cin >> val) {
    if (val == 124) { // | = 124
      break;
    }
    if (nums.size() >= 2) {
      break;
    }
    nums.push_back(val);
  }

  double diff = nums[0] - nums[1];

  if (diff > 0) {
    cout << "the smaller value is: " << nums[1] << "\n";
    cout << "the bigger value is: " << nums[0] << "\n";
  } else if (diff < 0){
    cout << "the smaller value is: " << nums[0] << "\n";
    cout << "the bigger value is: " << nums[1] << "\n";
  } else if (diff == 0) {
    cout << "the numbers are equal\n";
  }

  if (diff < 0) {
    diff = -diff;
  }
  if (diff != 0 && diff < 1.0/100) {
    cout << "the numbers are almost equal";
  }
}
