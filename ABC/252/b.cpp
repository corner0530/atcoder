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
  ll n, k;
  cin >> n >> k;
  vll a(n), b(k);
  for (ll i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (ll i = 0; i < k; i++) {
    cin >> b.at(i);
  }
  vll acopy(n);
  for (ll i = 0; i < n; i++) {
    acopy.at(i) = a.at(i);
  }

  sort(acopy.begin(), acopy.end());
  reverse(acopy.begin(), acopy.end());
  ll maxa = acopy.at(0);
  bool ans = false;
  for (ll i = 0; i < n; i++) {
    if (a.at(i) != maxa) {
      continue;
    } else {
      for (ll j = 0; j < k; j++) {
        if (i + 1 == b.at(j)) ans = true;
      }
    }
  }
  YesNo(ans);
}
