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
  ll n, w;
  cin >> n >> w;
  vll a(n);
  ll ans = 0;
  vll ex(w + 1, 0);
  for (ll i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (ll i = 0; i < n; i++) {
    if (a.at(i) <= w) {
      if (ex.at(a.at(i)) == 0) {
        ex.at(a.at(i))++;
        ans++;
      }
    }
    if (i < n - 1) {
      for (ll j = i + 1; j < n; j++) {
        if (a.at(i) + a.at(j) <= w) {
          if (ex.at(a.at(i) + a.at(j)) == 0) {
            ex.at(a.at(i) + a.at(j))++;
            ans++;
          }
        }
        if (i < n - 2 && j < n - 1) {
          for (ll k = j + 1; k < n; k++) {
            if (a.at(i) + a.at(j) + a.at(k) <= w) {
              if (ex.at(a.at(i) + a.at(j) + a.at(k)) == 0) {
                ex.at(a.at(i) + a.at(j) + a.at(k))++;
                ans++;
              }
            }
          }
        }
      }
    }
  }

  cout << ans << endl;
}
