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

ll AND(ll x, ll y) {
  if (x <= 1 && y <= 1)
    return x * y;
  else
    return (x % 2) * (y % 2) + 2 * AND(x / 2, y / 2);
}

int main() {
  ll T;
  cin >> T;
  for (ll i = 0; i < T; i++) {
    ll a, s;
    cin >> a >> s;
    if ((2 * a <= s) && (((s - 2 * a) & a) == 0))
      Yes;
    else
      No;
  }
}
