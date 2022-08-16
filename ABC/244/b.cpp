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
  string t;
  cin >> t;
  ll muki = 0;
  ll x = 0, y = 0;
  for (ll i = 0; i < n; i++) {
    char c = t.at(i);
    if (c == 'S') {
      if (muki == 0)
        x++;
      else if (muki == 1)
        y--;
      else if (muki == 2)
        x--;
      else
        y++;
    } else {
      muki = (muki + 1) % 4;
    }
  }
  cout << x << ' ' << y << endl;
}