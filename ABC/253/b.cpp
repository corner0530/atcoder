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

bool is_prime(ll N) {
  // 素数判定 (O(\sqrt(N)))
  if (N == 1) return false;
  for (ll i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}
// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

int main() {
  ll h, w;
  cin >> h >> w;
  ll h1, w1, h2, w2;
  bool ex1 = false, ex2 = false;
  for (ll hi = 0; hi < h; hi++) {
    string s;
    cin >> s;
    for (ll wi = 0; wi < w; wi++) {
      if (s.at(wi) == 'o') {
        if (!ex1) {
          ex1 = true;
          h1 = hi;
          w1 = wi;
        } else if (!ex2) {
          ex2 = true;
          h2 = hi;
          w2 = wi;
        }
      }
    }
  }
  // cout << h1 << endl << h2 << endl << w1 << endl << w2 << endl;
  cout << abs(h1 - h2) + abs(w1 - w2) << endl;
}
