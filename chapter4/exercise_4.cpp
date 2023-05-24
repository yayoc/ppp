#include "std_lib_facilities.h"

void recQuiz(int l, int r) {
  if (l == r - 1) {
    cout << "The number you are thinking is " << l << "\n";
    return;
  }

  int mid = (l + r) / 2;

  string answer = "";
  cout << "Is the number you are thinking of less than " << mid << "\n";
  cin >> answer;
  if (answer == "yes") {
    recQuiz(l, mid);
  } else if (answer == "no") {
    recQuiz(mid, r);
  } else {
    cout << "Please answer yes or no\n";
    recQuiz(l, r);
  }
}

int main() {
  int min = 0;
  int max = 100;

  recQuiz(min, max);
}
