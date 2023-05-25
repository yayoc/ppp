#include "std_lib_facilities.h"

int main() {
  constexpr int min_temp = -88;
  constexpr int max_temp = 58;

  double sum = 0;
  double high_temp = min_temp;
  double low_temp = max_temp;
  int no_of_temps = 0;

  for (double temp; cin>>temp;) {
    ++no_of_temps;
    if (temp > high_temp) high_temp = temp;
    if (temp < low_temp) low_temp = temp;
    sum += temp;
  }

  cout << "High temprature: " << high_temp << "\n";
  cout << "Low temprature: " << low_temp << "\n";
  cout << "Average temprature: " << sum / no_of_temps << "\n";
}
