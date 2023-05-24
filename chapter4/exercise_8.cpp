#include "std_lib_facilities.h"

int calc(int n) {
  int i = 1;
  int s = 1;
  while(i < n) {
    s++;
    i *= 2;
  }
  return s;
}

int main() {
  int s1, s2, s3;
  int g1, g2, g3;

  cout << calc(1000) << " squares are required for 1000 grains\n";
  cout << calc(1000000) << " squares are required for 1000000 grains\n";
  cout << calc(1000000000) << " squares are required for 1000000000 grains\n";

}
