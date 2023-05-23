#include "std_lib_facilities.h"

int square(int val) {
  if (val < 0) {
    val = -val;
  }
  int res = 0;
  for (int i = 0; i < val; i++) {
    res += val;
  }
  return res;
}

int main() {
  int val = 0;
  cin >> val;
  cout << "square(val) == " << square(val) << "\n"; 
}
