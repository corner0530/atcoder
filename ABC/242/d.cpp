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

void yesno(bool ans) {
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
  string s;
  cin >> s;
  ll q;
  cin >> q;
  auto g = [&](char x, ll t) { return char('A' + (x - 'A' + t) % 3); };
  std::function<char(ll, ll)> f = [&](ll t, ll k) {
    if (t == 0) return s.at(k);
    if (k == 0) return g(s.at(0), t);
    return g(f(t - 1, k / 2), k % 2 + 1);
  };
  for (ll i = 0; i < q; i++) {
    ll t, k;
    cin >> t >> k;
    cout << f(t, k - 1) << endl;
  }
}
