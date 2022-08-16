#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b, c;
  string name;
  cin >> a >> b >> c;
  if (c == 0) {
    if (a > b) {
      name = "Takahashi";
    } else {
      name = "Aoki";
    }
  } else {
    if (a >= b) {
      name = "Takahashi";
    } else {
      name = "Aoki";
    }
  }
  cout << name << endl;
}
