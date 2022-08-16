#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, ab, ba;
  cin >> a >> b;
  if (a < b) {
    for (int i = 0; i < b; i++) {
      cout << a;
    }
  } else if (a > b) {
    for (int i = 0; i < a; i++) {
      cout << b;
    }
  } else {
    for (int i = 0; i < a; i++) {
      cout << a;
    }
  }
  cout << endl;
}
