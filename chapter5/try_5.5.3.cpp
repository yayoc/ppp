#include "std_lib_facilities.h"


int area(int length, int height) {
  if (length <= 0 || height <= 0) return -1;
  return length * height;
}

int framed_area(int x, int y) {
  constexpr int frame_width = 2;
  int frame_x = x - frame_width;
  int frame_y = y - frame_width;
  if (frame_x <= 0 || frame_y <= 0) {
    return -1;
  }
  return frame_x * frame_y;
}


int f(int x, int y, int z) {
  int area1 = area(x, y);
  if (area1 <= 0) error("non-positive area");
  int area2 = framed_area(1,z);
  int area3 = framed_area(y,z);
  double ratio = double(area1) / area3;
  return ratio;
}

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  cout << f(x, y, z) << "\n";
}
