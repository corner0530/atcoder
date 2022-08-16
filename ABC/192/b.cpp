#include <bits/stdc++.h>

#include <numeric>
using namespace std;

int main() {
  string small = "qwertyuiopasdfghjklzxcvbnm",
         large = "QWERTYUIOPASDFGHJKLZXCVBNM", s;
  bool res = true;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 1) {
      for (int j = 0; j < small.size(); j++) {
        if (s.at(i) == small.at(j)) {
          res = false;
        }
      }
    } else {
      for (int j = 0; j < large.size(); j++) {
        if (s.at(i) == large.at(j)) {
          res = false;
        }
      }
    }
  }
  if (res) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
