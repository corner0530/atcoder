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
  ll a, b, c, d, start, goal, e, ans;
  cin >> a >> b >> c >> d;
  ans = b - a + 1;
  e = lcm(c, d);

  if (a % c != 0)
    start = a + (c - a % c);
  else
    start = a;
  if (b % c != 0)
    goal = b - b % c;
  else
    goal = b;
  ans -= (goal - start) / c + 1;

  if (a % d != 0)
    start = a + (d - a % d);
  else
    start = a;
  if (b % d != 0)
    goal = b - b % d;
  else
    goal = b;
  ans -= (goal - start) / d + 1;

  if (a % e != 0)
    start = a + (e - a % e);
  else
    start = a;
  if (b % e != 0)
    goal = b - b % e;
  else
    goal = b;
  ans += (goal - start) / e + 1;

  cout << ans << endl;
}
