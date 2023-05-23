#include "std_lib_facilities.h"

int main() {
  vector<string> words;
  string disliked = "tomato";
  for (string temp; cin >> temp; )
    words.push_back(temp);

  cout << "Number of words: " << words.size() << "\n";
  
  sort(words);

  for (string word : words) {
    if (word == disliked) {
      cout << "BLEEP\n";
    } else {
      cout << word << "\n";
    }
  }
}
