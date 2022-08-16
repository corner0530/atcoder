#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n, x, a;
  cin >> n >> x;
  for (long long i = 0; i < n; i++) {
    cin >> a;
    if (a != x) cout << a << ' ';
  }
  cout << endl;
}
