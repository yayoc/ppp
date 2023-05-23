include "std_lib_facilities.h"

int main() {
  vector<double> distances;
  double sum = 0;
  double smallest = 100000;
  double largest = 0;
  double mean = 0;

  for (double temp; cin >> temp;) {
    distances.push_back(temp);
  }

  for (double dis : distances) {
    if (dis < smallest) {
      smallest = dis;
    }
    if (dis > largest) {
      largest = div;
    }
    sum += dis;
  }

  cout << "sum is " << sum << "\n";
  cout << "largest is " << largest << "\n";
  cout << "smallest is " << smallest << "\n";
  cout << "mean is " << sum / distances.size() << "\n";
}
