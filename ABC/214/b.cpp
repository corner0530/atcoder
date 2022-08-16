#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repe(i, n) for (ll i = 0; i <= n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define all(x) x.begin(), x.end()
#define PI 3.14159265358979323846
#define MOD 1000000007
typedef vector<ll> vec;
typedef vector<vec> vec2;  // vec2 変数名(要素数1, vec(要素数2, 初期値))

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

ll GCD(ll m, ll n) {
  // mとnの最大公約数を返す(O(log n))
  if (n == 0) return m;
  return GCD(n, m % n);
}

int main() {
  ll s, t, ans = 0;
  cin >> s >> t;
  repe(a, s) {
    repe(b, s) {
      repe(c, s) {
        if (a + b + c <= s && a * b * c <= t) ans++;
      }
    }
  }
  cout << ans << endl;
}
