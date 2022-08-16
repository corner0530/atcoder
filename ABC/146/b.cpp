#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s, t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cin >> n >> s;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      if (t.at(j) == s.at(i)) {
        s.at(i) = t.at((j + n) % 26);
        break;
      }
    }
  }
  cout << s << endl;
}
