#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 1;
  for (int i = 0; i < n; i++) {
    ans *= 2;
  }
  cout << ans << endl;
}
