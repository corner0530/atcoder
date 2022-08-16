#include <bits/stdc++.h>

#include <cstdlib>
#include <iomanip>
#include <sstream>  // std::stringstream
#include <string>
using namespace std;

int main() {
  stringstream ss;
  int n, num = 0, size;
  string s;
  bool b;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    b = true;
    ss.str("");
    ss << dec << i;
    s = ss.str();
    size = s.size();
    for (int j = 0; j < size; j++) {
      if (s.at(j) == '7') {
        b = false;
      }
    }
    ss.str("");
    ss << oct << i;
    s = ss.str();
    size = s.size();
    for (int j = 0; j < size; j++) {
      if (s.at(j) == '7') {
        b = false;
      }
    }
    if (b == true) num++;
  }
  cout << num << endl;
}
