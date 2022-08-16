#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n, s, d, res = 0;
  cin >> n >> s >> d;
  vector<long long> x(n);
  vector<long long> y(n);
  for (long long i = 0; i < n; i++) {
    cin >> x.at(i) >> y.at(i);
  }
  for (long long i = 0; i < n; i++) {
    if (x.at(i) < s && y.at(i) > d) {
      res = 1;
    }
  }
  if (res == 0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
