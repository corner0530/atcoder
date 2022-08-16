#include <bits/stdc++.h>

#include <numeric>
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
  ll n, a, b, preb = 0, sur = 0, flag = 0;
  cin >> n;
  vector<pair<ll, ll>> p(n);
  rep(i, n) {
    cin >> a >> b;
    p.at(i) = make_pair(b, a);
  }
  sort(all(p));
  rep(i, n) {
    tie(b, a) = p.at(i);
    if (a > b - preb + sur) {
      flag = 1;
      break;
    }
    sur += b - preb - a;
    preb = b;
  }

  if (flag == 1)
    No;
  else
    Yes;
}
