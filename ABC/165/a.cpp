#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, A, B, max;
  cin >> K >> A >> B;
  max = (B / K) * K;
  if (A <= max) {
    cout << "OK" << endl;
  } else {
    cout << "NG" << endl;
  }
}
