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
  ll n, ans = MOD;
  cin >> n;
  vec a(n), p(n), x(n);
  rep(i, n) cin >> a.at(i) >> p.at(i) >> x.at(i);
  rep(i, n) {
    if (x.at(i) > a.at(i)) {
      ans = min(p.at(i), ans);
    }
  }
  if (ans == MOD) ans = -1;
  cout << ans << endl;
}
