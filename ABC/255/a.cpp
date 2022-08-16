#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>     // bitset
#include <cctype>     // isupper, islower, isdigit, toupper, tolower
#include <cstdint>    // int64_t, int*_t
#include <cstdio>     // printf
#include <deque>      // deque
#include <iostream>   // cout, endl, cin
#include <map>        // map
#include <queue>      // queue, priority_queue
#include <set>        // set
#include <stack>      // stack
#include <string>     // string, to_string, stoi
#include <tuple>      // tuple, make_tuple
#include <unordered_map>  // unordered_map
#include <unordered_set>  // unordered_set
#include <utility>        // pair, make_pair
#include <vector>         // vector

// #include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265358979323846
#define MOD 1000000007
#define mod 998244353
#define INF 9223372036854775807   // 2147483647 // int
#define inf -9223372036854775808  // -2147483648 // int
using ll = long long;
using ull = unsigned long long;
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

ll gcd(ll a, ll b) {
  // 最大公約数 (O(log N))
  if (a < b) {
    return gcd(b, a);
  }
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

ll lcm(ll a, ll b) {
  // 最小公倍数 (O(log N))
  ll d = gcd(a, b);
  return a / d * b;
}

// Download samples : oj d (URL) (remove "test" : rm -R ./test)
// Test             : g++ a.cpp -> oj t
// Submit           : oj s (URL) (File name)

int main() {
  ll r, c;
  cin >> r >> c;
  ll ans = 0;
  for (ll i = 0; i < 4; i++) {
    ll a;
    cin >> a;
    if (r == 1 && c == 1 && i == 0)
      cout << a << endl;
    else if (r == 1 && c == 2 && i == 1)
      cout << a << endl;
    else if (r == 2 && c == 1 && i == 2)
      cout << a << endl;
    else if (r == 2 && c == 2 && i == 3)
      cout << a << endl;
  }
}
