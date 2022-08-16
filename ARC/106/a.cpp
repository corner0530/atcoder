#include <bits/stdc++.h>
#include <math.h>

#include <cstdlib>
using namespace std;

int main() {
  long long N, B, x = 1, y = 1, mode = -1;
  cin >> N;
  B = log10(N) / log10(3.0);
  for (long long i = 1; i <= B; i++) {
    y = y * 3;
    for (long long j = 1; x <= N - y; j++) {
      x = x * 5;
      if (x == N - y) {
        cout << i << " " << j << endl;
        mode = 1;
      }
    }
    x = 1;
  }
  if (mode == -1) {
    cout << mode << endl;
  }
}
