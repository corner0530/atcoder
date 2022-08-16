#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  string out = "APPROVED";
  cin >> n;
  // vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a % 2 == 0) {
      if (a % 3 != 0 && a % 5 != 0) {
        out = "DENIED";
      }
    }
  }
  cout << out << endl;
}
