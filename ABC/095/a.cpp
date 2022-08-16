#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
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
  ll res = 700;
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s.at(i) == 'o') res += 100;
  }
  cout << res << endl;
}
