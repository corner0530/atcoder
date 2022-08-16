#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define all(x) x.begin(), x.end()
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
typedef vector<ll> vec;
typedef vector<vec> vec2;  // vec2 変数名(要素数1, vec(要素数2, 初期値))

int main() {
  ll h, w, ans = 0;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  vec2 x(h, vec(w));
  vec2 y(h, vec(w));
  rep(i, h) {
    rep(j, w) {
      cin >> s.at(i).at(j);
    }
  }
  rep(i, h) {  // 各行について
    // 空白のマスがいくつ連続してるかを数える(連続するマスのうち右端のマスの値が連続する個数を表す)
    if (s.at(i).at(0) == '#')
      x.at(i).at(0) = 0;
    else
      x.at(i).at(0) = 1;
    rep1(j, w) {
      if (s.at(i).at(j) == '.')
        // 連続してたら1を足す
        x.at(i).at(j) = x.at(i).at(j - 1) + 1;
      else
        // '#'が来たらリセット
        x.at(i).at(j) = 0;
    }
    for (ll j = w - 2; j >= 0; j--) {
      // そのマスを含む空白が何マス連続するものなのかを上書き
      if (s.at(i).at(j) == '.')
        x.at(i).at(j) = max(x.at(i).at(j), x.at(i).at(j + 1));
    }
  }
  rep(j, w) {  // 各列について
    // 空白のマスがいくつ連続してるかを数える(連続するマスのうち右端のマスの値が連続する個数を表す)
    if (s.at(0).at(j) == '#')
      y.at(0).at(j) = 0;
    else
      y.at(0).at(j) = 1;
    rep1(i, h) {
      if (s.at(i).at(j) == '.')
        // 連続してたら1を足す
        y.at(i).at(j) = y.at(i - 1).at(j) + 1;
      else
        // '#'が来たらリセット
        y.at(i).at(j) = 0;
    }
    for (ll i = h - 2; i >= 0; i--) {
      // そのマスを含む空白が何マス連続するものなのかを上書き
      if (s.at(i).at(j) == '.')
        y.at(i).at(j) = max(y.at(i).at(j), y.at(i + 1).at(j));
    }
  }
  rep(i, h) {
    rep(j, w) {
      ans = max(ans, x.at(i).at(j) + y.at(i).at(j) - 1);
    }
  }
  cout << ans << endl;
}
