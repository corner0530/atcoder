#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum;
  cin >> n;
  vector<long long> a(n);
  vector<long long> b(n);
  for (long long i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (long long i = 0; i < n; i++) {
    cin >> b.at(i);
  }
  for (long long i = 0; i < n; i++) {
    sum += a.at(i) * b.at(i);
  }
  if (sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
