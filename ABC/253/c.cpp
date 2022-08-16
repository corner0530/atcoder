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

bool is_prime(ll N) {
  // 素数判定 (O(\sqrt(N)))
  if (N == 1) return false;
  for (ll i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}
// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

int main() {
  ll q;
  cin >> q;
  map<ll, ll> s;
  set<ll> num;
  for (ll qi = 0; qi < q; qi++) {
    ll qnum;
    cin >> qnum;
    if (qnum == 1) {
      ll x;
      cin >> x;
      if (s.count(x)) {
        s.at(x)++;
      } else {
        s[x] = 1;
        num.insert(x);
      }
    } else if (qnum == 2) {
      ll x, c;
      cin >> x >> c;
      if (s.count(x)) {
        s.at(x) -= min(c, s.at(x));
        if (s.at(x) == 0) {
          s.erase(x);
          num.erase(x);
        }
      }
    } else if (qnum == 3) {
      cout << *rbegin(num) - *begin(num) << endl;
    }
  }
}
