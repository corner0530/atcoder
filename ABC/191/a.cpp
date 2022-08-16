#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int v, t, s, d;
  cin >> v >> t >> s >> d;
  if (v * t <= d && d <= v * s) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
