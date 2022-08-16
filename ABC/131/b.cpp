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
  ll n, l, sum, ans;
  cin >> n >> l;
  sum = (l - 1) * n + n * (n + 1) / 2;
  if (l >= 0)
    ans = sum - l;  // i=1
  else if (l + n - 1 <= 0)
    ans = sum - (l + n - 1);  // i=n
  else
    ans = sum;
  cout << ans << endl;
}
