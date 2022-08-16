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
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());
  if (s < t)
    Yes;
  else
    No;
}
