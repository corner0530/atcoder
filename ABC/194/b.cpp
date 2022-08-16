#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
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
  ll n, ans = 200000, time;
  cin >> n;
  vec a(n), b(n), sum(n);
  rep(i, n) {
    cin >> a.at(i) >> b.at(i);
    sum.at(i) = a.at(i) + b.at(i);
  }
  rep(i, n) {
    rep(j, n) {
      time = max(a.at(i), b.at(j));
      if (i == j) time = sum.at(i);
      ans = min(time, ans);
    }
  }
  cout << ans << endl;
}
