#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>     // bitset
#include <cctype>     // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <cstdint>  // int64_t, int*_t
#include <cstdio>   // printf
#include <deque>    // deque
#include <iomanip>
#include <iostream>  // cout, endl, cin
#include <map>       // map
#include <queue>     // queue, priority_queue
#include <set>       // set
#include <stack>     // stack
#include <string>    // string, to_string, stoi
#include <tuple>     // tuple, make_tuple
#include <typeinfo>
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
  while (n) {
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

ll pow_mod(ll x, ll n) {
  ll ret = 1;
  while (n) {
    if (n & 1) ret = ret * x % mod;
    x = x * x % mod;
    n /= 2;
  }
  return ret;
}

// 二項係数
ll comb(ll n, ll r) {
  ll x = 1, y = 1;
  for (ll i = 0; i < r; i++) x = x * (n - i) % mod;
  for (ll i = 1; i <= r; i++) y = y * i % mod;
  return x * pow_mod(y, mod - 2) % mod;
}

// 素数判定 (O(\sqrt(N)))
bool is_prime(ll N) {
  if (N == 1) return false;
  for (ll i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}

// 最大公約数 (O(log N))
ll gcd(ll a, ll b) {
  if (a < b) {
    return gcd(b, a);
  }
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

// 最小公倍数 (O(log N))
ll lcm(ll a, ll b) {
  ll d = gcd(a, b);
  return a / d * b;
}

ll fact_mod(ll n) {
  ll sum = 1;
  for (ll i = 1; i <= n; i++) {
    sum = (sum * i) % mod;
  }
  return sum;
}

int main() {
  ll n;
  cin >> n;
  if (n < 0) {
    if (n % 998244353 == 0) {
      cout << 0 << endl;

    } else {
      cout << 998244353 + n % 998244353 << endl;
    }
  } else {
    cout << n % 998244353 << endl;
  }
}
