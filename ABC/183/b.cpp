#include <bits/stdc++.h>
using namespace std;

int main() {
  long long sx, sy, gx, gy;
  double ans, sum1, sum2;
  cin >> sx >> sy >> gx >> gy;
  sum1 = (double)(sx * gy + gx * sy);
  sum2 = (double)(sy + gy);
  ans = sum1 / sum2;
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
