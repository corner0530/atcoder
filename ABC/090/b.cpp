#include <bits/stdc++.h>

#include <vector>
using namespace std;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define repe(i, n) for (ll i = 0; i <= n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvl(要素数2, 初期値))

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

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
  ll a, b;
  cin >> a >> b;
  ll ans = 0;
  for (ll i = a; i <= b; i++) {
    ll i1 = i / 10000, i2 = (i - i1 * 10000) / 1000,
       i3 = (i - i1 * 10000 - i2 * 1000) / 100,
       i4 = (i - i1 * 10000 - i2 * 1000 - i3 * 100) / 10, i5 = i % 10;
    if (i1 == i5 && i2 == i4) ans++;
  }
  cout << ans << endl;
}
