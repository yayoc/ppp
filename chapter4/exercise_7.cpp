#include "std_lib_facilities.h"

bool is_num(string str) {
  size_t index = str.find_first_not_of("0123456789.");
  return index == string::npos;
}

double str_to_double(string str) {
  if (is_num(str)) {
    return stod(str);
  }
  
  vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == str) {
      return i;
    }
  }
  return 0;
}

int main() {
  string str1 = "";
  string str2 = "";
  char op = ' ';

  cout << "Enter two double values and a character to represent an operation\n";
  cin >> str1 >> str2 >> op;

  double val1 = str_to_double(str1);
  double val2 = str_to_double(str2);

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
