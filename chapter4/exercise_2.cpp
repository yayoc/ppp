#include "std_lib_facilities.h"

int main() {

  vector<double> nums;
  for (double temp; cin >> temp;) {
    nums.push_back(temp);
  }

  sort(nums);
  double med = 0;

  if (nums.size() % 2 == 0) {
    med = (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2;
  } else {
    med = nums[nums.size() / 2];
  }

  cout << "median is " << med << "\n";
}
