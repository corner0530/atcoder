#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vll(要素数2, 初期値))

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
  ll a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  ll taka = 0, ao = 0;
  ll ts = 0, as = 0;  // 0:walk
  ll tc = 0, ac = 0;  // count
  for (ll i = 0; i < x; i++) {
    if (ts == 0) {
      taka += b;
      tc++;
      if (tc >= a) {
        ts = 1;
        tc = 0;
      }
    } else {
      tc++;
      if (tc >= c) {
        ts = 0;
        tc = 0;
      }
    }
    if (as == 0) {
      ao += e;
      ac++;
      if (ac >= d) {
        as = 1;
        ac = 0;
      }
    } else {
      ac++;
      if (ac >= f) {
        as = 0;
        ac = 0;
      }
    }
  }
  if (taka > ao)
    cout << "Takahashi" << endl;
  else if (taka < ao)
    cout << "Aoki" << endl;
  else
    cout << "Draw" << endl;
}
