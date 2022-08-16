#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vvl(要素数2, 初期値))

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

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

int main() {
  ll n;
  cin >> n;
  vvll a(n, vll(9));
  for (ll i = 0; i < 9; i++) {
    a.at(0).at(i) = 1;
  }
  for (ll ni = 1; ni < n; ni++) {
    a.at(ni).at(0) = (a.at(ni - 1).at(0) + a.at(ni - 1).at(1)) % mod;
    for (ll j = 1; j < 8; j++) {
      a.at(ni).at(j) = ((a.at(ni - 1).at(j - 1) + a.at(ni - 1).at(j)) % mod +
                        a.at(ni - 1).at(j + 1)) %
                       mod;
    }
    a.at(ni).at(8) = (a.at(ni - 1).at(7) + a.at(ni - 1).at(8)) % mod;
  }
  ll ans = 0;
  for (ll i = 0; i < 9; i++) {
    ans = (ans + a.at(n - 1).at(i)) % mod;
  }
  cout << ans << endl;
}
