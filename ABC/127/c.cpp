#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, l, r, left = 1, right;
  cin >> n >> m;
  right = n;
  for (long long i = 0; i < m; i++) {
    cin >> l >> r;
    left = max(left, l);
    right = min(right, r);
  }
  if (right < left) {
    cout << 0 << endl;
  } else {
    cout << right - left + 1 << endl;
  }
}
