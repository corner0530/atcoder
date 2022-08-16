#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define all(x) x.begin(), x.end()
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
typedef vector<ll> vec;
typedef vector<vec> vec2;  // vec2 変数名(要素数1, vec(要素数2, 初期値))

int main() {
  ll n, ans = 1000000000, s1, s2;
  cin >> n;
  vec w(n);
  rep(i, n) cin >> w.at(i);
  rep(t, n) {
    s1 = 0;
    s2 = 0;
    for (ll i = 0; i < t; i++) {
      s1 += w.at(i);
    }
    for (ll i = t; i < n; i++) {
      s2 += w.at(i);
    }
    ans = min(ans, abs(s1 - s2));
  }
  cout << ans << endl;
}
