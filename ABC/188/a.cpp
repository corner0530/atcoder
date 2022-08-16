#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if (max(x, y) - min(x, y) >= 3) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
