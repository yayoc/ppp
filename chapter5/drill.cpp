#include "std_lib_facilities.h"

int main() {
  cout << "Success!\n";
  cout << "Success!\n";
  cout << "Success" << "!\n";
  cout << "success!" << '\n';
  int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
  bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";
  string s = "ape"; bool c = "fool" < s; if (c) cout << "Success\n";
  string s1 = "ape"; if (s1 == "fool") cout << "Success!\n";
  string s2 = "ape"; if (s2 == "fool") cout << "Success!\n";
  string s3 = "ape"; if (s3 == "fool") cout << "Success!\n";
  vector<char> v1(5); for(int i = 0; i<v1.size(); ++i); cout << "Success!\n";
  vector<char> v2(5); for(int i = 0; i<v2.size(); ++i); cout << "Success!\n";
  string s4 = "Success!\n"; for(int i = 0; i< s4.size(); ++i) cout << s4[i];
  if (true) { cout << "Success!\n"; } else { cout << "Fail!\n"; }
  int x = 2000; int c1 = x; if (c1 == 2000) { cout << "Success!\n"; }
  string s5 = "Success!\n"; for (int i = 0; i < s5.size(); ++i) cout << s5[i];
  vector<int> v3(5); for (int i = 0; i < v3.size(); ++i) cout << "Success!\n";
  int i1 = 0; int j1 = 9; while (i1 < 10) { ++i1; if (j1 < i1) cout << "Success!\n"; }
  double x1 = 2.8155; double d = 5/(x1-2); if (d == 2*x1+0.5) cout << "Success!\n";
  string s6 = "Success!\n"; for (int i=0; i<s6.size(); ++i) cout << s6[i];
  int i = 0; int j = 9; while(i < 10) ++j; if (j<i) cout << "Success!\n";
  int x2 = 4; double d1 = 5/(x2-2); if (d1 == 2*x2 + 0.5) cout << "Success!\n";
  cout << "Success!\n";
}
