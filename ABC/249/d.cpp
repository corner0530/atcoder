#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;  // vvll 変数名(要素数1, vll(要素数2, 初期値))

void YESNO(bool ans) {
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

void YesNo(bool ans) {
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

ll new_pow(ll x, ll n) {
  ll ret = 1;
  while (0 < n) {
    if ((n % 2) == 0) {
      x *= x;
      n >>= 1;
    } else {
      ret *= x;
      n--;
    }
  }
  return ret;
}

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

vll divisor(ll n) {
  vll ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  sort(ret.begin(), ret.end());  // 昇順に並べる
  return ret;
}

int main() {
  ll n;
  cin >> n;
  vll a(201010, 0), cnt(201010, 0);
  for (ll i = 0; i < n; i++) {
    cin >> a.at(i);
    cnt.at(a.at(i))++;
  }

  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    vll divs = divisor(a.at(i));
    for (ll di = 0; di < divs.size(); di++) {
      ll cntj = cnt.at(divs.at(di));
      ll cntk = cnt.at(a.at(i) / divs.at(di));
      ans += cntj * cntk;
    }
  }
  cout << ans << endl;
}
