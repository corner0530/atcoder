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
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvl(要素数2, 初期値))

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

ll GCD(ll m, ll n) {
  /*  mとnの最大公約数を返す(O(log n))
      ただしm < n*/
  if (m >= n)
    return GCD(n, m);
  else {
    if (m == 0) return n;
    return GCD(n % m, m);
  }
}

int main() {
  ll a, b, c, x;
  cin >> a >> b >> c >> x;
  ll a_n = 0, b_n = 0, c_n = 0, ans = 0;
  while (x - 500 * a_n >= 0 && a_n <= a) {
    b_n = 0;
    while (x - 500 * a_n - 100 * b_n >= 0 && b_n <= b) {
      c_n = 0;
      while (x - 500 * a_n - 100 * b_n - 50 * c_n >= 0 && c_n <= c) {
        if (x == 500 * a_n + 100 * b_n + 50 * c_n) ans++;
        c_n++;
      }
      b_n++;
    }
    a_n++;
  }
  cout << ans << endl;
}
