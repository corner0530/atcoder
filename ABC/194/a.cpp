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
  ll a, b, koke;
  cin >> a >> b;
  koke = a + b;
  if (koke >= 15 && b >= 8) {
    cout << 1 << endl;
  } else if (koke >= 10 && b >= 3) {
    cout << 2 << endl;
  } else if (koke >= 3) {
    cout << 3 << endl;
  } else {
    cout << 4 << endl;
  }
}
