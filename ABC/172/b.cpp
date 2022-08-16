#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int len = S.length();
  int num = 0;
  for (int i = 0; i < len; i++) {
    if (S.at(i) != T.at(i)) {
      num++;
    }
  }
  cout << num << endl;
}
