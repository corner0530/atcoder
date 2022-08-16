#include <bits/stdc++.h>

#include <vector>

using namespace std;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define repe(i, n) for (ll i = 0; i <= n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvll(要素数2, 初期値))

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

ll GCD(ll m, ll n) {
  // mとnの最大公約数を返す(O(log n))
  if (n == 0) return m;
  return GCD(n, m % n);
}

ll p(ll x) {
  ll cnt = 0;
  while (x >= 10) {
    cnt++;
    x /= 10;
  }
  ll res = 1;
  for (ll i = 0; i < cnt; i++) {
    res *= 10;
  }
  return res;
}

ll ans(ll N) {
  if (N < 10) {
    return N * (N + 1) / 2;
  } else {
    if (N % 2 != 0) {
      return ((((N - p(N) + 1) / 2) % mod) * ((N - p(N) + 2) % mod) +
              ans(p(N) - 1)) %
             mod;
    } else {
      return (((N - p(N) + 1) % mod) * (((N - p(N) + 2) / 2) % mod) +
              ans(p(N) - 1)) %
             mod;
    }
  }
}

int main() {
  ll N;
  cin >> N;
  cout << ans(N) << endl;
}
