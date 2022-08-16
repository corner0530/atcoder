#include <bits/stdc++.h>

#include <vector>
using namespace std;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define repe(i, n) for (ll i = 0; i <= n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvl(要素数2, 初期値))

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

void YESNO(bool ans) {
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

void yesno(bool ans) {
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

ll GCD(ll m, ll n) {
  /*  mとnの最大公約数を返す(O(log n))
      ただしm < n*/
  if (m >= n)
    return GCD(n, m);
  else {
    if (m == 0) return n;
    return GCD(n % m, m);
  }
}

int main() {
  ll n, d;
  cin >> n >> d;
  vvll x(n, vll(d));
  ll ans = 0;
  for (ll ni = 0; ni < n; ni++) {
    for (ll di = 0; di < d; di++) {
      cin >> x.at(ni).at(di);
    }
  }
  for (ll yi = 0; yi < n; yi++) {
    for (ll zi = yi + 1; zi < n; zi++) {
      ll sqr_sum = 0;
      for (ll i = 0; i < d; i++) {
        sqr_sum += (x.at(yi).at(i) - x.at(zi).at(i)) *
                   (x.at(yi).at(i) - x.at(zi).at(i));
      }
      ll sqr = (ll)sqrt((float)sqr_sum) * (ll)sqrt((float)sqr_sum);
      if (sqr == sqr_sum) {
        ans++;
        // cout << yi << ' ' << zi << ' ' << sqr << ' ' << (float)sqr_sum <<
        // endl;
      }
    }
  }
  cout << ans << endl;
}
