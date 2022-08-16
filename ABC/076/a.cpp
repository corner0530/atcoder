#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, R, G;  // x:necessary performance R:Rating G:Goal
  cin >> R >> G;
  x = 2 * G - R;  // ( x + R ) / 2 = G
  cout << x << endl;
}
