#include <bits/stdc++.h>

#include <vector>

using namespace std;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define repe(i, n) for (ll i = 0; i <= n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvl(要素数2, 初期値))

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

ll GCD(ll m, ll n) {
  // mとnの最大公約数を返す(O(log n))
  if (n == 0) return m;
  return GCD(n, m % n);
}

bool dp(vll dif, ll i, ll sum) {
  bool re = false;
  if (sum == 0) re = true;
  if (i > 0) re = re || dp(dif, i - 1, sum - dif.at(i - 1));
  return re;
}

bool f(vll dif, ll i, ll N, ll sum) {
  if (sum == 0) return true;
  if (i == N) return false;
  if (dif.at(i) > sum)
    return f(dif, i + 1, N, sum);
  else
    return f(dif, i + 1, N, sum - dif.at(i));
}

int main() {
  ll N, X;
  cin >> N >> X;
  ll sum = 0;
  vll a(N), b(N), dif(N);
  for (ll i = 0; i < N; i++) {
    cin >> a.at(i) >> b.at(i);
    sum += a.at(i);
    dif.at(i) = b.at(i) - a.at(i);
  }
  if (sum > X) {
    No;
  } else {
    sort(dif.begin(), dif.end());
    reverse(dif.begin(), dif.end());
    vector<vector<bool>> d(N + 1, vector<bool>(X - sum + 1, false));
    for (ll i = 0; i < N + 1; i++) {
      d.at(i).at(0) = true;
    }
    for (ll i = 0; i < N; i++) {
      for (ll j = 0; j < X - sum + 1; j++) {
        if (j >= dif.at(i))
          d.at(i + 1).at(j) = d.at(i + 1).at(j) || d.at(i).at(j - dif.at(i));
        d.at(i + 1).at(j) = d.at(i + 1).at(j) || d.at(i).at(j);
      }
    }
    if (d.at(N).at(X - sum))
      Yes;
    else
      No;
    /*if (dp(dif, N, X - sum))
      Yes;
    else No;*/
  }
}
