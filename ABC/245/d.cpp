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
  ll n, m;
  cin >> n >> m;
  vll a(n + 1), b(m + 1, 0), c(n + m + 1);
  for (ll i = 0; i <= n; i++) {
    cin >> a.at(i);
  }
  for (ll i = 0; i <= n + m; i++) {
    cin >> c.at(i);
  }
  for (ll i = m; i >= 0; i--) {
    b.at(i) = c.at(n + i) / a.at(n);
    for (ll j = n; j >= 0; j--) {
      c.at(j + i) -= a.at(j) * b.at(i);
    }
  }
  /*for (ll i = 0; i < n; i++) {
    b.at(i) = c.at(i);
  }*/

  for (ll i = 0; i < m; i++) {
    cout << b.at(i) << ' ';
  }
  cout << b.at(m) << endl;
}
