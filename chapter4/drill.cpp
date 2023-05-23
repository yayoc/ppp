#include "std_lib_facilities.h"

double to_cm(double n, string unit) {

  if (unit == "cm") {
    return n;
  } else if (unit == "m") {
    return n * 100;
  } else if (unit == "in") {
    return n * 2.54;
  } else if (unit == "ft") {
    return n * 12 * 2.54; // ft = 12in
  }

  return n;
}

double str_to_cm(string str) {
  double numericPart = 0;
  string unit = "";

  size_t index = str.find_first_not_of("0123456789.");
  if (index != std::string::npos) {
    numericPart = stod(str.substr(0, index));
    unit = str.substr(index);
  } else {
    // If there are no non-digit characters, consider the entire string as the
    // numeric part
    numericPart = stod(str);
  }

  return to_cm(numericPart, unit);
}

bool has_digits_only(string str) {
  for (char c : str) {
    if (c == 46) { //
      continue;
    }
    if (c < 48 || c > 57) {
      return false;
    }
  }
  return true;
}

bool is_unit(string str) {
  if (str == "cm" | str == "m" | str == "in" | str == "ft") {
    return true;
  }
  return false;
}

int main() {
  double smallest = 1000000;
  double largest = 0;

  vector<string> nums;
  string tmp = "";

  for (string str; cin >> str;) {
    if (str == "|") {
      break;
    }
    if (has_digits_only(str)) {
      tmp = str;
    } else if (is_unit(str)) {
      nums.push_back(tmp + str);
      tmp = "";
    } else {
      nums.push_back(str);
    }
  }

  for (string num : nums) {
    double cm = str_to_cm(num);
    if (cm < smallest) {
      cout << num << " the smallest so far\n";
      smallest = cm;
    }

    if (cm > largest) {
      cout << num << " the largest so far\n";
      largest = cm;
    }
  }
}
