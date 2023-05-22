#include "std_lib_facilities.h"

int main() {
  constexpr double yen_to_doller = 0.0073;
  constexpr double euro_to_doller = 1.08;
  constexpr double pound_to_doller = 1.24;

  double amount = 0;
  string unit = "";

  cout << "Please enter an amount followed by a unit(yen, euros, and pounds)\n";
  cin >> amount >> unit;

  if (unit == "yen") {
	cout << amount << "yen == " << amount * yen_to_doller << "dollers\n";
  }
  else if (unit == "euros") {
	cout << amount << "euros == " << amount * euro_to_doller << "dollers\n";
  } 
  else if (unit == "pounds") {
	cout << amount << "pounds == " << amount * pound_to_doller << "dollers\n";
  }
  else {
	cout << "Sorry, I don't know a unit called " << unit << "\n";
  }
}
