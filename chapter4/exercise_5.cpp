#include "std_lib_facilities.h"

int main() {
  double val1 = 0;
  double val2 = 0;
  char op = ' ';

  cout << "Enter two double values and a character to represent an operation\n";
  cin >> val1 >> val2 >> op;

  switch (op) {
    case '+':
      cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n";
       break;
    case '-':
      cout << "The difference between " << val1 << " and " << val2 << " is " << val1 - val2 << "\n";
      break;
    case '*':
      cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << "\n";
      break;
    case '/':
      cout << "The quotient of " << val1 << " divided by " << val2 << " is " << val1 / val2 << "\n";
      break;
  }

}
