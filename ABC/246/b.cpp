#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvl(要素数2, 初期値))

void YESNO(bool ans) {
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

void YesNo(bool ans) {
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

ll new_pow(ll x, ll n) {
  ll ret = 1;
  while (0 < n) {
    if ((n % 2) == 0) {
      x *= x;
      n >>= 1;
    } else {
      ret *= x;
      n--;
    }
  }
  return ret;
}

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

int main() {
  double a, b;
  cin >> a >> b;
  double x, y, d;
  d = sqrt(a * a + b * b);
  x = a / d;
  y = b / d;
  cout << fixed;
  cout << setprecision(10) << x << ' ' << setprecision(10) << y << endl;
}
