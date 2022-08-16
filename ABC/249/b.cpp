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
  string s;
  cin >> s;
  bool ans = true;
  for (ll i = 0; i < s.size(); i++) {
    for (ll j = i + 1; j < s.size(); j++) {
      if (s.at(i) == s.at(j)) ans = false;
    }
  }
  bool large = false, small = false;
  for (ll i = 0; i < s.size(); i++) {
    ll c_ll = (ll)s.at(i);
    if (c_ll >= 65 && c_ll <= 90) large = true;
    if (c_ll >= 97 && c_ll <= 122) small = true;
  }
  if (!(large) || !(small)) ans = false;
  YesNo(ans);
}
