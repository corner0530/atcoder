#include <bits/stdc++.h>

#include <vector>
using namespace std;

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

ll digits_sum(ll num, ll n) {
  /* n進法におけるnumの各桁の和 */
  if (n < 2) return -1;
  ll sum = 0;
  while (num > 0) {
    sum += num % n;
    num /= n;
  }
  return sum;
}

int main() {
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  while (n > 0) {
    n /= k;
    ans++;
  }
  cout << ans << endl;
}
