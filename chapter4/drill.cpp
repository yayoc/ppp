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

bool is_unit(string str) {
  if (str == "cm" | str == "m" | str == "in" | str == "ft") {
    return true;
  }
  return false;
}

double str_to_cm(string str) {
  double numericPart = 0;
  string unit = "";

  size_t index = str.find_first_not_of("0123456789.");
  if (index != std::string::npos) {
    numericPart = stod(str.substr(0, index));
    unit = str.substr(index);
    if (!is_unit(unit)) {
      invalid_argument("unit must be cm, m, in, or ft");
    }
  } else {
    // If there are no non-digit characters    
    invalid_argument("specify unit");
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

bool customSort(string str1, string str2) {
  double cm1 = str_to_cm(str1);
  double cm2 = str_to_cm(str2);

  return cm1 < cm2;
}

int main() {
  string smallest = "1000000ft";
  string largest = "0";
  double sum = 0;

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
    sum += cm;
    if (cm < str_to_cm(smallest)) {
      smallest = num;
    }

    if (cm > str_to_cm(largest)) {
      largest = num;
    }
  }

  cout << "the smallest: " << smallest << "\n";
  cout << "the largest: " << largest << "\n";
  cout << "sum: " << sum / 100 << "m\n";

  sort(nums.begin(), nums.end(), customSort);

  for (string num : nums) {
    cout << num << "\n";
  }
}
