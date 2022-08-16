#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, s1, s2, s3, p;
  cin >> s;
  s1 = int(s / 100);
  s2 = int((s - s1 * 100) / 10);
  s3 = s - s1 * 100 - s2 * 10;
  p = s1 + s2 + s3;
  cout << p << endl;
}
