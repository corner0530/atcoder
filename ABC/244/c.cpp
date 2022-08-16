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
  ll n;
  cin >> n;
  map<ll, ll> num;
  for (ll i = 1; i <= 2 * n + 1; i++) {
    num[i] = 0;
  }
  for (ll i = 0; i < n + 1; i++) {
    for (ll j = 1; j <= 2 * n + 1; j++) {
      if (num.at(j) == 0) {
        num.at(j) = 1;
        cout << j << endl;
        break;
      }
    }
    ll a;
    cin >> a;
    if (a == 0) return 0;
    num.at(a) = 1;
  }
}
