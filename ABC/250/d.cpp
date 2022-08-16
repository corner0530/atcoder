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

#define MAXP 1000005

vll prime_list;
void construct_plist() {
  vector<bool> fl(MAXP, false);
  for (ll i = 2; i < MAXP; i++) {
    if (fl[i]) {
      continue;
    }
    prime_list.push_back(i);
    for (ll j = i; j < MAXP; j += i) {
      fl[j] = true;
    }
  }
}

ll f(ll p, ll q) {
  double est = 1;
  est = (q * q * q);
  est *= p;
  if (est > 4e18) {
    return 4e18;
  }
  return p * q * q * q;
}
int main() {
  construct_plist();
  ll n;
  cin >> n;
  ll res = 0;
  ll sz = prime_list.size();
  ll q = sz - 1;
  for (ll p = 0; p < sz; p++) {
    while (p < q && f(prime_list[p], prime_list[q]) > n) {
      q--;
    }
    if (p >= q) {
      break;
    }
    res += (q - p);
  }
  cout << res << endl;
}
