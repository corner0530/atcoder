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
  ll n, k;
  cin >> n >> k;
  vll a(n), b(n);
  for (ll i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (ll i = 0; i < n; i++) {
    cin >> b.at(i);
  }
  bool next_a = true, next_b = true;
  for (ll i = 0; i < n - 1; i++) {
    bool aa, ab, ba, bb;
    aa = (abs(a.at(i) - a.at(i + 1)) <= k);
    ab = (abs(a.at(i) - b.at(i + 1)) <= k);
    ba = (abs(b.at(i) - a.at(i + 1)) <= k);
    bb = (abs(b.at(i) - b.at(i + 1)) <= k);
    bool rev_a = next_a, rev_b = next_b;
    if ((rev_a && aa) || (rev_b && ba)) {
      next_a = true;
    } else {
      next_a = false;
    }
    if ((rev_a && ab) || (rev_b && bb)) {
      next_b = true;
    } else {
      next_b = false;
    }
    if ((!next_a) && (!next_b)) {
      YesNo(false);
      return 0;
    }
  }
  YesNo(true);
}
