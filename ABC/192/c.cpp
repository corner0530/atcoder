#include <bits/stdc++.h>

#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

int g_1(int x) {
  string str = to_string(x);
  sort(str.begin(), str.end());
  reverse(str.begin(), str.end());
  return stoi(str);
}
int g_2(int x) {
  string str = to_string(x);
  sort(str.begin(), str.end());
  return stoi(str);
}
int main() {
  long long n, k, a;
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    n = g_1(n) - g_2(n);
  }
  cout << n << endl;
}
