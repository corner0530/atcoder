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
  ll n, q;
  cin >> n >> q;
  vll a(n + 1), pos(n + 1);
  for (ll i = 1; i < n + 1; i++) {
    a.at(i) = i;
    pos.at(i) = i;
  }
  for (ll i = 0; i < q; i++) {
    ll x;
    cin >> x;
    if (pos.at(x) == n) {
      a.at(n) = a.at(n - 1);
      a.at(n - 1) = x;
      pos.at(a.at(n)) = n;
      pos.at(x) = n - 1;
    } else {
      a.at(pos.at(x)) = a.at(pos.at(x) + 1);
      a.at(pos.at(x) + 1) = x;
      pos.at(a.at(pos.at(x))) = pos.at(x);
      pos.at(x)++;
    }
  }
  for (ll ai = 1; ai < n; ai++) {
    cout << a.at(ai) << ' ';
  }
  cout << a.at(n) << endl;
}
