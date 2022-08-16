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
  ll n, k, x;
  cin >> n >> k >> x;
  vll a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    if (a.at(i) >= x) {
      if (a.at(i) < x * k) {
        ll coupon = a.at(i) / x;
        a.at(i) -= x * coupon;
        k -= coupon;
      } else {
        a.at(i) -= x * k;
        k = 0;
      }
    }
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for (ll i = 0; i < n; i++) {
    if (k == 0) break;
    if (a.at(i) > 0) {
      a.at(i) = 0;
      k--;
    }
  }
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    ans += a.at(i);
  }
  cout << ans << endl;
}
