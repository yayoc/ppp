#include "std_lib_facilities.h"

int main() {
  constexpr double yen_to_doller = 0.0073;
  constexpr double euro_to_doller = 1.08;
  constexpr double pound_to_doller = 1.24;
  double amount = 0;
  char unit = ' ';

  cout << "Please enter an amount followed by a unit(y, e, and p)\n";
  cin >> amount >> unit;

  switch (unit) {
  case 'y':
    cout << amount << "yen == " << amount * yen_to_doller << "dollers\n";
    break;
  case 'e':
    cout << amount << "euros == " << amount * euro_to_doller << "dollers\n";
    break;
  case 'p':
    cout << amount << "pounds == " << amount * pound_to_doller << "dollers\n";
    break;
  default:
    cout << "Sorry, I don't know a unit called " << unit << "\n";
    break;
  }
}
